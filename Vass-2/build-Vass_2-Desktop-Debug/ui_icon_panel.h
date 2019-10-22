/********************************************************************************
** Form generated from reading UI file 'icon_panel.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ICON_PANEL_H
#define UI_ICON_PANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_icon_panel
{
public:
    QPushButton *addShortCut;
    QPushButton *app_1;
    QLabel *label_1;
    QPushButton *removeShortCut;
    QPushButton *app_2;
    QLabel *label_2;
    QPushButton *app_3;
    QLabel *label_3;
    QPushButton *app_4;
    QLabel *label_4;
    QPushButton *app_5;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *app_8;
    QLabel *label_8;
    QLabel *backgroud;
    QPushButton *app_7;
    QPushButton *app_6;
    QButtonGroup *application_buttons;

    void setupUi(QWidget *icon_panel)
    {
        if (icon_panel->objectName().isEmpty())
            icon_panel->setObjectName(QStringLiteral("icon_panel"));
        icon_panel->resize(422, 420);
        icon_panel->setStyleSheet(QStringLiteral(""));
        addShortCut = new QPushButton(icon_panel);
        addShortCut->setObjectName(QStringLiteral("addShortCut"));
        addShortCut->setGeometry(QRect(130, 140, 80, 120));
        addShortCut->setStyleSheet(QLatin1String("QPushButton { background-color:rgba(255, 119, 0 , 0.7); color: rgba( 255,255,255,0.7); border: 1px solid gray; border-radius:10px;font-size:13px} QPushButton:pressed { background-color:rgba(255, 140, 0 , 1); color: white;}\n"
"QPushButton:hover{ background-color:rgba(255, 119, 0 , 1); color: white;}"));
        app_1 = new QPushButton(icon_panel);
        application_buttons = new QButtonGroup(icon_panel);
        application_buttons->setObjectName(QStringLiteral("application_buttons"));
        application_buttons->addButton(app_1);
        app_1->setObjectName(QStringLiteral("app_1"));
        app_1->setGeometry(QRect(0, 0, 120, 120));
        app_1->setCursor(QCursor(Qt::ArrowCursor));
        app_1->setStyleSheet(QLatin1String("QPushButton { background-color: rgb(215, 215, 215); border: 1px solid gray;border-radius:10px ; padding-top:0px} \n"
"\n"
"QPushButton:hover{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgba(75, 70, 89 ,0.5), stop: 1 rgba(66, 61, 79,0.7)); }\n"
"QPushButton:pressed{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(94, 100, 127), stop: 1 rgb(91, 97, 124)); }"));
        label_1 = new QLabel(icon_panel);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setGeometry(QRect(0, 120, 130, 20));
        label_1->setCursor(QCursor(Qt::ArrowCursor));
        label_1->setStyleSheet(QStringLiteral("QLabel{color:rgba(255,255,255,0.7);font-size:10px}"));
        label_1->setFrameShadow(QFrame::Raised);
        label_1->setAlignment(Qt::AlignCenter);
        removeShortCut = new QPushButton(icon_panel);
        removeShortCut->setObjectName(QStringLiteral("removeShortCut"));
        removeShortCut->setGeometry(QRect(210, 140, 80, 120));
        removeShortCut->setStyleSheet(QLatin1String("QPushButton { background-color: rgba(211, 10, 0,0.7); color:rgba(255,255,255,0.7); border: 1px solid gray; border-radius:10px ; opacity:0.7 ; font-size:13px} QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #FF7832, stop: 1 #FF9739); }\n"
"QPushButton:hover{ background-color: rgba(211, 10, 0,1) ;color:white ;}"));
        app_2 = new QPushButton(icon_panel);
        app_2->setObjectName(QStringLiteral("app_2"));
        app_2->setGeometry(QRect(150, 0, 120, 120));
        app_2->setCursor(QCursor(Qt::ArrowCursor));
        app_2->setStyleSheet(QLatin1String("QPushButton { background-color: rgb(215, 215, 215); border: 1px solid gray;border-radius:10px ; padding-top:0px} \n"
"\n"
"QPushButton:hover{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgba(75, 70, 89 ,0.5), stop: 1 rgba(66, 61, 79,0.7)); }\n"
"QPushButton:pressed{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(94, 100, 127), stop: 1 rgb(91, 97, 124)); }"));
        label_2 = new QLabel(icon_panel);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(150, 120, 130, 20));
        label_2->setCursor(QCursor(Qt::ArrowCursor));
        label_2->setStyleSheet(QStringLiteral("QLabel{color:rgba(255,255,255,0.7);font-size:10px}"));
        label_2->setFrameShadow(QFrame::Raised);
        label_2->setAlignment(Qt::AlignCenter);
        app_3 = new QPushButton(icon_panel);
        app_3->setObjectName(QStringLiteral("app_3"));
        app_3->setGeometry(QRect(300, 0, 120, 120));
        app_3->setCursor(QCursor(Qt::ArrowCursor));
        app_3->setStyleSheet(QLatin1String("QPushButton { background-color: rgb(215, 215, 215); border: 1px solid gray;border-radius:10px ; padding-top:0px} \n"
"\n"
"QPushButton:hover{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgba(75, 70, 89 ,0.5), stop: 1 rgba(66, 61, 79,0.7)); }\n"
"QPushButton:pressed{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(94, 100, 127), stop: 1 rgb(91, 97, 124)); }"));
        label_3 = new QLabel(icon_panel);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(290, 120, 130, 20));
        label_3->setCursor(QCursor(Qt::ArrowCursor));
        label_3->setStyleSheet(QStringLiteral("QLabel{color:rgba(255,255,255,0.7);font-size:10px}"));
        label_3->setFrameShadow(QFrame::Raised);
        label_3->setAlignment(Qt::AlignCenter);
        app_4 = new QPushButton(icon_panel);
        app_4->setObjectName(QStringLiteral("app_4"));
        app_4->setGeometry(QRect(0, 140, 120, 120));
        app_4->setCursor(QCursor(Qt::ArrowCursor));
        app_4->setStyleSheet(QLatin1String("QPushButton { background-color: rgb(215, 215, 215); border: 1px solid gray;border-radius:10px ; padding-top:0px} \n"
"\n"
"QPushButton:hover{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgba(75, 70, 89 ,0.5), stop: 1 rgba(66, 61, 79,0.7)); }\n"
"QPushButton:pressed{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(94, 100, 127), stop: 1 rgb(91, 97, 124)); }"));
        label_4 = new QLabel(icon_panel);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 260, 130, 20));
        label_4->setCursor(QCursor(Qt::ArrowCursor));
        label_4->setStyleSheet(QStringLiteral("QLabel{color:rgba(255,255,255,0.7);font-size:10px}"));
        label_4->setFrameShadow(QFrame::Raised);
        label_4->setAlignment(Qt::AlignCenter);
        app_5 = new QPushButton(icon_panel);
        app_5->setObjectName(QStringLiteral("app_5"));
        app_5->setGeometry(QRect(300, 140, 120, 120));
        app_5->setCursor(QCursor(Qt::ArrowCursor));
        app_5->setStyleSheet(QLatin1String("QPushButton { background-color: rgb(215, 215, 215); border: 1px solid gray;border-radius:10px ; padding-top:0px} \n"
"\n"
"QPushButton:hover{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgba(75, 70, 89 ,0.5), stop: 1 rgba(66, 61, 79,0.7)); }\n"
"QPushButton:pressed{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(94, 100, 127), stop: 1 rgb(91, 97, 124)); }"));
        label_5 = new QLabel(icon_panel);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(290, 260, 130, 20));
        label_5->setCursor(QCursor(Qt::ArrowCursor));
        label_5->setStyleSheet(QStringLiteral("QLabel{color:rgba(255,255,255,0.7);font-size:10px}"));
        label_5->setFrameShadow(QFrame::Raised);
        label_5->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(icon_panel);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(0, 400, 130, 20));
        label_6->setCursor(QCursor(Qt::ArrowCursor));
        label_6->setStyleSheet(QStringLiteral("QLabel{color:rgba(255,255,255,0.7);font-size:10px}"));
        label_6->setFrameShadow(QFrame::Raised);
        label_6->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(icon_panel);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(150, 400, 130, 20));
        label_7->setCursor(QCursor(Qt::ArrowCursor));
        label_7->setStyleSheet(QStringLiteral("QLabel{color:rgba(255,255,255,0.7);font-size:10px}"));
        label_7->setFrameShadow(QFrame::Raised);
        label_7->setAlignment(Qt::AlignCenter);
        app_8 = new QPushButton(icon_panel);
        app_8->setObjectName(QStringLiteral("app_8"));
        app_8->setGeometry(QRect(300, 280, 120, 120));
        app_8->setCursor(QCursor(Qt::ArrowCursor));
        app_8->setStyleSheet(QLatin1String("QPushButton { background-color: rgb(215, 215, 215); border: 1px solid gray;border-radius:10px ; padding-top:0px} \n"
"\n"
"QPushButton:hover{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgba(75, 70, 89 ,0.5), stop: 1 rgba(66, 61, 79,0.7)); }\n"
"QPushButton:pressed{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(94, 100, 127), stop: 1 rgb(91, 97, 124)); }"));
        label_8 = new QLabel(icon_panel);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(290, 400, 130, 20));
        label_8->setCursor(QCursor(Qt::ArrowCursor));
        label_8->setStyleSheet(QStringLiteral("QLabel{color:rgba(255,255,255,0.7);font-size:10px}"));
        label_8->setFrameShadow(QFrame::Raised);
        label_8->setAlignment(Qt::AlignCenter);
        backgroud = new QLabel(icon_panel);
        backgroud->setObjectName(QStringLiteral("backgroud"));
        backgroud->setGeometry(QRect(0, 0, 421, 420));
        backgroud->setStyleSheet(QStringLiteral("QLabel{background-color:rgba(0, 0, 0 , 0.5);border-radius:10px;}"));
        app_7 = new QPushButton(icon_panel);
        app_7->setObjectName(QStringLiteral("app_7"));
        app_7->setGeometry(QRect(150, 280, 120, 120));
        app_7->setCursor(QCursor(Qt::ArrowCursor));
        app_7->setStyleSheet(QLatin1String("QPushButton { background-color: rgb(215, 215, 215); border: 1px solid gray;border-radius:10px ; padding-top:0px} \n"
"\n"
"QPushButton:hover{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgba(75, 70, 89 ,0.5), stop: 1 rgba(66, 61, 79,0.7)); }\n"
"QPushButton:pressed{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(94, 100, 127), stop: 1 rgb(91, 97, 124)); }"));
        app_6 = new QPushButton(icon_panel);
        app_6->setObjectName(QStringLiteral("app_6"));
        app_6->setGeometry(QRect(0, 280, 120, 120));
        app_6->setCursor(QCursor(Qt::ArrowCursor));
        app_6->setStyleSheet(QLatin1String("QPushButton { background-color: rgb(215, 215, 215); border: 1px solid gray;border-radius:10px ; padding-top:0px} \n"
"\n"
"QPushButton:hover{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgba(75, 70, 89 ,0.5), stop: 1 rgba(66, 61, 79,0.7)); }\n"
"QPushButton:pressed{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(94, 100, 127), stop: 1 rgb(91, 97, 124)); }"));
        backgroud->raise();
        addShortCut->raise();
        app_1->raise();
        label_1->raise();
        removeShortCut->raise();
        app_2->raise();
        label_2->raise();
        app_3->raise();
        label_3->raise();
        app_4->raise();
        label_4->raise();
        app_5->raise();
        label_5->raise();
        app_6->raise();
        label_6->raise();
        app_7->raise();
        label_7->raise();
        app_8->raise();
        label_8->raise();

        retranslateUi(icon_panel);

        QMetaObject::connectSlotsByName(icon_panel);
    } // setupUi

    void retranslateUi(QWidget *icon_panel)
    {
        icon_panel->setWindowTitle(QApplication::translate("icon_panel", "Form", Q_NULLPTR));
        addShortCut->setText(QApplication::translate("icon_panel", "Add ", Q_NULLPTR));
        app_1->setText(QString());
        label_1->setText(QApplication::translate("icon_panel", "TextLabel", Q_NULLPTR));
        removeShortCut->setText(QApplication::translate("icon_panel", "Remove", Q_NULLPTR));
        app_2->setText(QString());
        label_2->setText(QApplication::translate("icon_panel", "TextLabel", Q_NULLPTR));
        app_3->setText(QString());
        label_3->setText(QApplication::translate("icon_panel", "TextLabel", Q_NULLPTR));
        app_4->setText(QString());
        label_4->setText(QApplication::translate("icon_panel", "TextLabel", Q_NULLPTR));
        app_5->setText(QString());
        label_5->setText(QApplication::translate("icon_panel", "TextLabel", Q_NULLPTR));
        label_6->setText(QApplication::translate("icon_panel", "TextLabel", Q_NULLPTR));
        label_7->setText(QApplication::translate("icon_panel", "TextLabel", Q_NULLPTR));
        app_8->setText(QString());
        label_8->setText(QApplication::translate("icon_panel", "TextLabel", Q_NULLPTR));
        backgroud->setText(QString());
        app_7->setText(QString());
        app_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class icon_panel: public Ui_icon_panel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ICON_PANEL_H
