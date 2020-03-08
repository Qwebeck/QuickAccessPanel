#ifndef SHORTCUT_H
#define SHORTCUT_H
#include<string>
#include<QString>
class Shortcut
{
public:
    Shortcut(std::string extension, std::string filename,QString path,QString icon_path,bool is_image)
    {

        _extension=extension;
        _filename=filename;
        _path=path;
        _icon_path=icon_path;
        _is_removable = false;
        _is_image = is_image;
        _weight = 0;
        _is_pinned = false;

    }
    bool get_removable() const {return _is_removable;}
    std::string get_extension() const {return _extension;}
    std::string get_filename() const {return _filename;}
    QString get_path() const {return _path;}
    QString get_path_to_icon() const {return _icon_path;}
    void set_removable(bool val){_is_removable = val;}
    bool is_img() const {return _is_image;}
    void changeIcon(QString icon_path){_icon_path = icon_path;}
    void changeLocation(QString new_path){_path = new_path;}
    long int  get_weight() const {return _weight;}
    bool operator<(const Shortcut& other){
        return this->get_weight() > other.get_weight();// returns a > b and not a<b , to sort in descending order
    }
    void increase_weight(long int sum){if(!_is_pinned){_weight+= sum;_is_pinned = true;}}
    void relax_weight(){_weight=0;_is_pinned = false;}
private:
    bool _is_removable; // check is this shortcut should be removed .To remove elements on right position , i first mark them as removable , and then clear all shortcuts with rem==true , to clear elements on their exact positions in vector and prevent out of range overlapping
    bool _is_image;
    long int _weight;
    bool _is_pinned;
    std::string _extension;
    std::string _filename;
    QString _path;
    QString _icon_path;
};

#endif // SHORTCUT_H
