/********************************************************************************
** Form generated from reading UI file 'test_screen.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_SCREEN_H
#define UI_TEST_SCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TEST_SCREEN
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *home;
    QPushButton *lcd_test;
    QPushButton *relay_test;
    QPushButton *speaker_test;
    QPushButton *led_test;
    QPushButton *sam_test;
    QPushButton *RFID_test;
    QPushButton *finger_capture;
    QPushButton *ethernet;
    QPushButton *rs_485;
    QPushButton *weigand_test;
    QPushButton *close;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TEST_SCREEN)
    {
        if (TEST_SCREEN->objectName().isEmpty())
            TEST_SCREEN->setObjectName(QStringLiteral("TEST_SCREEN"));
        TEST_SCREEN->resize(320, 480);
        centralwidget = new QWidget(TEST_SCREEN);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -213, 284, 626));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        home = new QPushButton(scrollAreaWidgetContents);
        home->setObjectName(QStringLiteral("home"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/audio/thank_you_audio_file/home.png"), QSize(), QIcon::Normal, QIcon::Off);
        home->setIcon(icon);
        home->setIconSize(QSize(35, 35));

        gridLayout->addWidget(home, 0, 0, 1, 1);

        lcd_test = new QPushButton(scrollAreaWidgetContents);
        lcd_test->setObjectName(QStringLiteral("lcd_test"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/audio/thank_you_audio_file/lcd.png"), QSize(), QIcon::Normal, QIcon::Off);
        lcd_test->setIcon(icon1);
        lcd_test->setIconSize(QSize(35, 35));

        gridLayout->addWidget(lcd_test, 1, 0, 1, 1);

        relay_test = new QPushButton(scrollAreaWidgetContents);
        relay_test->setObjectName(QStringLiteral("relay_test"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/audio/thank_you_audio_file/relay.png"), QSize(), QIcon::Normal, QIcon::Off);
        relay_test->setIcon(icon2);
        relay_test->setIconSize(QSize(35, 35));

        gridLayout->addWidget(relay_test, 2, 0, 1, 1);

        speaker_test = new QPushButton(scrollAreaWidgetContents);
        speaker_test->setObjectName(QStringLiteral("speaker_test"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/audio/thank_you_audio_file/sound.png"), QSize(), QIcon::Normal, QIcon::Off);
        speaker_test->setIcon(icon3);
        speaker_test->setIconSize(QSize(35, 35));

        gridLayout->addWidget(speaker_test, 3, 0, 1, 1);

        led_test = new QPushButton(scrollAreaWidgetContents);
        led_test->setObjectName(QStringLiteral("led_test"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/audio/thank_you_audio_file/led (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        led_test->setIcon(icon4);
        led_test->setIconSize(QSize(35, 35));

        gridLayout->addWidget(led_test, 4, 0, 1, 1);

        sam_test = new QPushButton(scrollAreaWidgetContents);
        sam_test->setObjectName(QStringLiteral("sam_test"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/audio/thank_you_audio_file/sim-card.png"), QSize(), QIcon::Normal, QIcon::Off);
        sam_test->setIcon(icon5);
        sam_test->setIconSize(QSize(35, 35));

        gridLayout->addWidget(sam_test, 5, 0, 1, 1);

        RFID_test = new QPushButton(scrollAreaWidgetContents);
        RFID_test->setObjectName(QStringLiteral("RFID_test"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/audio/thank_you_audio_file/contactless.png"), QSize(), QIcon::Normal, QIcon::Off);
        RFID_test->setIcon(icon6);
        RFID_test->setIconSize(QSize(35, 35));

        gridLayout->addWidget(RFID_test, 6, 0, 1, 1);

        finger_capture = new QPushButton(scrollAreaWidgetContents);
        finger_capture->setObjectName(QStringLiteral("finger_capture"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/audio/thank_you_audio_file/fingerprint.png"), QSize(), QIcon::Normal, QIcon::Off);
        finger_capture->setIcon(icon7);
        finger_capture->setIconSize(QSize(35, 35));

        gridLayout->addWidget(finger_capture, 7, 0, 1, 1);

        ethernet = new QPushButton(scrollAreaWidgetContents);
        ethernet->setObjectName(QStringLiteral("ethernet"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/audio/thank_you_audio_file/ethernet.png"), QSize(), QIcon::Normal, QIcon::Off);
        ethernet->setIcon(icon8);
        ethernet->setIconSize(QSize(35, 35));

        gridLayout->addWidget(ethernet, 8, 0, 1, 1);

        rs_485 = new QPushButton(scrollAreaWidgetContents);
        rs_485->setObjectName(QStringLiteral("rs_485"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/audio/thank_you_audio_file/rs-485.png"), QSize(), QIcon::Normal, QIcon::Off);
        rs_485->setIcon(icon9);
        rs_485->setIconSize(QSize(35, 35));

        gridLayout->addWidget(rs_485, 9, 0, 1, 1);

        weigand_test = new QPushButton(scrollAreaWidgetContents);
        weigand_test->setObjectName(QStringLiteral("weigand_test"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/audio/thank_you_audio_file/right-arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        weigand_test->setIcon(icon10);
        weigand_test->setIconSize(QSize(35, 35));

        gridLayout->addWidget(weigand_test, 10, 0, 1, 1);

        close = new QPushButton(scrollAreaWidgetContents);
        close->setObjectName(QStringLiteral("close"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/audio/thank_you_audio_file/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        close->setIcon(icon11);
        close->setIconSize(QSize(35, 35));

        gridLayout->addWidget(close, 11, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);

        TEST_SCREEN->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TEST_SCREEN);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 320, 25));
        TEST_SCREEN->setMenuBar(menubar);
        statusbar = new QStatusBar(TEST_SCREEN);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        TEST_SCREEN->setStatusBar(statusbar);

        retranslateUi(TEST_SCREEN);

        QMetaObject::connectSlotsByName(TEST_SCREEN);
    } // setupUi

    void retranslateUi(QMainWindow *TEST_SCREEN)
    {
        TEST_SCREEN->setWindowTitle(QApplication::translate("TEST_SCREEN", "MainWindow", 0));
        home->setText(QApplication::translate("TEST_SCREEN", "Home", 0));
        lcd_test->setText(QApplication::translate("TEST_SCREEN", "LCD test", 0));
        relay_test->setText(QApplication::translate("TEST_SCREEN", "Relay test", 0));
        speaker_test->setText(QApplication::translate("TEST_SCREEN", "Speaker test", 0));
        led_test->setText(QApplication::translate("TEST_SCREEN", "LED test", 0));
        sam_test->setText(QApplication::translate("TEST_SCREEN", "SAM test", 0));
        RFID_test->setText(QApplication::translate("TEST_SCREEN", "RFID test", 0));
        finger_capture->setText(QApplication::translate("TEST_SCREEN", "Finger Capture", 0));
        ethernet->setText(QApplication::translate("TEST_SCREEN", "Ethernet", 0));
        rs_485->setText(QApplication::translate("TEST_SCREEN", "RS 485", 0));
        weigand_test->setText(QApplication::translate("TEST_SCREEN", "Weigand test", 0));
        close->setText(QApplication::translate("TEST_SCREEN", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class TEST_SCREEN: public Ui_TEST_SCREEN {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_SCREEN_H
