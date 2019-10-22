/********************************************************************************
** Form generated from reading UI file 'media_player.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEDIA_PLAYER_H
#define UI_MEDIA_PLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Media_Player
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *PreviousButton;
    QPushButton *PlayButton;
    QPushButton *NextButton;
    QHBoxLayout *horizontalLayout_3;
    QSlider *ProgressSlider;
    QSpinBox *MinutesSpinBox;
    QSpinBox *SecondsSpinBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *AddButton;
    QPushButton *RepeatButton;
    QSlider *VolumeSlider;
    QListWidget *listWidget;

    void setupUi(QWidget *Media_Player)
    {
        if (Media_Player->objectName().isEmpty())
            Media_Player->setObjectName(QStringLiteral("Media_Player"));
        Media_Player->setWindowModality(Qt::WindowModal);
        Media_Player->resize(400, 400);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        Media_Player->setPalette(palette);
        verticalLayout = new QVBoxLayout(Media_Player);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        PreviousButton = new QPushButton(Media_Player);
        PreviousButton->setObjectName(QStringLiteral("PreviousButton"));
        QFont font;
        font.setFamily(QStringLiteral("Rubik"));
        font.setPointSize(14);
        PreviousButton->setFont(font);

        horizontalLayout_2->addWidget(PreviousButton);

        PlayButton = new QPushButton(Media_Player);
        PlayButton->setObjectName(QStringLiteral("PlayButton"));
        PlayButton->setFont(font);

        horizontalLayout_2->addWidget(PlayButton);

        NextButton = new QPushButton(Media_Player);
        NextButton->setObjectName(QStringLiteral("NextButton"));
        QFont font1;
        font1.setFamily(QStringLiteral("Rubik"));
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setWeight(50);
        font1.setStrikeOut(false);
        font1.setKerning(true);
        NextButton->setFont(font1);

        horizontalLayout_2->addWidget(NextButton);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        ProgressSlider = new QSlider(Media_Player);
        ProgressSlider->setObjectName(QStringLiteral("ProgressSlider"));
        ProgressSlider->setValue(0);
        ProgressSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(ProgressSlider);

        MinutesSpinBox = new QSpinBox(Media_Player);
        MinutesSpinBox->setObjectName(QStringLiteral("MinutesSpinBox"));
        QFont font2;
        font2.setFamily(QStringLiteral("Red October"));
        font2.setPointSize(14);
        MinutesSpinBox->setFont(font2);

        horizontalLayout_3->addWidget(MinutesSpinBox);

        SecondsSpinBox = new QSpinBox(Media_Player);
        SecondsSpinBox->setObjectName(QStringLiteral("SecondsSpinBox"));
        SecondsSpinBox->setFont(font2);

        horizontalLayout_3->addWidget(SecondsSpinBox);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        AddButton = new QPushButton(Media_Player);
        AddButton->setObjectName(QStringLiteral("AddButton"));
        AddButton->setFont(font);

        horizontalLayout->addWidget(AddButton);

        RepeatButton = new QPushButton(Media_Player);
        RepeatButton->setObjectName(QStringLiteral("RepeatButton"));
        RepeatButton->setFont(font);

        horizontalLayout->addWidget(RepeatButton);

        VolumeSlider = new QSlider(Media_Player);
        VolumeSlider->setObjectName(QStringLiteral("VolumeSlider"));
        VolumeSlider->setValue(10);
        VolumeSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(VolumeSlider);


        verticalLayout->addLayout(horizontalLayout);

        listWidget = new QListWidget(Media_Player);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout->addWidget(listWidget);


        retranslateUi(Media_Player);

        QMetaObject::connectSlotsByName(Media_Player);
    } // setupUi

    void retranslateUi(QWidget *Media_Player)
    {
        Media_Player->setWindowTitle(QApplication::translate("Media_Player", "Media Player", Q_NULLPTR));
        PreviousButton->setText(QApplication::translate("Media_Player", "Previous", Q_NULLPTR));
        PlayButton->setText(QApplication::translate("Media_Player", "Play", Q_NULLPTR));
        NextButton->setText(QApplication::translate("Media_Player", "Next", Q_NULLPTR));
        AddButton->setText(QApplication::translate("Media_Player", "Add", Q_NULLPTR));
        RepeatButton->setText(QApplication::translate("Media_Player", "Mode: Repeat All", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Media_Player: public Ui_Media_Player {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEDIA_PLAYER_H
