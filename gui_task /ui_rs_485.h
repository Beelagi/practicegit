/********************************************************************************
** Form generated from reading UI file 'rs_485.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RS_485_H
#define UI_RS_485_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RS_485
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *init_rs485;
    QLineEdit *rs485_lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *write_button;
    QPushButton *read_button;
    QTextEdit *rs485_textEdit;
    QGridLayout *gridLayout;
    QPushButton *pushButton_4;
    QPushButton *pushButton_19;
    QPushButton *pushButton_26;
    QPushButton *pushButton_14;
    QPushButton *pushButton;
    QPushButton *pushButton_36;
    QPushButton *pushButton_20;
    QPushButton *pushButton_24;
    QPushButton *pushButton_17;
    QPushButton *pushButton_12;
    QPushButton *pushButton_34;
    QPushButton *pushButton_7;
    QPushButton *pushButton_23;
    QPushButton *pushButton_29;
    QPushButton *pushButton_33;
    QPushButton *pushButton_11;
    QPushButton *pushButton_9;
    QPushButton *pushButton_15;
    QPushButton *pushButton_30;
    QPushButton *pushButton_35;
    QPushButton *pushButton_10;
    QPushButton *pushButton_31;
    QPushButton *pushButton_32;
    QPushButton *pushButton_3;
    QPushButton *pushButton_28;
    QPushButton *pushButton_18;
    QPushButton *pushButton_27;
    QPushButton *pushButton_2;
    QPushButton *pushButton_21;
    QPushButton *pushButton_16;
    QPushButton *pushButton_13;
    QPushButton *pushButton_5;
    QPushButton *pushButton_22;
    QPushButton *pushButton_8;
    QPushButton *pushButton_25;
    QPushButton *pushButton_6;
    QPushButton *close_rs_485;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *RS_485)
    {
        if (RS_485->objectName().isEmpty())
            RS_485->setObjectName(QStringLiteral("RS_485"));
        RS_485->resize(320, 480);
        centralwidget = new QWidget(RS_485);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_4 = new QVBoxLayout(centralwidget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        init_rs485 = new QPushButton(centralwidget);
        init_rs485->setObjectName(QStringLiteral("init_rs485"));
        init_rs485->setStyleSheet(QStringLiteral("font: 13pt \"Ubuntu\";"));

        horizontalLayout->addWidget(init_rs485);

        rs485_lineEdit = new QLineEdit(centralwidget);
        rs485_lineEdit->setObjectName(QStringLiteral("rs485_lineEdit"));
        rs485_lineEdit->setStyleSheet(QStringLiteral("font: 13pt \"Ubuntu\";"));

        horizontalLayout->addWidget(rs485_lineEdit);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        write_button = new QPushButton(centralwidget);
        write_button->setObjectName(QStringLiteral("write_button"));
        write_button->setStyleSheet(QStringLiteral("font: 13pt \"Ubuntu\";"));

        verticalLayout->addWidget(write_button);

        read_button = new QPushButton(centralwidget);
        read_button->setObjectName(QStringLiteral("read_button"));
        read_button->setStyleSheet(QStringLiteral("font: 13pt \"Ubuntu\";"));

        verticalLayout->addWidget(read_button);


        horizontalLayout_2->addLayout(verticalLayout);

        rs485_textEdit = new QTextEdit(centralwidget);
        rs485_textEdit->setObjectName(QStringLiteral("rs485_textEdit"));
        rs485_textEdit->setStyleSheet(QStringLiteral("font: 13pt \"Ubuntu\";"));

        horizontalLayout_2->addWidget(rs485_textEdit);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setStyleSheet(QStringLiteral("font: 11pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_4, 5, 0, 1, 1);

        pushButton_19 = new QPushButton(centralwidget);
        pushButton_19->setObjectName(QStringLiteral("pushButton_19"));
        pushButton_19->setStyleSheet(QStringLiteral("font: 11pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_19, 3, 1, 1, 1);

        pushButton_26 = new QPushButton(centralwidget);
        pushButton_26->setObjectName(QStringLiteral("pushButton_26"));
        pushButton_26->setStyleSheet(QStringLiteral("font: 11pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_26, 0, 5, 1, 1);

        pushButton_14 = new QPushButton(centralwidget);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setStyleSheet(QStringLiteral("font: 11pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_14, 2, 5, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QStringLiteral("font: 11pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_36 = new QPushButton(centralwidget);
        pushButton_36->setObjectName(QStringLiteral("pushButton_36"));
        pushButton_36->setStyleSheet(QStringLiteral("font: 11pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_36, 5, 4, 1, 1);

        pushButton_20 = new QPushButton(centralwidget);
        pushButton_20->setObjectName(QStringLiteral("pushButton_20"));
        pushButton_20->setStyleSheet(QStringLiteral("font: 11pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_20, 2, 1, 1, 1);

        pushButton_24 = new QPushButton(centralwidget);
        pushButton_24->setObjectName(QStringLiteral("pushButton_24"));
        pushButton_24->setStyleSheet(QStringLiteral("font: 11pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_24, 3, 2, 1, 1);

        pushButton_17 = new QPushButton(centralwidget);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));
        pushButton_17->setStyleSheet(QStringLiteral("font: 11pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_17, 5, 1, 1, 1);

        pushButton_12 = new QPushButton(centralwidget);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setStyleSheet(QStringLiteral("font: 11pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_12, 2, 2, 1, 1);

        pushButton_34 = new QPushButton(centralwidget);
        pushButton_34->setObjectName(QStringLiteral("pushButton_34"));
        pushButton_34->setStyleSheet(QStringLiteral("font: 11pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_34, 4, 4, 1, 1);

        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setStyleSheet(QStringLiteral("font: 11pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_7, 3, 0, 1, 1);

        pushButton_23 = new QPushButton(centralwidget);
        pushButton_23->setObjectName(QStringLiteral("pushButton_23"));
        pushButton_23->setStyleSheet(QStringLiteral("font: 11pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_23, 2, 3, 1, 1);

        pushButton_29 = new QPushButton(centralwidget);
        pushButton_29->setObjectName(QStringLiteral("pushButton_29"));
        pushButton_29->setStyleSheet(QStringLiteral("font: 11pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_29, 2, 4, 1, 1);

        pushButton_33 = new QPushButton(centralwidget);
        pushButton_33->setObjectName(QStringLiteral("pushButton_33"));
        pushButton_33->setStyleSheet(QStringLiteral("font: 11pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_33, 4, 3, 1, 1);

        pushButton_11 = new QPushButton(centralwidget);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setStyleSheet(QStringLiteral("font: 11pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_11, 1, 3, 1, 1);

        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setStyleSheet(QStringLiteral("font: 11pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_9, 1, 1, 1, 1);

        pushButton_15 = new QPushButton(centralwidget);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setStyleSheet(QStringLiteral("font: 11pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_15, 1, 2, 1, 1);

        pushButton_30 = new QPushButton(centralwidget);
        pushButton_30->setObjectName(QStringLiteral("pushButton_30"));
        pushButton_30->setStyleSheet(QStringLiteral("font: 11pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_30, 5, 2, 1, 1);

        pushButton_35 = new QPushButton(centralwidget);
        pushButton_35->setObjectName(QStringLiteral("pushButton_35"));
        pushButton_35->setStyleSheet(QStringLiteral("font: 11pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_35, 3, 4, 1, 1);

        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setStyleSheet(QStringLiteral("font: 11pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_10, 4, 0, 1, 1);

        pushButton_31 = new QPushButton(centralwidget);
        pushButton_31->setObjectName(QStringLiteral("pushButton_31"));
        pushButton_31->setStyleSheet(QStringLiteral("font: 11pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_31, 5, 3, 1, 1);

        pushButton_32 = new QPushButton(centralwidget);
        pushButton_32->setObjectName(QStringLiteral("pushButton_32"));
        pushButton_32->setStyleSheet(QStringLiteral("font: 11pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_32, 4, 2, 1, 1);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setStyleSheet(QStringLiteral("font: 11pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_3, 0, 3, 1, 1);

        pushButton_28 = new QPushButton(centralwidget);
        pushButton_28->setObjectName(QStringLiteral("pushButton_28"));
        pushButton_28->setStyleSheet(QStringLiteral("font: 11pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_28, 3, 5, 1, 1);

        pushButton_18 = new QPushButton(centralwidget);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));
        pushButton_18->setStyleSheet(QStringLiteral("font: 11pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_18, 4, 1, 1, 1);

        pushButton_27 = new QPushButton(centralwidget);
        pushButton_27->setObjectName(QStringLiteral("pushButton_27"));
        pushButton_27->setStyleSheet(QStringLiteral("font: 11pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_27, 4, 5, 1, 1);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setStyleSheet(QStringLiteral("font: 11pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton_21 = new QPushButton(centralwidget);
        pushButton_21->setObjectName(QStringLiteral("pushButton_21"));
        pushButton_21->setStyleSheet(QStringLiteral("font: 11pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_21, 1, 0, 1, 1);

        pushButton_16 = new QPushButton(centralwidget);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        pushButton_16->setStyleSheet(QStringLiteral("font: 11pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_16, 1, 5, 1, 1);

        pushButton_13 = new QPushButton(centralwidget);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setStyleSheet(QStringLiteral("font: 11pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_13, 1, 4, 1, 1);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setStyleSheet(QStringLiteral("font: 11pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_5, 0, 4, 1, 1);

        pushButton_22 = new QPushButton(centralwidget);
        pushButton_22->setObjectName(QStringLiteral("pushButton_22"));
        pushButton_22->setStyleSheet(QStringLiteral("font: 11pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_22, 3, 3, 1, 1);

        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setStyleSheet(QStringLiteral("font: 11pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_8, 2, 0, 1, 1);

        pushButton_25 = new QPushButton(centralwidget);
        pushButton_25->setObjectName(QStringLiteral("pushButton_25"));
        pushButton_25->setStyleSheet(QStringLiteral("font: 11pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_25, 0, 2, 1, 1);

        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setStyleSheet(QStringLiteral("font: 11pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_6, 5, 5, 1, 1);


        verticalLayout_3->addLayout(gridLayout);


        verticalLayout_4->addLayout(verticalLayout_3);

        close_rs_485 = new QPushButton(centralwidget);
        close_rs_485->setObjectName(QStringLiteral("close_rs_485"));
        close_rs_485->setStyleSheet(QStringLiteral("font: 13pt \"Ubuntu\";"));

        verticalLayout_4->addWidget(close_rs_485);

        RS_485->setCentralWidget(centralwidget);
        menubar = new QMenuBar(RS_485);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 320, 25));
        RS_485->setMenuBar(menubar);
        statusbar = new QStatusBar(RS_485);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        RS_485->setStatusBar(statusbar);

        retranslateUi(RS_485);

        QMetaObject::connectSlotsByName(RS_485);
    } // setupUi

    void retranslateUi(QMainWindow *RS_485)
    {
        RS_485->setWindowTitle(QApplication::translate("RS_485", "MainWindow", 0));
        init_rs485->setText(QApplication::translate("RS_485", "Init", 0));
        write_button->setText(QApplication::translate("RS_485", "Write", 0));
        read_button->setText(QApplication::translate("RS_485", "Read", 0));
        pushButton_4->setText(QApplication::translate("RS_485", "5", 0));
        pushButton_19->setText(QApplication::translate("RS_485", "t", 0));
        pushButton_26->setText(QApplication::translate("RS_485", "f", 0));
        pushButton_14->setText(QApplication::translate("RS_485", "r", 0));
        pushButton->setText(QApplication::translate("RS_485", "a", 0));
        pushButton_36->setText(QApplication::translate("RS_485", "9", 0));
        pushButton_20->setText(QApplication::translate("RS_485", "n", 0));
        pushButton_24->setText(QApplication::translate("RS_485", "u", 0));
        pushButton_17->setText(QApplication::translate("RS_485", "6", 0));
        pushButton_12->setText(QApplication::translate("RS_485", "o", 0));
        pushButton_34->setText(QApplication::translate("RS_485", "3", 0));
        pushButton_7->setText(QApplication::translate("RS_485", "s", 0));
        pushButton_23->setText(QApplication::translate("RS_485", "p", 0));
        pushButton_29->setText(QApplication::translate("RS_485", "q", 0));
        pushButton_33->setText(QApplication::translate("RS_485", "2", 0));
        pushButton_11->setText(QApplication::translate("RS_485", "j", 0));
        pushButton_9->setText(QApplication::translate("RS_485", "h", 0));
        pushButton_15->setText(QApplication::translate("RS_485", "i", 0));
        pushButton_30->setText(QApplication::translate("RS_485", "7", 0));
        pushButton_35->setText(QApplication::translate("RS_485", "w", 0));
        pushButton_10->setText(QApplication::translate("RS_485", "y", 0));
        pushButton_31->setText(QApplication::translate("RS_485", "8", 0));
        pushButton_32->setText(QApplication::translate("RS_485", "1", 0));
        pushButton_3->setText(QApplication::translate("RS_485", "d", 0));
        pushButton_28->setText(QApplication::translate("RS_485", "x", 0));
        pushButton_18->setText(QApplication::translate("RS_485", "z", 0));
        pushButton_27->setText(QApplication::translate("RS_485", "4", 0));
        pushButton_2->setText(QApplication::translate("RS_485", "b", 0));
        pushButton_21->setText(QApplication::translate("RS_485", "g", 0));
        pushButton_16->setText(QApplication::translate("RS_485", "l", 0));
        pushButton_13->setText(QApplication::translate("RS_485", "k", 0));
        pushButton_5->setText(QApplication::translate("RS_485", "e", 0));
        pushButton_22->setText(QApplication::translate("RS_485", "v", 0));
        pushButton_8->setText(QApplication::translate("RS_485", "m", 0));
        pushButton_25->setText(QApplication::translate("RS_485", "c", 0));
        pushButton_6->setText(QApplication::translate("RS_485", "Enter", 0));
        close_rs_485->setText(QApplication::translate("RS_485", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class RS_485: public Ui_RS_485 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RS_485_H
