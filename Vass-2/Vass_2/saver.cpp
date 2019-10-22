#include "saver.h"
#include <fstream>

Saver::Saver()
{


}
QJsonDocument Saver::open_file()
{
    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly)) {
            qWarning("Couldn't open save file.");

        }
    QByteArray tmp = file.readAll();
    file.close();


    return QJsonDocument::fromJson(tmp);
}
void Saver::save()
{
    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly)) {
            qWarning("Couldn't open save file.");
            return;
        }

    file.write(QJsonDocument(settings_obj).toJson());


    file.close();
    qWarning("saved");

}

void Saver::save_icons(std::vector<int> keys , std::vector<int> modifiers)
{
    qDebug() << "Keys in saver " << keys;
    QJsonArray arr;
    for(auto& i:keys)
    {
        arr.append(i);
    }
    this -> settings_obj.insert("keys",arr);
    arr = QJsonArray();
    for(auto& i:modifiers){
        arr.append(i);
    }
    this ->settings_obj.insert("modifiers",arr);
    save();
}
std::vector<int> Saver::read_keys()
{
    std::vector<int> o_keys;
    QJsonDocument Saved_Data = open_file();
    QJsonArray keys = Saved_Data.object()["keys"].toArray();
    o_keys.emplace_back(keys.at(0).toInt());
    o_keys.emplace_back(keys.at(1).toInt());
    o_keys.emplace_back(keys.at(2).toInt());
    o_keys.emplace_back(keys.at(3).toInt());
    return o_keys;
}
std::vector<int> Saver::read_modifiers()
{
    std::vector<int> o_keys;
    QJsonDocument Saved_Data = open_file();
    QJsonArray keys = Saved_Data.object()["modifiers"].toArray();
    o_keys.emplace_back(keys.at(0).toInt());
    o_keys.emplace_back(keys.at(1).toInt());
    o_keys.emplace_back(keys.at(2).toInt());
    o_keys.emplace_back(keys.at(3).toInt());
    return o_keys;
}


void Saver::save_music(const QMediaPlaylist& songs)
{
  QJsonArray arr;
  for (int i=0;i<songs.mediaCount();i++)
  {
      arr.append(songs.media(i).canonicalUrl().toString());
  }

  this->settings_obj.insert("song list",arr);
  save();
}

QStringList Saver::load_music()
{

  QJsonDocument Saved_Data = open_file();
//  read(Saved_Data.object());
  QJsonArray songlist=Saved_Data.object()["song list"].toArray();
  QStringList arr;
  for (auto item : songlist)
  {
   arr.append(item.toString());
  }
  return arr;




}










