/********************************************************************************
** Form generated from reading UI file 'sam_test.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAM_TEST_H
#define UI_SAM_TEST_H

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

class Ui_SAM_TEST
{
public:
    QWidget *centralwidget;
    QPushButton *close_sam_test;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *init_process;
    QPushButton *CT_commands;
    QTextEdit *sam_textEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SAM_TEST)
    {
        if (SAM_TEST->objectName().isEmpty())
            SAM_TEST->setObjectName(QStringLiteral("SAM_TEST"));
        SAM_TEST->resize(320, 480);
        centralwidget = new QWidget(SAM_TEST);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        close_sam_test = new QPushButton(centralwidget);
        close_sam_test->setObjectName(QStringLiteral("close_sam_test"));
        close_sam_test->setGeometry(QRect(80, 380, 121, 31));
        close_sam_test->setStyleSheet(QStringLiteral("font: 15pt \"Ubuntu\";"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 0, 291, 371));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        init_process = new QPushButton(layoutWidget);
        init_process->setObjectName(QStringLiteral("init_process"));
        init_process->setStyleSheet(QStringLiteral("font: 15pt \"Ubuntu\";"));

        horizontalLayout->addWidget(init_process);

        CT_commands = new QPushButton(layoutWidget);
        CT_commands->setObjectName(QStringLiteral("CT_commands"));
        CT_commands->setStyleSheet(QStringLiteral("font: 15pt \"Ubuntu\";"));

        horizontalLayout->addWidget(CT_commands);


        verticalLayout->addLayout(horizontalLayout);

        sam_textEdit = new QTextEdit(layoutWidget);
        sam_textEdit->setObjectName(QStringLiteral("sam_textEdit"));
        sam_textEdit->setStyleSheet(QStringLiteral("font: 15pt \"Ubuntu\";"));

        verticalLayout->addWidget(sam_textEdit);

        SAM_TEST->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SAM_TEST);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 320, 25));
        SAM_TEST->setMenuBar(menubar);
        statusbar = new QStatusBar(SAM_TEST);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        SAM_TEST->setStatusBar(statusbar);

        retranslateUi(SAM_TEST);

        QMetaObject::connectSlotsByName(SAM_TEST);
    } // setupUi

    void retranslateUi(QMainWindow *SAM_TEST)
    {
        SAM_TEST->setWindowTitle(QApplication::translate("SAM_TEST", "MainWindow", 0));
        close_sam_test->setText(QApplication::translate("SAM_TEST", "Close", 0));
        init_process->setText(QApplication::translate("SAM_TEST", "Init card", 0));
        CT_commands->setText(QApplication::translate("SAM_TEST", "CT commands", 0));
    } // retranslateUi

};

namespace Ui {
    class SAM_TEST: public Ui_SAM_TEST {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAM_TEST_H
