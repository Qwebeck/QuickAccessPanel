/********************************************************************************
** Form generated from reading UI file 'clock.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLOCK_H
#define UI_CLOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <timewidget.h>

QT_BEGIN_NAMESPACE

class Ui_clock
{
public:
    TimeWidget *TimeLabel;

    void setupUi(QDialog *clock)
    {
        if (clock->objectName().isEmpty())
            clock->setObjectName(QStringLiteral("clock"));
        clock->resize(178, 75);
        QFont font;
        font.setFamily(QStringLiteral("Arial Black"));
        font.setPointSize(25);
        clock->setFont(font);
        TimeLabel = new TimeWidget(clock);
        TimeLabel->setObjectName(QStringLiteral("TimeLabel"));
        TimeLabel->setEnabled(true);
        TimeLabel->setGeometry(QRect(-10, 10, 191, 71));
        QFont font1;
        font1.setFamily(QStringLiteral("Rubik"));
        font1.setPointSize(25);
        font1.setBold(true);
        font1.setWeight(75);
        TimeLabel->setFont(font1);
        TimeLabel->setAlignment(Qt::AlignCenter);

        retranslateUi(clock);

        QMetaObject::connectSlotsByName(clock);
    } // setupUi

    void retranslateUi(QDialog *clock)
    {
        clock->setWindowTitle(QApplication::translate("clock", "Dialog", Q_NULLPTR));
        TimeLabel->setText(QApplication::translate("clock", "12:45:37", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class clock: public Ui_clock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOCK_H
