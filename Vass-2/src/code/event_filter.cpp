#include<QDebug>

#ifdef linux
#include "headers/event_filter.h"

namespace
{
    Display * m_display;
    Window m_win;
    unsigned int modifier;

    QVector<quint32> maskModifiers(){
        return QVector<quint32>() << 0 << Mod2Mask << LockMask << (Mod2Mask | LockMask);
    }
}

event_filter::event_filter(KeySym icons ,
                           KeySym config ,
                           QObject *parent ,
                           unsigned int i_m ,
                           unsigned int conf_m
                           ):QObject (parent)
{
    m_display = QX11Info::display();
    m_win = DefaultRootWindow(m_display);
    _icon_keycode = XKeysymToKeycode(m_display,icons);
    _config_keycode=XKeysymToKeycode(m_display,config);

    _icon_modifier = i_m;
    config_modifier = conf_m;

}

bool event_filter::nativeEventFilter(const QByteArray &eventType, void *message, long *result)
{
    Q_UNUSED(eventType);
    Q_UNUSED(result);
    xcb_key_press_event_t *keyEvent = nullptr;
    if(eventType == "xcb_generic_event_t")
    {
        xcb_generic_event_t *event = static_cast<xcb_generic_event_t *>(message);
        if((event -> response_type & 127) == XCB_KEY_PRESS)
        qDebug() << "here 3";
        {
            keyEvent = static_cast<xcb_key_press_event_t *>(message);
            foreach(quint32 maskMods , maskModifiers())
            {
                if((keyEvent->state==(_icon_modifier | maskMods)) && keyEvent ->detail == _icon_keycode)
                {
                   // qDebug()<<"Icons called";
                    emit icon_called();
                    return true;
                }
                else if((keyEvent->state==(config_modifier | maskMods)) && keyEvent ->detail == _config_keycode)
                {
                    emit config_called();
                    return true;
                }

            }
        }
    }
    return false;
}


void event_filter::setShortcut( Apps application)
{
    int key_code;
    switch (application) {
    case Apps::Icons:
        key_code = _icon_keycode;
        modifier = _icon_modifier;
        break;
    case Apps::Config:
        key_code = _config_keycode;
        modifier = config_modifier;
        break;

    default:
        return;
    }

    unsetShortcut(key_code);


    foreach(quint32 maskMods , maskModifiers())
    {
        XGrabKey(m_display,         //  specify connection with X11 server
                 key_code ,          // key code
                 modifier | maskMods,   // modifier
                 m_win,             // window to look
                 True,
                 GrabModeAsync,
                 GrabModeAsync);
    }
}

void event_filter::unsetShortcut(int key){
    foreach(quint32 maskMods,maskModifiers())
    {
        XUngrabKey(m_display,
                   key,
                   modifier | maskMods,
                   m_win);
    }
}

void event_filter::upadteHotKeys(KeyCode new_hotkey, Apps app , unsigned int modifier)
{
    switch (app) {
    case Apps::Icons:
        unsetShortcut(_icon_keycode);
        _icon_keycode = XKeysymToKeycode(m_display,new_hotkey);
        _icon_modifier = modifier;
        break;

    case Apps::Config:
        unsetShortcut(_config_keycode);
        _config_keycode = XKeysymToKeycode(m_display,new_hotkey);
        config_modifier = modifier;
        break;
    default:
        break;
    }

    setShortcut(app);

}

#endif
