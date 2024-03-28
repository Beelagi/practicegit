/********************************************************************************
** Form generated from reading UI file 'rfid_test.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RFID_TEST_H
#define UI_RFID_TEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RFID_test
{
public:
    QWidget *centralwidget;
    QPushButton *close_rfid_window;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *connecting_to_CL_card;
    QPushButton *disconnecting_to_CL_card;
    QTextEdit *rfid_textEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *RFID_test)
    {
        if (RFID_test->objectName().isEmpty())
            RFID_test->setObjectName(QStringLiteral("RFID_test"));
        RFID_test->resize(320, 480);
        centralwidget = new QWidget(RFID_test);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        close_rfid_window = new QPushButton(centralwidget);
        close_rfid_window->setObjectName(QStringLiteral("close_rfid_window"));
        close_rfid_window->setGeometry(QRect(110, 390, 99, 31));
        close_rfid_window->setStyleSheet(QStringLiteral("font: 15pt \"Ubuntu\";"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 301, 371));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        connecting_to_CL_card = new QPushButton(layoutWidget);
        connecting_to_CL_card->setObjectName(QStringLiteral("connecting_to_CL_card"));
        connecting_to_CL_card->setStyleSheet(QStringLiteral("font: 15pt \"Ubuntu\";"));

        horizontalLayout->addWidget(connecting_to_CL_card);

        disconnecting_to_CL_card = new QPushButton(layoutWidget);
        disconnecting_to_CL_card->setObjectName(QStringLiteral("disconnecting_to_CL_card"));
        disconnecting_to_CL_card->setStyleSheet(QStringLiteral("font: 15pt \"Ubuntu\";"));

        horizontalLayout->addWidget(disconnecting_to_CL_card);


        verticalLayout->addLayout(horizontalLayout);

        rfid_textEdit = new QTextEdit(layoutWidget);
        rfid_textEdit->setObjectName(QStringLiteral("rfid_textEdit"));

        verticalLayout->addWidget(rfid_textEdit);

        RFID_test->setCentralWidget(centralwidget);
        menubar = new QMenuBar(RFID_test);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 320, 25));
        RFID_test->setMenuBar(menubar);
        statusbar = new QStatusBar(RFID_test);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        RFID_test->setStatusBar(statusbar);

        retranslateUi(RFID_test);

        QMetaObject::connectSlotsByName(RFID_test);
    } // setupUi

    void retranslateUi(QMainWindow *RFID_test)
    {
        RFID_test->setWindowTitle(QApplication::translate("RFID_test", "MainWindow", 0));
        close_rfid_window->setText(QApplication::translate("RFID_test", "Close", 0));
        connecting_to_CL_card->setText(QApplication::translate("RFID_test", "Start Polling", 0));
        disconnecting_to_CL_card->setText(QApplication::translate("RFID_test", "Stop", 0));
    } // retranslateUi

};

namespace Ui {
    class RFID_test: public Ui_RFID_test {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RFID_TEST_H
