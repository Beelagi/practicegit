/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QPushButton *home;
    QPushButton *pushButton;
    QPushButton *relay_test;
    QPushButton *speaker_test;
    QPushButton *led_test;
    QPushButton *sam_test;
    QPushButton *RFID_test;
    QPushButton *finger_capture;
    QPushButton *next;
    QPushButton *ethernet;
    QPushButton *rs_485;
    QPushButton *close;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(320, 480);
        MainWindow->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -257, 284, 657));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        home = new QPushButton(scrollAreaWidgetContents);
        home->setObjectName(QStringLiteral("home"));
        home->setStyleSheet(QStringLiteral(""));
        QIcon icon;
        icon.addFile(QStringLiteral(":/audio/thank_you_audio_file/home.png"), QSize(), QIcon::Normal, QIcon::Off);
        home->setIcon(icon);
        home->setIconSize(QSize(35, 35));
        home->setCheckable(false);

        verticalLayout->addWidget(home);

        pushButton = new QPushButton(scrollAreaWidgetContents);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QStringLiteral("background-color:white;"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/audio/thank_you_audio_file/lcd.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(35, 35));

        verticalLayout->addWidget(pushButton);

        relay_test = new QPushButton(scrollAreaWidgetContents);
        relay_test->setObjectName(QStringLiteral("relay_test"));
        relay_test->setStyleSheet(QStringLiteral(""));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/audio/thank_you_audio_file/relay.png"), QSize(), QIcon::Normal, QIcon::Off);
        relay_test->setIcon(icon2);
        relay_test->setIconSize(QSize(35, 35));

        verticalLayout->addWidget(relay_test);

        speaker_test = new QPushButton(scrollAreaWidgetContents);
        speaker_test->setObjectName(QStringLiteral("speaker_test"));
        speaker_test->setStyleSheet(QStringLiteral(""));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/audio/thank_you_audio_file/sound.png"), QSize(), QIcon::Normal, QIcon::Off);
        speaker_test->setIcon(icon3);
        speaker_test->setIconSize(QSize(35, 35));

        verticalLayout->addWidget(speaker_test);

        led_test = new QPushButton(scrollAreaWidgetContents);
        led_test->setObjectName(QStringLiteral("led_test"));
        led_test->setStyleSheet(QStringLiteral(""));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/audio/thank_you_audio_file/led (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        led_test->setIcon(icon4);
        led_test->setIconSize(QSize(35, 35));

        verticalLayout->addWidget(led_test);

        sam_test = new QPushButton(scrollAreaWidgetContents);
        sam_test->setObjectName(QStringLiteral("sam_test"));
        sam_test->setStyleSheet(QStringLiteral(""));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/audio/thank_you_audio_file/sim-card.png"), QSize(), QIcon::Normal, QIcon::Off);
        sam_test->setIcon(icon5);
        sam_test->setIconSize(QSize(35, 35));

        verticalLayout->addWidget(sam_test);

        RFID_test = new QPushButton(scrollAreaWidgetContents);
        RFID_test->setObjectName(QStringLiteral("RFID_test"));
        RFID_test->setStyleSheet(QStringLiteral(""));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/audio/thank_you_audio_file/contactless.png"), QSize(), QIcon::Normal, QIcon::Off);
        RFID_test->setIcon(icon6);
        RFID_test->setIconSize(QSize(35, 35));

        verticalLayout->addWidget(RFID_test);

        finger_capture = new QPushButton(scrollAreaWidgetContents);
        finger_capture->setObjectName(QStringLiteral("finger_capture"));
        finger_capture->setStyleSheet(QStringLiteral(""));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/audio/thank_you_audio_file/fingerprint.png"), QSize(), QIcon::Normal, QIcon::Off);
        finger_capture->setIcon(icon7);
        finger_capture->setIconSize(QSize(35, 35));

        verticalLayout->addWidget(finger_capture);

        next = new QPushButton(scrollAreaWidgetContents);
        next->setObjectName(QStringLiteral("next"));
        next->setStyleSheet(QStringLiteral(""));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/audio/thank_you_audio_file/right-arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        next->setIcon(icon8);
        next->setIconSize(QSize(35, 35));

        verticalLayout->addWidget(next);

        ethernet = new QPushButton(scrollAreaWidgetContents);
        ethernet->setObjectName(QStringLiteral("ethernet"));
        ethernet->setStyleSheet(QStringLiteral(""));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/audio/thank_you_audio_file/ethernet.png"), QSize(), QIcon::Normal, QIcon::Off);
        ethernet->setIcon(icon9);
        ethernet->setIconSize(QSize(35, 35));

        verticalLayout->addWidget(ethernet);

        rs_485 = new QPushButton(scrollAreaWidgetContents);
        rs_485->setObjectName(QStringLiteral("rs_485"));
        rs_485->setStyleSheet(QStringLiteral(""));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/audio/thank_you_audio_file/rs-485.png"), QSize(), QIcon::Normal, QIcon::Off);
        rs_485->setIcon(icon10);
        rs_485->setIconSize(QSize(35, 35));

        verticalLayout->addWidget(rs_485);

        close = new QPushButton(scrollAreaWidgetContents);
        close->setObjectName(QStringLiteral("close"));
        close->setStyleSheet(QStringLiteral(""));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/audio/thank_you_audio_file/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        close->setIcon(icon11);
        close->setIconSize(QSize(35, 35));

        verticalLayout->addWidget(close);

        pushButton_2 = new QPushButton(scrollAreaWidgetContents);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 320, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        home->setText(QApplication::translate("MainWindow", "Home", 0));
        pushButton->setText(QApplication::translate("MainWindow", "LCD test", 0));
        relay_test->setText(QApplication::translate("MainWindow", "Relay test", 0));
        speaker_test->setText(QApplication::translate("MainWindow", "Speaker test", 0));
        led_test->setText(QApplication::translate("MainWindow", "LED test", 0));
        sam_test->setText(QApplication::translate("MainWindow", "SAM test", 0));
        RFID_test->setText(QApplication::translate("MainWindow", "RFID Test", 0));
        finger_capture->setText(QApplication::translate("MainWindow", "Finger Capture", 0));
        next->setText(QApplication::translate("MainWindow", "Next", 0));
        ethernet->setText(QApplication::translate("MainWindow", "Ethernet", 0));
        rs_485->setText(QApplication::translate("MainWindow", "RS 485", 0));
        close->setText(QApplication::translate("MainWindow", "Close", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
