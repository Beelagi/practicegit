/********************************************************************************
** Form generated from reading UI file 'led_test.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LED_TEST_H
#define UI_LED_TEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LED_TEST
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QFrame *frame;
    QPushButton *red_led;
    QPushButton *yellow_led;
    QPushButton *green_led;
    QPushButton *green_led_1;
    QPushButton *off_led_1;
    QPushButton *off_led_2;
    QPushButton *close_led;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LED_TEST)
    {
        if (LED_TEST->objectName().isEmpty())
            LED_TEST->setObjectName(QStringLiteral("LED_TEST"));
        LED_TEST->resize(320, 480);
        centralwidget = new QWidget(LED_TEST);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 0, 110, 40));
        label->setStyleSheet(QStringLiteral("font: 17pt \"Ubuntu\";"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 50, 281, 291));
        frame->setFrameShape(QFrame::VLine);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(1);
        red_led = new QPushButton(frame);
        red_led->setObjectName(QStringLiteral("red_led"));
        red_led->setGeometry(QRect(10, 20, 101, 51));
        red_led->setStyleSheet(QStringLiteral("font: 15pt \"Ubuntu\";"));
        yellow_led = new QPushButton(frame);
        yellow_led->setObjectName(QStringLiteral("yellow_led"));
        yellow_led->setGeometry(QRect(160, 20, 101, 51));
        yellow_led->setStyleSheet(QStringLiteral("font: 15pt \"Ubuntu\";"));
        green_led = new QPushButton(frame);
        green_led->setObjectName(QStringLiteral("green_led"));
        green_led->setGeometry(QRect(10, 110, 101, 51));
        green_led->setStyleSheet(QStringLiteral("font: 15pt \"Ubuntu\";"));
        green_led_1 = new QPushButton(frame);
        green_led_1->setObjectName(QStringLiteral("green_led_1"));
        green_led_1->setGeometry(QRect(160, 110, 101, 51));
        green_led_1->setStyleSheet(QStringLiteral("font: 15pt \"Ubuntu\";"));
        off_led_1 = new QPushButton(frame);
        off_led_1->setObjectName(QStringLiteral("off_led_1"));
        off_led_1->setGeometry(QRect(10, 200, 101, 51));
        off_led_1->setStyleSheet(QStringLiteral("font: 15pt \"Ubuntu\";"));
        off_led_2 = new QPushButton(frame);
        off_led_2->setObjectName(QStringLiteral("off_led_2"));
        off_led_2->setGeometry(QRect(160, 200, 101, 51));
        off_led_2->setStyleSheet(QStringLiteral("font: 15pt \"Ubuntu\";"));
        close_led = new QPushButton(centralwidget);
        close_led->setObjectName(QStringLiteral("close_led"));
        close_led->setGeometry(QRect(100, 360, 101, 41));
        close_led->setStyleSheet(QStringLiteral("font: 15pt \"Ubuntu\";"));
        LED_TEST->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LED_TEST);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 320, 25));
        LED_TEST->setMenuBar(menubar);
        statusbar = new QStatusBar(LED_TEST);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        LED_TEST->setStatusBar(statusbar);

        retranslateUi(LED_TEST);

        QMetaObject::connectSlotsByName(LED_TEST);
    } // setupUi

    void retranslateUi(QMainWindow *LED_TEST)
    {
        LED_TEST->setWindowTitle(QApplication::translate("LED_TEST", "MainWindow", 0));
        label->setText(QApplication::translate("LED_TEST", "LED TEST", 0));
        red_led->setText(QApplication::translate("LED_TEST", "RED", 0));
        yellow_led->setText(QApplication::translate("LED_TEST", "YELLOW", 0));
        green_led->setText(QApplication::translate("LED_TEST", "GREEN", 0));
        green_led_1->setText(QApplication::translate("LED_TEST", "GREEN", 0));
        off_led_1->setText(QApplication::translate("LED_TEST", "OFF", 0));
        off_led_2->setText(QApplication::translate("LED_TEST", "OFF", 0));
        close_led->setText(QApplication::translate("LED_TEST", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class LED_TEST: public Ui_LED_TEST {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LED_TEST_H
