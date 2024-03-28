/********************************************************************************
** Form generated from reading UI file 'finger_print_capture.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINGER_PRINT_CAPTURE_H
#define UI_FINGER_PRINT_CAPTURE_H

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

class Ui_FINGER_PRINT_CAPTURE
{
public:
    QWidget *centralwidget;
    QPushButton *close_fp_capture;
    QPushButton *start_FP_test;
    QLabel *FP_label;
    QPushButton *start_FP_test_2;
    QPushButton *verify_test;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *FINGER_PRINT_CAPTURE)
    {
        if (FINGER_PRINT_CAPTURE->objectName().isEmpty())
            FINGER_PRINT_CAPTURE->setObjectName(QStringLiteral("FINGER_PRINT_CAPTURE"));
        FINGER_PRINT_CAPTURE->resize(320, 480);
        centralwidget = new QWidget(FINGER_PRINT_CAPTURE);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        close_fp_capture = new QPushButton(centralwidget);
        close_fp_capture->setObjectName(QStringLiteral("close_fp_capture"));
        close_fp_capture->setGeometry(QRect(70, 330, 151, 61));
        close_fp_capture->setStyleSheet(QStringLiteral("font: 14pt \"Ubuntu\";"));
        start_FP_test = new QPushButton(centralwidget);
        start_FP_test->setObjectName(QStringLiteral("start_FP_test"));
        start_FP_test->setGeometry(QRect(70, 100, 151, 61));
        start_FP_test->setStyleSheet(QStringLiteral("font: 14pt \"Ubuntu\";"));
        FP_label = new QLabel(centralwidget);
        FP_label->setObjectName(QStringLiteral("FP_label"));
        FP_label->setGeometry(QRect(70, 10, 201, 51));
        FP_label->setStyleSheet(QStringLiteral("font: 15pt \"Ubuntu\";"));
        start_FP_test_2 = new QPushButton(centralwidget);
        start_FP_test_2->setObjectName(QStringLiteral("start_FP_test_2"));
        start_FP_test_2->setGeometry(QRect(70, 170, 151, 61));
        start_FP_test_2->setStyleSheet(QStringLiteral("font: 14pt \"Ubuntu\";"));
        verify_test = new QPushButton(centralwidget);
        verify_test->setObjectName(QStringLiteral("verify_test"));
        verify_test->setGeometry(QRect(70, 250, 151, 61));
        verify_test->setStyleSheet(QStringLiteral("font: 14pt \"Ubuntu\";"));
        FINGER_PRINT_CAPTURE->setCentralWidget(centralwidget);
        menubar = new QMenuBar(FINGER_PRINT_CAPTURE);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 320, 25));
        FINGER_PRINT_CAPTURE->setMenuBar(menubar);
        statusbar = new QStatusBar(FINGER_PRINT_CAPTURE);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        FINGER_PRINT_CAPTURE->setStatusBar(statusbar);

        retranslateUi(FINGER_PRINT_CAPTURE);

        QMetaObject::connectSlotsByName(FINGER_PRINT_CAPTURE);
    } // setupUi

    void retranslateUi(QMainWindow *FINGER_PRINT_CAPTURE)
    {
        FINGER_PRINT_CAPTURE->setWindowTitle(QApplication::translate("FINGER_PRINT_CAPTURE", "MainWindow", 0));
        close_fp_capture->setText(QApplication::translate("FINGER_PRINT_CAPTURE", "Close", 0));
        start_FP_test->setText(QApplication::translate("FINGER_PRINT_CAPTURE", "Start FP test 1", 0));
        FP_label->setText(QString());
        start_FP_test_2->setText(QApplication::translate("FINGER_PRINT_CAPTURE", "Start FP test 2", 0));
        verify_test->setText(QApplication::translate("FINGER_PRINT_CAPTURE", "Verify", 0));
    } // retranslateUi

};

namespace Ui {
    class FINGER_PRINT_CAPTURE: public Ui_FINGER_PRINT_CAPTURE {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINGER_PRINT_CAPTURE_H
