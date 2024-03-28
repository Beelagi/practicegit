/********************************************************************************
** Form generated from reading UI file 'mainscreen.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINSCREEN_H
#define UI_MAINSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MAINSCREEN
{
public:
    QWidget *centralwidget;
    QLabel *label_logo;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MAINSCREEN)
    {
        if (MAINSCREEN->objectName().isEmpty())
            MAINSCREEN->setObjectName(QStringLiteral("MAINSCREEN"));
        MAINSCREEN->resize(320, 480);
        MAINSCREEN->setStyleSheet(QStringLiteral(""));
        centralwidget = new QWidget(MAINSCREEN);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label_logo = new QLabel(centralwidget);
        label_logo->setObjectName(QStringLiteral("label_logo"));
        label_logo->setGeometry(QRect(70, 110, 181, 71));
        MAINSCREEN->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MAINSCREEN);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 320, 25));
        MAINSCREEN->setMenuBar(menubar);
        statusbar = new QStatusBar(MAINSCREEN);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MAINSCREEN->setStatusBar(statusbar);

        retranslateUi(MAINSCREEN);

        QMetaObject::connectSlotsByName(MAINSCREEN);
    } // setupUi

    void retranslateUi(QMainWindow *MAINSCREEN)
    {
        MAINSCREEN->setWindowTitle(QApplication::translate("MAINSCREEN", "MainWindow", 0));
        label_logo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MAINSCREEN: public Ui_MAINSCREEN {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINSCREEN_H
