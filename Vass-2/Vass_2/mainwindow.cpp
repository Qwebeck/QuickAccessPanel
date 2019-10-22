#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QTimer>
#include <QPainter>
#include <QColor>
#include<QCursor>
#include <QTime>
#include <QDebug>
#include <iostream>

MainWindow::MainWindow(std::pair<int,int> dim ,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    Icons(),
    Configuration()

{
    QIcon icon = QIcon(":/icons/images/icon2.png");
    setWindowIcon(icon);
    InitActions();
    createTrayIcons();
    shortcuts = shortcut_v::Initialialize();
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setPen(Qt::NoPen);
    painter.setBrush(QColor(100,100,100, 127));
    painter.drawRect(0, 0, width(),  height());
    //shortcut for open icons
#ifdef linux

    nativeEventFilter = new event_filter(shortcuts->_icons,
                                         shortcuts->_config,
                                         this,
                                         shortcuts->_icons_mod,
                                         shortcuts->_config_mod
                                         ); // m - icons , t - clock
    qApp->installNativeEventFilter(nativeEventFilter);
    connect(nativeEventFilter,&event_filter::icon_called,this,&MainWindow::setVisibleIcons);
    connect(nativeEventFilter,&event_filter::config_called,this,&MainWindow::setVisibleConfig);
    nativeEventFilter -> setShortcut(Apps::Config);
    nativeEventFilter -> setShortcut(Apps::Icons);
#endif
    connect(&Configuration,&config::changeHotKey,this,&MainWindow::setNewShortcut);
    connect(&Configuration,&config::iconsChanged,&Icons,&icon_panel::fill_shortcuts);
    connect(this,&MainWindow::updateIcons,&Icons,&icon_panel::fill_shortcuts);
    connect(&Icons,&icon_panel::iconsUpdated,&Configuration,&config::fill_shortcuts);
    Configuration.setWindowFlags(Qt::FramelessWindowHint|Qt::Tool);

    Configuration.setAttribute(Qt::WA_TranslucentBackground);
    Icons.setWindowFlags(Qt::WindowStaysOnTopHint|Qt::Tool|Qt::FramelessWindowHint);
    Icons.setAttribute(Qt::WA_TranslucentBackground);
    _D_dims = dim;
    trayIcon->setIcon(icon);
    trayIcon-> show();
    ui->setupUi(this);
    openIcons = new QShortcut(QKeySequence(Qt::CTRL + Qt::Key_M), this, SLOT(setVisibleIcons()));
    connect(&Icons,SIGNAL(HideIconBar()),this,SLOT(HideIcons()));
}

MainWindow::~MainWindow()
{
    qWarning("saving");
    shortcuts->writeToFile();
    delete shortcuts;
    delete ui;


}

void MainWindow::setNewShortcut()
{
   // qDebug()<<"In set new shortcut  " << shortcuts->_icons;
    nativeEventFilter ->upadteHotKeys(shortcuts->_icons,Apps::Icons , shortcuts->_icons_mod);
    nativeEventFilter ->upadteHotKeys(shortcuts->_config,Apps::Config, shortcuts->_config_mod);
}
void MainWindow::setVisibleIcons()
{

    if(!Icons.isVisible()){
      //  qDebug()<<"called";
        QPoint position = QCursor::pos();
        Icons.move(position.rx() - Icons.geometry().width()/2,position.ry() - Icons.geometry().height()/2);
        Icons.setFocus();
        emit updateIcons();
        Icons.show();



    }else {
        Icons.hide();
//        ui ->icons -> hide();

}
}

void MainWindow::setVisibleConfig()
{

    if(!Configuration.isVisible()){
        Configuration.move(_D_dims.first/2- Configuration.geometry().width()/2,_D_dims.second/2- Configuration.geometry().height()/2);
        openConfig->setText("Hide configuration window");
        Configuration.fill_shortcuts();
        Configuration.show();

    }else {
        Configuration.hide();

        openConfig->setText("Show configuration window");
}

}

void MainWindow::InitActions()
{
   openConfig = new QAction(tr("Show configuration window"),this);
   connect(openConfig, &QAction::triggered, this,&MainWindow::setVisibleConfig);
   exit = new QAction(tr("Quit"),this);
   connect(exit,&QAction::triggered,qApp,&QApplication::quit);
}

void MainWindow::createTrayIcons()
{
    trayIconMenu = new QMenu(this);
    trayIconMenu-> addAction(openConfig);
    trayIconMenu->addAction(exit);
    trayIcon = new QSystemTrayIcon(this);
    trayIcon->setContextMenu(trayIconMenu);
}


void MainWindow::slotGlobalHotkey()
{
    setVisibleIcons();
}
