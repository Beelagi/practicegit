/********************************************************************************
** Form generated from reading UI file 'screen.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREEN_H
#define UI_SCREEN_H

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

class Ui_SCREEN
{
public:
    QWidget *centralwidget;
    QLabel *label_logo;
    QLabel *label;
    QPushButton *open_new_window;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SCREEN)
    {
        if (SCREEN->objectName().isEmpty())
            SCREEN->setObjectName(QStringLiteral("SCREEN"));
        SCREEN->resize(320, 480);
        centralwidget = new QWidget(SCREEN);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label_logo = new QLabel(centralwidget);
        label_logo->setObjectName(QStringLiteral("label_logo"));
        label_logo->setGeometry(QRect(50, 80, 251, 131));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 321, 41));
        label->setStyleSheet(QLatin1String("background-color:blue;\n"
"font: 15pt \"Ubuntu\";"));
        open_new_window = new QPushButton(centralwidget);
        open_new_window->setObjectName(QStringLiteral("open_new_window"));
        open_new_window->setGeometry(QRect(70, 280, 191, 61));
        open_new_window->setStyleSheet(QStringLiteral("font: 13pt \"Ubuntu\";"));
        SCREEN->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SCREEN);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 320, 25));
        SCREEN->setMenuBar(menubar);
        statusbar = new QStatusBar(SCREEN);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        SCREEN->setStatusBar(statusbar);

        retranslateUi(SCREEN);

        QMetaObject::connectSlotsByName(SCREEN);
    } // setupUi

    void retranslateUi(QMainWindow *SCREEN)
    {
        SCREEN->setWindowTitle(QApplication::translate("SCREEN", "MainWindow", 0));
        label_logo->setText(QApplication::translate("SCREEN", "TextLabel", 0));
        label->setText(QApplication::translate("SCREEN", "                   BIONIC8 TEST", 0));
        open_new_window->setText(QApplication::translate("SCREEN", "Hardware Test Menu", 0));
    } // retranslateUi

};

namespace Ui {
    class SCREEN: public Ui_SCREEN {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREEN_H
