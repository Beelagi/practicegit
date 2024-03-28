/********************************************************************************
** Form generated from reading UI file 'speaker_test.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPEAKER_TEST_H
#define UI_SPEAKER_TEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SPEAKER_TEST
{
public:
    QWidget *centralwidget;
    QPushButton *thank_you;
    QPushButton *access_granted;
    QPushButton *access_denied;
    QPushButton *close_audio_volume;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *volume_change;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SPEAKER_TEST)
    {
        if (SPEAKER_TEST->objectName().isEmpty())
            SPEAKER_TEST->setObjectName(QStringLiteral("SPEAKER_TEST"));
        SPEAKER_TEST->resize(320, 480);
        centralwidget = new QWidget(SPEAKER_TEST);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        thank_you = new QPushButton(centralwidget);
        thank_you->setObjectName(QStringLiteral("thank_you"));
        thank_you->setGeometry(QRect(90, 70, 120, 50));
        thank_you->setStyleSheet(QStringLiteral("font: 12pt \"Ubuntu\";"));
        access_granted = new QPushButton(centralwidget);
        access_granted->setObjectName(QStringLiteral("access_granted"));
        access_granted->setGeometry(QRect(90, 150, 120, 50));
        access_granted->setStyleSheet(QStringLiteral("font: 12pt \"Ubuntu\";"));
        access_denied = new QPushButton(centralwidget);
        access_denied->setObjectName(QStringLiteral("access_denied"));
        access_denied->setGeometry(QRect(90, 220, 120, 50));
        access_denied->setStyleSheet(QStringLiteral("font: 12pt \"Ubuntu\";"));
        close_audio_volume = new QPushButton(centralwidget);
        close_audio_volume->setObjectName(QStringLiteral("close_audio_volume"));
        close_audio_volume->setGeometry(QRect(90, 300, 120, 50));
        close_audio_volume->setStyleSheet(QStringLiteral("font: 12pt \"Ubuntu\";"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 20, 141, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("font: 13pt \"Ubuntu\";"));

        horizontalLayout->addWidget(label);

        volume_change = new QComboBox(layoutWidget);
        volume_change->setObjectName(QStringLiteral("volume_change"));

        horizontalLayout->addWidget(volume_change);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(230, 150, 61, 61));
        SPEAKER_TEST->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SPEAKER_TEST);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 320, 25));
        SPEAKER_TEST->setMenuBar(menubar);
        statusbar = new QStatusBar(SPEAKER_TEST);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        SPEAKER_TEST->setStatusBar(statusbar);

        retranslateUi(SPEAKER_TEST);

        QMetaObject::connectSlotsByName(SPEAKER_TEST);
    } // setupUi

    void retranslateUi(QMainWindow *SPEAKER_TEST)
    {
        SPEAKER_TEST->setWindowTitle(QApplication::translate("SPEAKER_TEST", "MainWindow", 0));
        thank_you->setText(QApplication::translate("SPEAKER_TEST", "Thank You", 0));
        access_granted->setText(QApplication::translate("SPEAKER_TEST", "Access Granted", 0));
        access_denied->setText(QApplication::translate("SPEAKER_TEST", "Access denied", 0));
        close_audio_volume->setText(QApplication::translate("SPEAKER_TEST", "Close", 0));
        label->setText(QApplication::translate("SPEAKER_TEST", "Volume:", 0));
        volume_change->clear();
        volume_change->insertItems(0, QStringList()
         << QApplication::translate("SPEAKER_TEST", "1", 0)
         << QApplication::translate("SPEAKER_TEST", "2", 0)
         << QApplication::translate("SPEAKER_TEST", "3", 0)
         << QApplication::translate("SPEAKER_TEST", "4", 0)
         << QApplication::translate("SPEAKER_TEST", "5", 0)
         << QApplication::translate("SPEAKER_TEST", "6", 0)
         << QApplication::translate("SPEAKER_TEST", "7", 0)
         << QApplication::translate("SPEAKER_TEST", "8", 0)
         << QApplication::translate("SPEAKER_TEST", "9", 0)
         << QApplication::translate("SPEAKER_TEST", "10", 0)
         << QApplication::translate("SPEAKER_TEST", "11", 0)
         << QApplication::translate("SPEAKER_TEST", "12", 0)
         << QApplication::translate("SPEAKER_TEST", "13", 0)
         << QApplication::translate("SPEAKER_TEST", "14", 0)
        );
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SPEAKER_TEST: public Ui_SPEAKER_TEST {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPEAKER_TEST_H
