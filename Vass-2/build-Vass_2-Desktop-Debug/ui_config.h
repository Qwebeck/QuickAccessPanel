/********************************************************************************
** Form generated from reading UI file 'config.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIG_H
#define UI_CONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QKeySequenceEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_config
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *mainLay;
    QTabWidget *tabWidget;
    QWidget *main_config;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *m_p_l;
    QKeySequenceEdit *time;
    QLabel *label_3;
    QLabel *i_p_l;
    QKeySequenceEdit *media;
    QLabel *label_7;
    QKeySequenceEdit *config_2;
    QLabel *t_p_l;
    QKeySequenceEdit *icon;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *c_p_l;
    QPushButton *submit;
    QWidget *icon_panel;
    QPushButton *b_up;
    QPushButton *b_down;
    QGroupBox *apps;
    QPushButton *app_1;
    QPushButton *app_2;
    QPushButton *app_3;
    QPushButton *app_4;
    QPushButton *app_5;
    QPushButton *app_6;
    QPushButton *app_7;
    QPushButton *app_8;
    QPushButton *info;
    QPushButton *add;
    QPushButton *remove;
    QStackedWidget *stackedWidget;
    QWidget *page_3;
    QWidget *page_4;
    QWidget *gridLayoutWidget_2;
    QGridLayout *icon_information;
    QLabel *label_11;
    QCheckBox *always_first;
    QLabel *label_10;
    QPushButton *chnge_icon_2;
    QLabel *label_9;
    QPushButton *chnge_icon;
    QLabel *label_13;
    QCheckBox *p_ins_i;
    QPushButton *pushButton;

    void setupUi(QWidget *config)
    {
        if (config->objectName().isEmpty())
            config->setObjectName(QStringLiteral("config"));
        config->resize(659, 510);
        verticalLayoutWidget = new QWidget(config);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 0, 601, 511));
        mainLay = new QVBoxLayout(verticalLayoutWidget);
        mainLay->setObjectName(QStringLiteral("mainLay"));
        mainLay->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(verticalLayoutWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setAutoFillBackground(true);
        main_config = new QWidget();
        main_config->setObjectName(QStringLiteral("main_config"));
        gridLayoutWidget = new QWidget(main_config);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 20, 421, 351));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        m_p_l = new QLabel(gridLayoutWidget);
        m_p_l->setObjectName(QStringLiteral("m_p_l"));
        m_p_l->setAutoFillBackground(false);
        m_p_l->setMargin(10);

        gridLayout->addWidget(m_p_l, 5, 1, 1, 1);

        time = new QKeySequenceEdit(gridLayoutWidget);
        time->setObjectName(QStringLiteral("time"));

        gridLayout->addWidget(time, 4, 2, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAutoFillBackground(false);
        label_3->setMargin(10);

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        i_p_l = new QLabel(gridLayoutWidget);
        i_p_l->setObjectName(QStringLiteral("i_p_l"));
        i_p_l->setAutoFillBackground(false);
        i_p_l->setMargin(10);

        gridLayout->addWidget(i_p_l, 0, 1, 1, 1);

        media = new QKeySequenceEdit(gridLayoutWidget);
        media->setObjectName(QStringLiteral("media"));

        gridLayout->addWidget(media, 5, 2, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAutoFillBackground(false);
        label_7->setMargin(10);

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        config_2 = new QKeySequenceEdit(gridLayoutWidget);
        config_2->setObjectName(QStringLiteral("config_2"));

        gridLayout->addWidget(config_2, 6, 2, 1, 1);

        t_p_l = new QLabel(gridLayoutWidget);
        t_p_l->setObjectName(QStringLiteral("t_p_l"));
        t_p_l->setAutoFillBackground(false);
        t_p_l->setMargin(10);

        gridLayout->addWidget(t_p_l, 4, 1, 1, 1);

        icon = new QKeySequenceEdit(gridLayoutWidget);
        icon->setObjectName(QStringLiteral("icon"));

        gridLayout->addWidget(icon, 0, 2, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAutoFillBackground(false);
        label_2->setMargin(10);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAutoFillBackground(false);
        label_5->setMargin(10);

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        c_p_l = new QLabel(gridLayoutWidget);
        c_p_l->setObjectName(QStringLiteral("c_p_l"));
        c_p_l->setAutoFillBackground(false);
        c_p_l->setMargin(10);

        gridLayout->addWidget(c_p_l, 6, 1, 1, 1);

        submit = new QPushButton(gridLayoutWidget);
        submit->setObjectName(QStringLiteral("submit"));

        gridLayout->addWidget(submit, 0, 3, 1, 1);

        tabWidget->addTab(main_config, QString());
        icon_panel = new QWidget();
        icon_panel->setObjectName(QStringLiteral("icon_panel"));
        b_up = new QPushButton(icon_panel);
        b_up->setObjectName(QStringLiteral("b_up"));
        b_up->setGeometry(QRect(520, 40, 80, 60));
        b_up->setStyleSheet(QLatin1String("QPushButton{background-color:white}\n"
"QPushButton:hover{background-color:rgba(255,255,255,0.5)}"));
        b_down = new QPushButton(icon_panel);
        b_down->setObjectName(QStringLiteral("b_down"));
        b_down->setGeometry(QRect(520, 100, 80, 60));
        b_down->setStyleSheet(QLatin1String("QPushButton{background-color:white}\n"
"QPushButton:hover{background-color:rgba(255,255,255,0.5)}"));
        apps = new QGroupBox(icon_panel);
        apps->setObjectName(QStringLiteral("apps"));
        apps->setGeometry(QRect(310, 20, 211, 421));
        app_1 = new QPushButton(apps);
        app_1->setObjectName(QStringLiteral("app_1"));
        app_1->setGeometry(QRect(0, 20, 211, 51));
        app_1->setStyleSheet(QLatin1String("QPushButton{background-color:white;text-align:left}\n"
"QPushButton:hover{background-color:rgba(255,255,255,0.5)}"));
        app_2 = new QPushButton(apps);
        app_2->setObjectName(QStringLiteral("app_2"));
        app_2->setGeometry(QRect(0, 70, 211, 51));
        app_2->setStyleSheet(QLatin1String("QPushButton{background-color:white;text-align:left}\n"
"QPushButton:hover{background-color:rgba(255,255,255,0.5)}"));
        app_3 = new QPushButton(apps);
        app_3->setObjectName(QStringLiteral("app_3"));
        app_3->setGeometry(QRect(0, 120, 211, 51));
        app_3->setStyleSheet(QLatin1String("QPushButton{background-color:white;text-align:left}\n"
"QPushButton:hover{background-color:rgba(255,255,255,0.5)}"));
        app_4 = new QPushButton(apps);
        app_4->setObjectName(QStringLiteral("app_4"));
        app_4->setGeometry(QRect(0, 170, 211, 51));
        app_4->setStyleSheet(QLatin1String("QPushButton{background-color:white;text-align:left}\n"
"QPushButton:hover{background-color:rgba(255,255,255,0.5)}"));
        app_5 = new QPushButton(apps);
        app_5->setObjectName(QStringLiteral("app_5"));
        app_5->setGeometry(QRect(0, 220, 211, 51));
        app_5->setStyleSheet(QLatin1String("QPushButton{background-color:white;text-align:left}\n"
"QPushButton:hover{background-color:rgba(255,255,255,0.5)}"));
        app_6 = new QPushButton(apps);
        app_6->setObjectName(QStringLiteral("app_6"));
        app_6->setGeometry(QRect(0, 270, 211, 51));
        app_6->setStyleSheet(QLatin1String("QPushButton{background-color:white;text-align:left}\n"
"QPushButton:hover{background-color:rgba(255,255,255,0.5)}"));
        app_7 = new QPushButton(apps);
        app_7->setObjectName(QStringLiteral("app_7"));
        app_7->setGeometry(QRect(0, 320, 211, 51));
        app_7->setStyleSheet(QLatin1String("QPushButton{background-color:white;text-align:left}\n"
"QPushButton:hover{background-color:rgba(255,255,255,0.5)}"));
        app_8 = new QPushButton(apps);
        app_8->setObjectName(QStringLiteral("app_8"));
        app_8->setGeometry(QRect(0, 370, 211, 51));
        app_8->setStyleSheet(QLatin1String("QPushButton{background-color:white;text-align:left}\n"
"QPushButton:hover{background-color:rgba(255,255,255,0.5)}"));
        info = new QPushButton(icon_panel);
        info->setObjectName(QStringLiteral("info"));
        info->setGeometry(QRect(520, 160, 80, 60));
        info->setStyleSheet(QLatin1String("QPushButton{background-color:white}\n"
"QPushButton:hover{background-color:rgba(255,255,255,0.5)}"));
        add = new QPushButton(icon_panel);
        add->setObjectName(QStringLiteral("add"));
        add->setGeometry(QRect(520, 220, 80, 60));
        add->setStyleSheet(QLatin1String("QPushButton{background-color:white}\n"
"QPushButton:hover{background-color:rgba(255,255,255,0.5)}"));
        remove = new QPushButton(icon_panel);
        remove->setObjectName(QStringLiteral("remove"));
        remove->setGeometry(QRect(520, 280, 80, 60));
        remove->setStyleSheet(QLatin1String("QPushButton{background-color:white}\n"
"QPushButton:hover{background-color:rgba(255,255,255,0.5)}"));
        stackedWidget = new QStackedWidget(icon_panel);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(30, 60, 261, 321));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        gridLayoutWidget_2 = new QWidget(page_4);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(0, 20, 256, 301));
        icon_information = new QGridLayout(gridLayoutWidget_2);
        icon_information->setObjectName(QStringLiteral("icon_information"));
        icon_information->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(gridLayoutWidget_2);
        label_11->setObjectName(QStringLiteral("label_11"));

        icon_information->addWidget(label_11, 2, 1, 1, 1);

        always_first = new QCheckBox(gridLayoutWidget_2);
        always_first->setObjectName(QStringLiteral("always_first"));

        icon_information->addWidget(always_first, 2, 2, 1, 1);

        label_10 = new QLabel(gridLayoutWidget_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        icon_information->addWidget(label_10, 0, 1, 1, 1);

        chnge_icon_2 = new QPushButton(gridLayoutWidget_2);
        chnge_icon_2->setObjectName(QStringLiteral("chnge_icon_2"));
        chnge_icon_2->setStyleSheet(QLatin1String("QPushButton{background-color:white;border-radius:2px;border:1px solid rgba(0,0,0,0.5)}\n"
"QPushButton:hover{background-color:rgba(255,255,255,0.5)}"));

        icon_information->addWidget(chnge_icon_2, 1, 2, 1, 1);

        label_9 = new QLabel(gridLayoutWidget_2);
        label_9->setObjectName(QStringLiteral("label_9"));

        icon_information->addWidget(label_9, 1, 1, 1, 1);

        chnge_icon = new QPushButton(gridLayoutWidget_2);
        chnge_icon->setObjectName(QStringLiteral("chnge_icon"));
        chnge_icon->setStyleSheet(QLatin1String("QPushButton{background-color:white;border-radius:2px;border:1px solid rgba(0,0,0,0.5)}\n"
"QPushButton:hover{background-color:rgba(255,255,255,0.5)}"));

        icon_information->addWidget(chnge_icon, 0, 2, 1, 1);

        label_13 = new QLabel(gridLayoutWidget_2);
        label_13->setObjectName(QStringLiteral("label_13"));

        icon_information->addWidget(label_13, 3, 1, 1, 1);

        p_ins_i = new QCheckBox(gridLayoutWidget_2);
        p_ins_i->setObjectName(QStringLiteral("p_ins_i"));

        icon_information->addWidget(p_ins_i, 3, 2, 1, 1);

        stackedWidget->addWidget(page_4);
        pushButton = new QPushButton(icon_panel);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(520, 340, 80, 60));
        pushButton->setStyleSheet(QLatin1String("QPushButton{background-color:white}\n"
"QPushButton:hover{background-color:rgba(255,255,255,0.5)}"));
        tabWidget->addTab(icon_panel, QString());

        mainLay->addWidget(tabWidget);


        retranslateUi(config);

        tabWidget->setCurrentIndex(1);
        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(config);
    } // setupUi

    void retranslateUi(QWidget *config)
    {
        config->setWindowTitle(QApplication::translate("config", "Form", Q_NULLPTR));
        m_p_l->setText(QApplication::translate("config", "TextLabel", Q_NULLPTR));
        label_3->setText(QApplication::translate("config", "Time", Q_NULLPTR));
        i_p_l->setText(QApplication::translate("config", "TextLabel", Q_NULLPTR));
        label_7->setText(QApplication::translate("config", "Configuration", Q_NULLPTR));
        t_p_l->setText(QApplication::translate("config", "TextLabel", Q_NULLPTR));
        label_2->setText(QApplication::translate("config", "Icon panel", Q_NULLPTR));
        label_5->setText(QApplication::translate("config", "Media player", Q_NULLPTR));
        c_p_l->setText(QApplication::translate("config", "TextLabel", Q_NULLPTR));
        submit->setText(QApplication::translate("config", "Submit", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(main_config), QApplication::translate("config", " Help", Q_NULLPTR));
        b_up->setText(QApplication::translate("config", "Up", Q_NULLPTR));
        b_down->setText(QApplication::translate("config", "Down", Q_NULLPTR));
        apps->setTitle(QApplication::translate("config", "Applications priority", Q_NULLPTR));
        app_1->setText(QApplication::translate("config", "PushButton", Q_NULLPTR));
        app_2->setText(QApplication::translate("config", "PushButton", Q_NULLPTR));
        app_3->setText(QApplication::translate("config", "PushButton", Q_NULLPTR));
        app_4->setText(QApplication::translate("config", "PushButton", Q_NULLPTR));
        app_5->setText(QApplication::translate("config", "PushButton", Q_NULLPTR));
        app_6->setText(QApplication::translate("config", "PushButton", Q_NULLPTR));
        app_7->setText(QApplication::translate("config", "PushButton", Q_NULLPTR));
        app_8->setText(QApplication::translate("config", "PushButton", Q_NULLPTR));
        info->setText(QApplication::translate("config", "Hide\n"
"settings", Q_NULLPTR));
        add->setText(QApplication::translate("config", "Add \n"
"shortcut", Q_NULLPTR));
        remove->setText(QApplication::translate("config", "Remove\n"
" active \n"
"shortcut", Q_NULLPTR));
        label_11->setText(QApplication::translate("config", "Pin to top", Q_NULLPTR));
        always_first->setText(QApplication::translate("config", "Pin", Q_NULLPTR));
        label_10->setText(QApplication::translate("config", "Change current icon", Q_NULLPTR));
        chnge_icon_2->setText(QApplication::translate("config", "Change", Q_NULLPTR));
        label_9->setText(QApplication::translate("config", "Change application \n"
"location", Q_NULLPTR));
        chnge_icon->setText(QApplication::translate("config", "Change", Q_NULLPTR));
        label_13->setText(QApplication::translate("config", "Show picture \n"
"instead of icon for images", Q_NULLPTR));
        p_ins_i->setText(QApplication::translate("config", "Activate", Q_NULLPTR));
        pushButton->setText(QApplication::translate("config", "Remove\n"
"all", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(icon_panel), QApplication::translate("config", "Icon Panel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class config: public Ui_config {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIG_H
