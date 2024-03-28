/********************************************************************************
** Form generated from reading UI file 'battery_status.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BATTERY_STATUS_H
#define UI_BATTERY_STATUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BATTERY_STATUS
{
public:
    QWidget *centralwidget;
    QLabel *headline_label;
    QLabel *battery_status_label;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *BATTERY_STATUS)
    {
        if (BATTERY_STATUS->objectName().isEmpty())
            BATTERY_STATUS->setObjectName(QStringLiteral("BATTERY_STATUS"));
        BATTERY_STATUS->resize(250, 200);
        centralwidget = new QWidget(BATTERY_STATUS);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        headline_label = new QLabel(centralwidget);
        headline_label->setObjectName(QStringLiteral("headline_label"));
        headline_label->setGeometry(QRect(0, 0, 250, 50));
        headline_label->setStyleSheet(QStringLiteral("background-color:blue;"));
        battery_status_label = new QLabel(centralwidget);
        battery_status_label->setObjectName(QStringLiteral("battery_status_label"));
        battery_status_label->setGeometry(QRect(0, 50, 250, 130));
        BATTERY_STATUS->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(BATTERY_STATUS);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        BATTERY_STATUS->setStatusBar(statusbar);

        retranslateUi(BATTERY_STATUS);

        QMetaObject::connectSlotsByName(BATTERY_STATUS);
    } // setupUi

    void retranslateUi(QMainWindow *BATTERY_STATUS)
    {
        BATTERY_STATUS->setWindowTitle(QApplication::translate("BATTERY_STATUS", "MainWindow", 0));
        headline_label->setText(QApplication::translate("BATTERY_STATUS", "BATTERY/POWER STATUS", 0));
        battery_status_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class BATTERY_STATUS: public Ui_BATTERY_STATUS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATTERY_STATUS_H
