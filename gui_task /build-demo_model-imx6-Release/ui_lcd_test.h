/********************************************************************************
** Form generated from reading UI file 'lcd_test.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LCD_TEST_H
#define UI_LCD_TEST_H

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

class Ui_LCD_TEST
{
public:
    QWidget *centralwidget;
    QPushButton *color_test;
    QPushButton *touch_test;
    QPushButton *close_lcd_window;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *brightness_level;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LCD_TEST)
    {
        if (LCD_TEST->objectName().isEmpty())
            LCD_TEST->setObjectName(QStringLiteral("LCD_TEST"));
        LCD_TEST->resize(320, 480);
        centralwidget = new QWidget(LCD_TEST);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        color_test = new QPushButton(centralwidget);
        color_test->setObjectName(QStringLiteral("color_test"));
        color_test->setGeometry(QRect(90, 150, 111, 51));
        color_test->setStyleSheet(QStringLiteral("font: 15pt \"Ubuntu\";"));
        touch_test = new QPushButton(centralwidget);
        touch_test->setObjectName(QStringLiteral("touch_test"));
        touch_test->setGeometry(QRect(90, 230, 111, 51));
        touch_test->setStyleSheet(QStringLiteral("font: 15pt \"Ubuntu\";"));
        close_lcd_window = new QPushButton(centralwidget);
        close_lcd_window->setObjectName(QStringLiteral("close_lcd_window"));
        close_lcd_window->setGeometry(QRect(90, 320, 111, 51));
        close_lcd_window->setStyleSheet(QStringLiteral("font: 15pt \"Ubuntu\";"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 30, 213, 61));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("font: 15pt \"Ubuntu\";"));

        horizontalLayout->addWidget(label);

        brightness_level = new QComboBox(layoutWidget);
        brightness_level->setObjectName(QStringLiteral("brightness_level"));
        brightness_level->setStyleSheet(QStringLiteral("font: 15pt \"Ubuntu\";"));

        horizontalLayout->addWidget(brightness_level);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(220, 110, 99, 27));
        LCD_TEST->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LCD_TEST);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 320, 25));
        LCD_TEST->setMenuBar(menubar);
        statusbar = new QStatusBar(LCD_TEST);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        LCD_TEST->setStatusBar(statusbar);

        retranslateUi(LCD_TEST);

        QMetaObject::connectSlotsByName(LCD_TEST);
    } // setupUi

    void retranslateUi(QMainWindow *LCD_TEST)
    {
        LCD_TEST->setWindowTitle(QApplication::translate("LCD_TEST", "MainWindow", 0));
        color_test->setText(QApplication::translate("LCD_TEST", "Color Test", 0));
        touch_test->setText(QApplication::translate("LCD_TEST", "Touch Test", 0));
        close_lcd_window->setText(QApplication::translate("LCD_TEST", "Close", 0));
        label->setText(QApplication::translate("LCD_TEST", "Brightness Level:", 0));
        brightness_level->clear();
        brightness_level->insertItems(0, QStringList()
         << QApplication::translate("LCD_TEST", "1", 0)
         << QApplication::translate("LCD_TEST", "2", 0)
         << QApplication::translate("LCD_TEST", "3", 0)
         << QApplication::translate("LCD_TEST", "4", 0)
         << QApplication::translate("LCD_TEST", "5", 0)
         << QApplication::translate("LCD_TEST", "6", 0)
         << QApplication::translate("LCD_TEST", "7", 0)
         << QApplication::translate("LCD_TEST", "8", 0)
         << QApplication::translate("LCD_TEST", "9", 0)
         << QApplication::translate("LCD_TEST", "10", 0)
         << QApplication::translate("LCD_TEST", "11", 0)
         << QApplication::translate("LCD_TEST", "12", 0)
         << QApplication::translate("LCD_TEST", "13", 0)
         << QApplication::translate("LCD_TEST", "14", 0)
         << QApplication::translate("LCD_TEST", "15", 0)
         << QApplication::translate("LCD_TEST", "16", 0)
         << QApplication::translate("LCD_TEST", "17", 0)
         << QApplication::translate("LCD_TEST", "18", 0)
         << QApplication::translate("LCD_TEST", "19", 0)
         << QApplication::translate("LCD_TEST", "20", 0)
        );
        pushButton->setText(QApplication::translate("LCD_TEST", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class LCD_TEST: public Ui_LCD_TEST {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LCD_TEST_H
