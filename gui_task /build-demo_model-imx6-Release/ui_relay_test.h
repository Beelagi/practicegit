/********************************************************************************
** Form generated from reading UI file 'relay_test.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RELAY_TEST_H
#define UI_RELAY_TEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RELAY_TEST
{
public:
    QWidget *centralwidget;
    QPushButton *relay1_on;
    QPushButton *relay2_on;
    QPushButton *relay1_off;
    QPushButton *relay2_off;
    QPushButton *close_relay_window;
    QLabel *relay_status;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *RELAY_TEST)
    {
        if (RELAY_TEST->objectName().isEmpty())
            RELAY_TEST->setObjectName(QStringLiteral("RELAY_TEST"));
        RELAY_TEST->resize(320, 480);
        centralwidget = new QWidget(RELAY_TEST);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        relay1_on = new QPushButton(centralwidget);
        relay1_on->setObjectName(QStringLiteral("relay1_on"));
        relay1_on->setGeometry(QRect(30, 150, 110, 50));
        relay1_on->setStyleSheet(QStringLiteral("font: 14pt \"Ubuntu\";"));
        relay2_on = new QPushButton(centralwidget);
        relay2_on->setObjectName(QStringLiteral("relay2_on"));
        relay2_on->setGeometry(QRect(180, 150, 110, 50));
        relay2_on->setStyleSheet(QStringLiteral("font: 14pt \"Ubuntu\";"));
        relay1_off = new QPushButton(centralwidget);
        relay1_off->setObjectName(QStringLiteral("relay1_off"));
        relay1_off->setGeometry(QRect(30, 240, 110, 50));
        relay1_off->setStyleSheet(QStringLiteral("font: 14pt \"Ubuntu\";"));
        relay2_off = new QPushButton(centralwidget);
        relay2_off->setObjectName(QStringLiteral("relay2_off"));
        relay2_off->setGeometry(QRect(180, 240, 110, 50));
        relay2_off->setStyleSheet(QStringLiteral("font: 14pt \"Ubuntu\";"));
        close_relay_window = new QPushButton(centralwidget);
        close_relay_window->setObjectName(QStringLiteral("close_relay_window"));
        close_relay_window->setGeometry(QRect(110, 310, 110, 40));
        close_relay_window->setStyleSheet(QStringLiteral("font: 15pt \"Ubuntu\";"));
        relay_status = new QLabel(centralwidget);
        relay_status->setObjectName(QStringLiteral("relay_status"));
        relay_status->setGeometry(QRect(100, 60, 100, 30));
        relay_status->setStyleSheet(QStringLiteral("font: 13pt \"Ubuntu\";"));
        RELAY_TEST->setCentralWidget(centralwidget);
        menubar = new QMenuBar(RELAY_TEST);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 320, 25));
        RELAY_TEST->setMenuBar(menubar);
        statusbar = new QStatusBar(RELAY_TEST);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        RELAY_TEST->setStatusBar(statusbar);

        retranslateUi(RELAY_TEST);

        QMetaObject::connectSlotsByName(RELAY_TEST);
    } // setupUi

    void retranslateUi(QMainWindow *RELAY_TEST)
    {
        RELAY_TEST->setWindowTitle(QApplication::translate("RELAY_TEST", "MainWindow", 0));
        relay1_on->setText(QApplication::translate("RELAY_TEST", "Relay-1 ON", 0));
        relay2_on->setText(QApplication::translate("RELAY_TEST", "Relay-2  ON", 0));
        relay1_off->setText(QApplication::translate("RELAY_TEST", "Relay-1 OFF", 0));
        relay2_off->setText(QApplication::translate("RELAY_TEST", "Relay-2 OFF", 0));
        close_relay_window->setText(QApplication::translate("RELAY_TEST", "Close", 0));
        relay_status->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class RELAY_TEST: public Ui_RELAY_TEST {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RELAY_TEST_H
