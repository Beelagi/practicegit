/********************************************************************************
** Form generated from reading UI file 'color_test.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLOR_TEST_H
#define UI_COLOR_TEST_H

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

class Ui_COLOR_TEST
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *close_color_test;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *COLOR_TEST)
    {
        if (COLOR_TEST->objectName().isEmpty())
            COLOR_TEST->setObjectName(QStringLiteral("COLOR_TEST"));
        COLOR_TEST->resize(320, 480);
        centralwidget = new QWidget(COLOR_TEST);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 10, 41, 21));
        label->setStyleSheet(QStringLiteral("font: 15pt \"Ubuntu\";"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 40, 61, 21));
        label_2->setStyleSheet(QStringLiteral("font: 15pt \"Ubuntu\";"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 70, 61, 16));
        label_3->setStyleSheet(QStringLiteral("font: 15pt \"Ubuntu\";"));
        close_color_test = new QPushButton(centralwidget);
        close_color_test->setObjectName(QStringLiteral("close_color_test"));
        close_color_test->setGeometry(QRect(100, 370, 101, 41));
        close_color_test->setStyleSheet(QStringLiteral("font: 15pt \"Ubuntu\";"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(120, 10, 160, 20));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"   border:none;\n"
"   background-color:red;\n"
"}\n"
""));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(120, 40, 160, 20));
        pushButton_3->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"   border:none;\n"
"   background-color:green;\n"
"}\n"
""));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(120, 70, 160, 20));
        pushButton_4->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"   border:none;\n"
"   background-color:blue;\n"
"}\n"
""));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 140, 50, 200));
        pushButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"   border:none;\n"
"   background-color:white;\n"
"}\n"
""));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(50, 140, 50, 200));
        pushButton_5->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"   border:none;\n"
"   background-color:yellow;\n"
"}\n"
""));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(90, 140, 50, 200));
        pushButton_6->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"   border:none;\n"
"   background-color:skyblue;\n"
"}\n"
""));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(140, 140, 50, 200));
        pushButton_7->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"   border:none;\n"
"   background-color:#00FF00;\n"
"}\n"
""));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(180, 140, 50, 200));
        pushButton_8->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"   border:none;\n"
"   background-color:pink;\n"
"}\n"
""));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(220, 140, 50, 200));
        pushButton_9->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"   border:none;\n"
"   background-color:red;\n"
"}\n"
""));
        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(270, 140, 45, 200));
        pushButton_10->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"   border:none;\n"
"   background-color:blue;\n"
"}\n"
""));
        COLOR_TEST->setCentralWidget(centralwidget);
        menubar = new QMenuBar(COLOR_TEST);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 320, 25));
        COLOR_TEST->setMenuBar(menubar);
        statusbar = new QStatusBar(COLOR_TEST);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        COLOR_TEST->setStatusBar(statusbar);

        retranslateUi(COLOR_TEST);

        QMetaObject::connectSlotsByName(COLOR_TEST);
    } // setupUi

    void retranslateUi(QMainWindow *COLOR_TEST)
    {
        COLOR_TEST->setWindowTitle(QApplication::translate("COLOR_TEST", "MainWindow", 0));
        label->setText(QApplication::translate("COLOR_TEST", "Red", 0));
        label_2->setText(QApplication::translate("COLOR_TEST", "Green", 0));
        label_3->setText(QApplication::translate("COLOR_TEST", "Blue", 0));
        close_color_test->setText(QApplication::translate("COLOR_TEST", "Close", 0));
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        pushButton_7->setText(QString());
        pushButton_8->setText(QString());
        pushButton_9->setText(QString());
        pushButton_10->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class COLOR_TEST: public Ui_COLOR_TEST {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLOR_TEST_H
