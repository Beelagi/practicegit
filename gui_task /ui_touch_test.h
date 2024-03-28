/********************************************************************************
** Form generated from reading UI file 'touch_test.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOUCH_TEST_H
#define UI_TOUCH_TEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TOUCH_TEST
{
public:
    QWidget *centralwidget;
    QPushButton *touch_test_1;
    QPushButton *touch_test_2;
    QPushButton *touch_test_3;
    QPushButton *pushButton_4;
    QPushButton *touch_test_4;
    QPushButton *touch_test_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TOUCH_TEST)
    {
        if (TOUCH_TEST->objectName().isEmpty())
            TOUCH_TEST->setObjectName(QStringLiteral("TOUCH_TEST"));
        TOUCH_TEST->resize(320, 480);
        centralwidget = new QWidget(TOUCH_TEST);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        touch_test_1 = new QPushButton(centralwidget);
        touch_test_1->setObjectName(QStringLiteral("touch_test_1"));
        touch_test_1->setGeometry(QRect(10, 10, 75, 65));
        touch_test_1->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"   border:none;\n"
"   background-color:red;\n"
"}\n"
""));
        touch_test_2 = new QPushButton(centralwidget);
        touch_test_2->setObjectName(QStringLiteral("touch_test_2"));
        touch_test_2->setGeometry(QRect(230, 10, 75, 65));
        touch_test_2->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"   border:none;\n"
"   background-color:red;\n"
"}\n"
""));
        touch_test_3 = new QPushButton(centralwidget);
        touch_test_3->setObjectName(QStringLiteral("touch_test_3"));
        touch_test_3->setGeometry(QRect(120, 130, 75, 65));
        touch_test_3->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"   border:none;\n"
"   background-color:red;\n"
"}\n"
""));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(110, 200, 100, 40));
        pushButton_4->setStyleSheet(QStringLiteral("font: 15pt \"Ubuntu\";"));
        touch_test_4 = new QPushButton(centralwidget);
        touch_test_4->setObjectName(QStringLiteral("touch_test_4"));
        touch_test_4->setGeometry(QRect(10, 320, 75, 65));
        touch_test_4->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"   border:none;\n"
"   background-color:red;\n"
"}\n"
""));
        touch_test_5 = new QPushButton(centralwidget);
        touch_test_5->setObjectName(QStringLiteral("touch_test_5"));
        touch_test_5->setGeometry(QRect(230, 310, 75, 65));
        touch_test_5->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"   border:none;\n"
"   background-color:red;\n"
"}\n"
""));
        TOUCH_TEST->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TOUCH_TEST);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 320, 25));
        TOUCH_TEST->setMenuBar(menubar);
        statusbar = new QStatusBar(TOUCH_TEST);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        TOUCH_TEST->setStatusBar(statusbar);

        retranslateUi(TOUCH_TEST);

        QMetaObject::connectSlotsByName(TOUCH_TEST);
    } // setupUi

    void retranslateUi(QMainWindow *TOUCH_TEST)
    {
        TOUCH_TEST->setWindowTitle(QApplication::translate("TOUCH_TEST", "MainWindow", 0));
        touch_test_1->setText(QApplication::translate("TOUCH_TEST", "1", 0));
        touch_test_2->setText(QApplication::translate("TOUCH_TEST", "2", 0));
        touch_test_3->setText(QApplication::translate("TOUCH_TEST", "3", 0));
        pushButton_4->setText(QApplication::translate("TOUCH_TEST", "Close", 0));
        touch_test_4->setText(QApplication::translate("TOUCH_TEST", "4", 0));
        touch_test_5->setText(QApplication::translate("TOUCH_TEST", "5", 0));
    } // retranslateUi

};

namespace Ui {
    class TOUCH_TEST: public Ui_TOUCH_TEST {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOUCH_TEST_H
