#include "headers/mainwindow.h"
#include <QApplication>
#include <QDesktopWidget>

int main(int argc, char *argv[])
{
    Q_INIT_RESOURCE(resources);
    QApplication a(argc, argv);
    QDesktopWidget dw;
    std::pair<int,int> dims = std::make_pair<int,int>(dw.width(),dw.height());
    MainWindow w(dims);

#ifndef linux
    w.setWindowFlags(Qt::FramelessWindowHint|Qt::WindowStaysOnTopHint);
#else
    w.setWindowFlags(Qt::FramelessWindowHint);
#endif
    w.setAttribute(Qt::WA_TranslucentBackground);
    w.setFixedSize(dw.width(),dw.height());

#ifndef linux
    w.show();
#endif
    return a.exec();
}
