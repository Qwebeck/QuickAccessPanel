#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QAction>
#include <QPainter>
#include <QColor>
#include <QDebug>
#include <QSystemTrayIcon>
#include "headers/submit_removal.h"
#include "headers/icon_panel.h"
#include "headers/config.h"
#include "headers/saver.h"
#include "headers/event_filter.h"
#include "headers/shortcut_v.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(std::pair<int,int> dim,QWidget *parent = nullptr);
    ~MainWindow() override;
    Saver saver;

signals:
    void updateIcons();
private slots:
//    void on_pushButton_clicked();
    void slotGlobalHotkey();
    void setVisibleIcons();
    void setVisibleConfig();
   // void setVisibleTime();
    //void setVisibleMusic();
    void createTrayIcons();
    void InitActions();
    void setNewShortcut();
private:
    Ui::MainWindow *ui;

    bool _is_panel_active;

    std::pair<int,int> _D_dims;


    icon_panel Icons;
    config Configuration;
    event_filter *nativeEventFilter;


    shortcut_v * shortcuts;


    QShortcut * openIcons;
    QSystemTrayIcon *trayIcon;
    QMenu * trayIconMenu;
    QAction * openConfig;

    QAction * exit;




};

#endif // MAINWINDOW_H
