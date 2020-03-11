#include "headers/shortcut_v.h"
#include "headers/event_filter.h"
#include <QString>
#include <QFileInfo>
#include <exception>
#include <QDebug>
#include <iostream>
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <xcb/xcb.h>
#include <map>
shortcut_v *shortcut_v::Shortcuts_Base = nullptr;

const std::map<std::string, int> shortcut_v::_keymapping = {
    {"Q", XK_Q},
    {"W", XK_W},
    {"E", XK_E},
    {"R", XK_R},
    {"Y", XK_Y},
    {"U", XK_U},
    {"O", XK_O},
    {"P", XK_P},
    {"A", XK_A},
    {"S", XK_S},
    {"D", XK_D},
    {"F", XK_F},
    {"G", XK_G},
    {"H", XK_H},
    {"J", XK_J},
    {"K", XK_K},
    {"L", XK_L},
    {"Z", XK_Z},
    {"X", XK_X},
    {"C", XK_C},
    {"V", XK_V},
    {"B", XK_B},
    {"N", XK_N},
    {"M", XK_M},
    {"Ctrl", ControlMask},
    {"Alt", Mod1Mask},
    {"Shift", ShiftMask}};

shortcut_v::shortcut_v()
{

    std::vector<int> tmp_keys = saver.read_keys();
    //  qDebug() << tmp_keys;
    //  qDebug() << "created new Shortcut vector";
    _shortcuts_file = QObject::tr("shortcuts.abk");
    _summirized_weight = 0;
    readFromFile();
    if (tmp_keys[0] == 0 and tmp_keys[1] == 0 and tmp_keys[2] == 0 and tmp_keys[3] == 0)
    {
        _icons = Qt::Key_M;
        _config = Qt::Key_Q;

        _icons_mod = ControlMask;
        _config_mod = ControlMask;
    }
    else
    {
        _icons = tmp_keys[0];
        _config = tmp_keys[1];

        std::vector<int> tmp_mod = saver.read_modifiers();
        _icons_mod = tmp_mod[0];
        _config_mod = tmp_mod[1];
    }

    // _hotKeys = {_icons,_config,_time,_player};
    _hotKeys = {_icons, _config};
}

shortcut_v::~shortcut_v()
{
    //  qDebug() << "saving keys";
    //std::vector<int> keys = {_icons,_config,_time,_player};
    std::vector<int> keys = {_icons, _config};
    std::vector<int> modifiers = {_icons_mod, _config_mod};
    //std::vector<int> modifiers = {_icons_mod,_config_mod,_time_mod,_player_mod};
    saver.save_icons(keys, modifiers);
}

std::string shortcut_v::setModPrefix(unsigned int modifier)
{
    if (modifier == ControlMask)
    {
        return "Ctrl + ";
    }
    else if (modifier == ShiftMask)
    {
        return "Shift + ";
    }
    else if (modifier == Mod1Mask)
    {
        return "AltL +";
    }
    else
    {
        return " ";
    }
}

void shortcut_v::writeToFile()
{

    if (_shortcuts_file.isEmpty())
        return;
    QFile file(_shortcuts_file);
    if (!file.open(QIODevice::WriteOnly))
    {
        //        QMessageBox::information(this,tr("Unable to open the file"),file.errorString());
        return;
    }
    //
    QStringList data_to_save = {};
    //qDebug() << "I am in write to file";
    for (auto &i : _shortcuts_class)
    {
        //  qDebug()<<i.get_path();
        data_to_save.append(i.get_path());
    }

    QDataStream out(&file);
    out.setVersion(QDataStream::Qt_4_5);
    out << data_to_save;
};

void shortcut_v::readFromFile()
{
    if (_shortcuts_file.isEmpty())
        return;
    QFile file(_shortcuts_file);
    if (!file.open(QIODevice::ReadOnly))
    {
        //        QMessageBox::information(this,tr("Unable to open window"),file.errorString());
        return;
    }
    QDataStream in(&file);
    QStringList data_from_file;
    in.setVersion(QDataStream::Qt_4_5);
    in >> data_from_file;
    //  qDebug () << "Here we are";
    for (int i = 0; i < data_from_file.size(); ++i)
    {
        parse_names(data_from_file.at(i).toLocal8Bit().constData());
    }
};

void shortcut_v::parse_names(QString filename)
{
    //    std::regex _app_parser{R"((.*)\/(.*)(\..*)$)"};
    std::smatch matches;
    std::string path = filename.toStdString();
    std::regex_search(path, matches, _app_parser);
    path = matches[1];
    std::string app = matches[2];
    // qDebug() << "in parsrr";
    std::string extension = matches[3];
    std::pair<std::string, QString> name_icon;
    bool is_image = false;
    bool exist = false;
    std::string icon_path;
    for (auto ext : _image_ext)
    {
        QFileInfo check_file(QString::fromStdString(path + "/" + app + ext));
        if (check_file.exists())
        {
            icon_path = path + "/" + app + ext;
            exist = true;
            break;
        }
    }

    if (std::find(_image_ext.begin(), _image_ext.end(), extension) != _image_ext.end())
    {
        is_image = true;
        name_icon = std::make_pair(app + extension, QString::fromStdString(":/icons/images/picture.png"));
    }
    else if (std::find(_doc_ext.begin(), _doc_ext.end(), extension) != _doc_ext.end())
    {
        name_icon = std::make_pair(app + extension, QString::fromStdString(":/icons/images/contract.png"));
    }
    else if (exist)
    {
        name_icon = std::make_pair(app, QString::fromStdString(icon_path));
    }
    else if (extension == ".ex")
    {
        name_icon = std::make_pair(app, QString::fromStdString(""));
    }
    else
    {
        name_icon = std::make_pair(app, QString::fromStdString(":/icons/images/question-mark-button.png"));
    }

    _shortcuts_class.emplace_back(extension, name_icon.first, filename, name_icon.second, is_image);
}

int shortcut_v::return_key_code(QString _key)
{
    std::map<std::string, int>::const_iterator keypair = this -> _keymapping.find(_key.toUtf8().constData());
    int keycode = keypair == this -> _keymapping.end() ? Qt::Key_0 : keypair -> second; 
    return keycode;
};

int shortcut_v::return_modifier(QString mod)
{
    if (mod == "Ctrl")
    {
        return ControlMask;
    }
    if (mod == "Alt")
    {
        return Mod1Mask;
    }
    if (mod == "Shift")
    {
        return ShiftMask;
    }
    return 0;
}
