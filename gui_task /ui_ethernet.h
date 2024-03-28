/********************************************************************************
** Form generated from reading UI file 'ethernet.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ETHERNET_H
#define UI_ETHERNET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ETHERNET
{
public:
    QWidget *centralwidget;
    QTextEdit *result;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QLabel *label_ip;
    QLineEdit *ip_address;
    QFrame *frame_2;
    QLabel *label_gateway;
    QLineEdit *gateway;
    QFrame *frame_3;
    QLabel *label_ping_url;
    QLineEdit *ping_url;
    QFrame *frame_4;
    QPushButton *ping_button;
    QPushButton *close_ethernet;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ETHERNET)
    {
        if (ETHERNET->objectName().isEmpty())
            ETHERNET->setObjectName(QStringLiteral("ETHERNET"));
        ETHERNET->resize(320, 480);
        centralwidget = new QWidget(ETHERNET);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        result = new QTextEdit(centralwidget);
        result->setObjectName(QStringLiteral("result"));
        result->setGeometry(QRect(10, 180, 300, 251));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 321, 171));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(layoutWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setStyleSheet(QStringLiteral("background-color: white;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_ip = new QLabel(frame);
        label_ip->setObjectName(QStringLiteral("label_ip"));
        label_ip->setGeometry(QRect(50, 0, 61, 31));
        label_ip->setStyleSheet(QStringLiteral("font: 13pt \"Ubuntu\";"));
        ip_address = new QLineEdit(frame);
        ip_address->setObjectName(QStringLiteral("ip_address"));
        ip_address->setGeometry(QRect(170, 10, 121, 20));
        ip_address->setStyleSheet(QStringLiteral("font: 13pt \"Ubuntu\";"));

        verticalLayout->addWidget(frame);

        frame_2 = new QFrame(layoutWidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setStyleSheet(QStringLiteral("background-color: white;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_gateway = new QLabel(frame_2);
        label_gateway->setObjectName(QStringLiteral("label_gateway"));
        label_gateway->setGeometry(QRect(20, 10, 111, 21));
        label_gateway->setStyleSheet(QStringLiteral("font: 14pt \"Ubuntu\";"));
        gateway = new QLineEdit(frame_2);
        gateway->setObjectName(QStringLiteral("gateway"));
        gateway->setGeometry(QRect(170, 10, 121, 20));
        gateway->setStyleSheet(QStringLiteral("font: 13pt \"Ubuntu\";"));

        verticalLayout->addWidget(frame_2);

        frame_3 = new QFrame(layoutWidget);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setStyleSheet(QStringLiteral("background-color: white;"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_ping_url = new QLabel(frame_3);
        label_ping_url->setObjectName(QStringLiteral("label_ping_url"));
        label_ping_url->setGeometry(QRect(20, 10, 111, 21));
        label_ping_url->setStyleSheet(QStringLiteral("font: 14pt \"Ubuntu\";"));
        ping_url = new QLineEdit(frame_3);
        ping_url->setObjectName(QStringLiteral("ping_url"));
        ping_url->setGeometry(QRect(170, 10, 121, 20));
        ping_url->setStyleSheet(QStringLiteral("font: 13pt \"Ubuntu\";"));

        verticalLayout->addWidget(frame_3);

        frame_4 = new QFrame(layoutWidget);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setStyleSheet(QStringLiteral("background-color: white;"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        ping_button = new QPushButton(frame_4);
        ping_button->setObjectName(QStringLiteral("ping_button"));
        ping_button->setGeometry(QRect(10, 10, 100, 25));
        ping_button->setStyleSheet(QStringLiteral("font: 14pt \"Ubuntu\";"));
        close_ethernet = new QPushButton(frame_4);
        close_ethernet->setObjectName(QStringLiteral("close_ethernet"));
        close_ethernet->setGeometry(QRect(190, 10, 100, 25));
        close_ethernet->setStyleSheet(QStringLiteral("font: 14pt \"Ubuntu\";"));

        verticalLayout->addWidget(frame_4);

        ETHERNET->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ETHERNET);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 320, 25));
        ETHERNET->setMenuBar(menubar);
        statusbar = new QStatusBar(ETHERNET);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        ETHERNET->setStatusBar(statusbar);

        retranslateUi(ETHERNET);

        QMetaObject::connectSlotsByName(ETHERNET);
    } // setupUi

    void retranslateUi(QMainWindow *ETHERNET)
    {
        ETHERNET->setWindowTitle(QApplication::translate("ETHERNET", "MainWindow", 0));
        label_ip->setText(QApplication::translate("ETHERNET", "IP", 0));
        ip_address->setText(QApplication::translate("ETHERNET", "192.168.0.223", 0));
        label_gateway->setText(QApplication::translate("ETHERNET", "Gateway", 0));
        gateway->setText(QApplication::translate("ETHERNET", "192.168.0.1", 0));
        label_ping_url->setText(QApplication::translate("ETHERNET", "Ping URL", 0));
        ping_url->setText(QString());
        ping_button->setText(QApplication::translate("ETHERNET", "Ping", 0));
        close_ethernet->setText(QApplication::translate("ETHERNET", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class ETHERNET: public Ui_ETHERNET {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ETHERNET_H
