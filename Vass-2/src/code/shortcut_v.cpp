#include "headers/shortcut_v.h"
#include "headers/event_filter.h"
#include <QString>
#include <QFileInfo>
#include <exception>
#include <QDebug>
#include <iostream>
shortcut_v * shortcut_v::Shortcuts_Base = nullptr;


shortcut_v::shortcut_v(){


    std::vector<int> tmp_keys = saver.read_keys();
  //  qDebug() << tmp_keys;
  //  qDebug() << "created new Shortcut vector";
    _shortcuts_file = QObject::tr("shortcuts.abk");
    _summirized_weight = 0;
    readFromFile();
    if(tmp_keys[0] == 0 and tmp_keys[1] == 0 and tmp_keys[2] == 0 and tmp_keys[3] == 0){
        _icons = Qt::Key_M;
        _config = Qt::Key_Q;

        _icons_mod = ControlMask;
        _config_mod = ControlMask;
    }else {
        _icons =tmp_keys[0];
        _config = tmp_keys[1];

        std::vector<int> tmp_mod = saver.read_modifiers();
        _icons_mod = tmp_mod[0];
        _config_mod = tmp_mod[1];
}

   // _hotKeys = {_icons,_config,_time,_player};
    _hotKeys = {_icons,_config};
}


shortcut_v::~shortcut_v(){
  //  qDebug() << "saving keys";
    //std::vector<int> keys = {_icons,_config,_time,_player};
    std::vector<int> keys = {_icons,_config};
    std::vector<int> modifiers = {_icons_mod,_config_mod};
    //std::vector<int> modifiers = {_icons_mod,_config_mod,_time_mod,_player_mod};
    saver.save_icons(keys,modifiers);
}





std::string shortcut_v::setModPrefix(unsigned int modifier)
{
    if(modifier==ControlMask){
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
    else {
        return " ";
    }
 }

void shortcut_v::writeToFile()
{

    if(_shortcuts_file.isEmpty())return;
    QFile file(_shortcuts_file);
    if(!file.open(QIODevice::WriteOnly))
    {
//        QMessageBox::information(this,tr("Unable to open the file"),file.errorString());
        return;
    }
    //
    QStringList data_to_save ={};
    //qDebug() << "I am in write to file";
    for(auto& i:_shortcuts_class)
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
    if(_shortcuts_file.isEmpty())return;
    QFile file(_shortcuts_file);
    if(!file.open(QIODevice::ReadOnly))
    {
//        QMessageBox::information(this,tr("Unable to open window"),file.errorString());
        return;
    }
    QDataStream in(&file);
    QStringList data_from_file;
    in.setVersion(QDataStream::Qt_4_5);
    in >> data_from_file;
  //  qDebug () << "Here we are";
    for(int i = 0 ; i< data_from_file.size();++i)
    {
        parse_names(data_from_file.at(i).toLocal8Bit().constData());

    }
};

void shortcut_v::parse_names(QString filename)
{
//    std::regex _app_parser{R"((.*)\/(.*)(\..*)$)"};
    std::smatch matches;
    std::string path = filename.toStdString();
    std::regex_search(path,matches,_app_parser);
    path = matches[1]; 
    std::string app = matches[2];
   // qDebug() << "in parsrr";
    std::string extension = matches[3];
    std::pair<std::string,QString> name_icon;
    bool is_image = false;
    bool exist = false;
    std::string icon_path;
    for(auto ext:_image_ext)
    {
        QFileInfo check_file(QString::fromStdString(path + "/" + app + ext));
        if(check_file.exists())
        {
            icon_path = path + "/" + app + ext;
            exist = true;
            break;
        }
    }

    if(std::find(_image_ext.begin(), _image_ext.end(), extension) != _image_ext.end())
    {
        is_image = true;
        name_icon = std::make_pair(app + extension,QString::fromStdString(":/icons/images/picture.png"));
    }
    else if(std::find(_doc_ext.begin(), _doc_ext.end(), extension) != _doc_ext.end())
    {
        name_icon = std::make_pair(app + extension,QString::fromStdString(":/icons/images/contract.png"));

    }
    else if (exist){
        name_icon = std::make_pair(app,QString::fromStdString(icon_path));
    }
    else if (extension==".ex") {
         name_icon = std::make_pair(app,QString::fromStdString(""));
    }
    else {
        name_icon = std::make_pair(app,QString::fromStdString(":/icons/images/question-mark-button.png"));
    }

    _shortcuts_class.emplace_back(extension,name_icon.first,filename,name_icon.second,is_image);

}


 int  shortcut_v::return_key_code(QString _key)
{
   // qDebug()<<_key;
    if(_key == "Q")
    {
        return XK_Q;
    }
    if(_key == "W")
    {
        return XK_W;
    }
    if(_key == "E")
    {
        return XK_E;
    }
    if(_key == "R")
    {
        return XK_R;
    }
    if(_key == "Y")
    {
        return XK_Y;
    }
    if(_key == "U")
    {
        return XK_U;
    }
    if(_key == "O")
    {
        return XK_O;
    }
    if(_key == "P")
    {
        return XK_P;
    }
    if(_key == "A")
    {
        return XK_A;
    }
    if(_key == "S")
    {
        return XK_S;
    }
    if(_key == "D")
    {
        return XK_D;
    }
    if(_key == "F")
    {
        return XK_F;
    }
    if(_key == "G")
    {
        return XK_G;
    }
    if(_key == "H")
    {
        return XK_H;
    }
    if(_key == "J")
    {
        return XK_J;
    }
    if(_key == "K")
    {
        return XK_K;
    }
    if(_key == "L")
    {
        return XK_L;
    }
    if(_key == "Z")
    {
        return XK_Z;
    }
    if(_key == "X")
    {
       // qDebug()<<"In return key code " << XK_X;
        return XK_X;
    }
    if(_key == "C")
    {
        return XK_C;
    }
    if(_key == "V")
    {
        return XK_V;
    }
    if(_key == "B")
    {
        return XK_B;
    }
    if(_key == "N")
    {
        return XK_N;
    }
    if(_key == "M")
    {
        return XK_M;
    }

    return Qt::Key_0;
};

int shortcut_v::return_modifier(QString mod)
 {
     if(mod == "Ctrl")
     {
         return ControlMask;
     }
     if(mod == "Alt")
     {
         return Mod1Mask;
     }
     if(mod == "Shift")
     {
         return ShiftMask;
     }
     return 0;
 }



