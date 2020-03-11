#ifndef ICON_PANEL_H
#define ICON_PANEL_H
#include <QDesktopServices>
#include <QMessageBox>
#include <QFile>
#include<QIODevice>
#include<QFileDialog>
#include<QUrl>
#include<QEvent>
#include<QWheelEvent>
#include<QDebug>
#include <QLabel>
#include<QDataStream>
#include<QShortcut>
#include <regex>
#include <algorithm>
#include <vector>
#include <QProcess>
#include "headers/submit_removal.h"
#include "headers/shortcut.h"
#include "headers/shortcut_v.h"

namespace Ui {
class icon_panel;
}

class icon_panel : public QWidget
{
    Q_OBJECT


public:
    explicit icon_panel(QWidget *parent = nullptr);
    bool eventFilter(QObject *obj, QEvent *event) override;
    ~icon_panel() override;

protected:
    void wheelEvent(QWheelEvent *event) override;

signals:
    void HideIconBar();

private slots:
    void on_addShortCut_clicked();
    void on_app_1_clicked();
    void on_app_2_clicked();
    void on_app_3_clicked();
    void on_app_4_clicked();
    void on_app_5_clicked();
    void on_app_6_clicked();
    void on_app_7_clicked();
    void on_app_8_clicked();
    void removeSequence();
//    void updateIc();
    void on_removeShortCut_clicked();
public slots:
    void fill_shortcuts();




private:
    Ui::icon_panel *ui;

    bool _removal;
    bool _range_selection; //is shift modifier pressed
    int _current_page; // number of elements before first element on this page
    std::pair<int,int> _range;
    std::vector<int> _to_remove;
    ShortcutVector * shortcuts;
    std::vector<std::string> _image_ext{".png",".jpg",".bmp",".svg"};
    std::vector<std::string> _doc_ext{".pdf",".doc",".lib",".csv"};
    std::vector<QPushButton * > _app_buttons; // buttons on ui , connected to shortcuts
    std::vector<QLabel *> _image_labels;

    submit_removal submit_window;

    QShortcut * sumbmit;

    void initShortcut(QPushButton * app , QLabel * label , int current_position);

    void setIcon(QLabel *,QPushButton * button,int);
    void mark_for_removal(QPushButton * ,int , State );
    void return_default_style();
    void range_selection(int begin, int end);
    void execute(int index);
    void setStyle(int index);
signals:
    void iconsUpdated();


};

#endif // ICON_PANEL_H
