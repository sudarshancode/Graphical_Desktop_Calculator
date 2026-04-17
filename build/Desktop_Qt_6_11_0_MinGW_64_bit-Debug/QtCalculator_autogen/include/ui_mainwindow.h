/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_sub;
    QPushButton *pushButton_7;
    QPushButton *pushButton_1;
    QPushButton *pushButton_decimal;
    QPushButton *pushButton_mul;
    QPushButton *pushButton_add;
    QPushButton *pushButton_0;
    QPushButton *pushButton_plus_minus;
    QPushButton *pushButton_4;
    QPushButton *pushButton_clear_all;
    QPushButton *pushButton_percent;
    QPushButton *pushButton_8;
    QPushButton *pushButton_5;
    QPushButton *pushButton_division;
    QPushButton *pushButton_3;
    QPushButton *pushButton_9;
    QPushButton *pushButton_result;
    QPushButton *pushButton_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(483, 457);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("qproperty-alignment:' AlignVCenter | AlignRight';\n"
"font: 700 18pt \"Segoe UI\";\n"
" border: 1px solid gray;\n"
"background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(label);


        verticalLayout_2->addLayout(verticalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:#d6d6d6;;\n"
"    color: white;\n"
"    font-size: 18px;\n"
"    border-radius: 10px;\n"
"    padding: 10px;\n"
"	border: 1px solid #bfbfbf;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #c9c9c9;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:  #b3b3b3;\n"
"}"));

        gridLayout->addWidget(pushButton_2, 3, 1, 1, 1);

        pushButton_clear = new QPushButton(centralwidget);
        pushButton_clear->setObjectName("pushButton_clear");
        pushButton_clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #a5b53e;\n"
"    color: white;\n"
"    font-size: 18px;\n"
"    border-radius: 10px;\n"
"    padding: 10px;\n"
"	border: 1px solid #c9ccb8\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color:#6b7526;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:  #4c5415;\n"
"}"));

        gridLayout->addWidget(pushButton_clear, 0, 2, 1, 1);

        pushButton_sub = new QPushButton(centralwidget);
        pushButton_sub->setObjectName("pushButton_sub");
        pushButton_sub->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #a5b53e;\n"
"    color: white;\n"
"    font-size: 18px;\n"
"    border-radius: 10px;\n"
"    padding: 10px;\n"
"	border: 1px solid #c9ccb8\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color:#6b7526;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:  #4c5415;\n"
"}"));

        gridLayout->addWidget(pushButton_sub, 2, 3, 1, 1);

        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:#d6d6d6;;\n"
"    color: white;\n"
"    font-size: 18px;\n"
"    border-radius: 10px;\n"
"    padding: 10px;\n"
"	border: 1px solid #bfbfbf;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #c9c9c9;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:  #b3b3b3;\n"
"}"));

        gridLayout->addWidget(pushButton_7, 1, 0, 1, 1);

        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName("pushButton_1");
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:#d6d6d6;;\n"
"    color: white;\n"
"    font-size: 18px;\n"
"    border-radius: 10px;\n"
"    padding: 10px;\n"
"	border: 1px solid #bfbfbf;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #c9c9c9;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:  #b3b3b3;\n"
"}"));

        gridLayout->addWidget(pushButton_1, 3, 0, 1, 1);

        pushButton_decimal = new QPushButton(centralwidget);
        pushButton_decimal->setObjectName("pushButton_decimal");
        pushButton_decimal->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:#d6d6d6;;\n"
"    color: white;\n"
"    font-size: 18px;\n"
"    border-radius: 10px;\n"
"    padding: 10px;\n"
"	border: 1px solid #bfbfbf;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #c9c9c9;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:  #b3b3b3;\n"
"}"));

        gridLayout->addWidget(pushButton_decimal, 4, 2, 1, 1);

        pushButton_mul = new QPushButton(centralwidget);
        pushButton_mul->setObjectName("pushButton_mul");
        pushButton_mul->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #a5b53e;\n"
"    color: white;\n"
"    font-size: 18px;\n"
"    border-radius: 10px;\n"
"    padding: 10px;\n"
"	border: 1px solid #c9ccb8\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color:#6b7526;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:  #4c5415;\n"
"}"));

        gridLayout->addWidget(pushButton_mul, 1, 3, 1, 1);

        pushButton_add = new QPushButton(centralwidget);
        pushButton_add->setObjectName("pushButton_add");
        pushButton_add->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #a5b53e;\n"
"    color: white;\n"
"    font-size: 18px;\n"
"    border-radius: 10px;\n"
"    padding: 10px;\n"
"	border: 1px solid #c9ccb8\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color:#6b7526;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:  #4c5415;\n"
"}"));

        gridLayout->addWidget(pushButton_add, 3, 3, 1, 1);

        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName("pushButton_0");
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:#d6d6d6;;\n"
"    color: white;\n"
"    font-size: 18px;\n"
"    border-radius: 10px;\n"
"    padding: 10px;\n"
"	border: 1px solid #bfbfbf;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #c9c9c9;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:  #b3b3b3;\n"
"}"));

        gridLayout->addWidget(pushButton_0, 4, 1, 1, 1);

        pushButton_plus_minus = new QPushButton(centralwidget);
        pushButton_plus_minus->setObjectName("pushButton_plus_minus");
        pushButton_plus_minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:#d6d6d6;;\n"
"    color: white;\n"
"    font-size: 18px;\n"
"    border-radius: 10px;\n"
"    padding: 10px;\n"
"	border: 1px solid #bfbfbf;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #c9c9c9;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:  #b3b3b3;\n"
"}"));

        gridLayout->addWidget(pushButton_plus_minus, 4, 0, 1, 1);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:#d6d6d6;;\n"
"    color: white;\n"
"    font-size: 18px;\n"
"    border-radius: 10px;\n"
"    padding: 10px;\n"
"	border: 1px solid #bfbfbf;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #c9c9c9;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:  #b3b3b3;\n"
"}"));

        gridLayout->addWidget(pushButton_4, 2, 0, 1, 1);

        pushButton_clear_all = new QPushButton(centralwidget);
        pushButton_clear_all->setObjectName("pushButton_clear_all");
        pushButton_clear_all->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #a5b53e;\n"
"    color: white;\n"
"    font-size: 18px;\n"
"    border-radius: 10px;\n"
"    padding: 10px;\n"
"	border: 1px solid #c9ccb8\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color:#6b7526;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:  #4c5415;\n"
"}"));

        gridLayout->addWidget(pushButton_clear_all, 0, 1, 1, 1);

        pushButton_percent = new QPushButton(centralwidget);
        pushButton_percent->setObjectName("pushButton_percent");
        pushButton_percent->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #a5b53e;\n"
"    color: white;\n"
"    font-size: 18px;\n"
"    border-radius: 10px;\n"
"    padding: 10px;\n"
"	border: 1px solid #c9ccb8\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color:#6b7526;\n"
"}\n"
"\n"
"QPushButton#pushButton_6:pressed {\n"
"    background-color:  #4c5415;\n"
"}"));

        gridLayout->addWidget(pushButton_percent, 0, 0, 1, 1);

        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:#d6d6d6;;\n"
"    color: white;\n"
"    font-size: 18px;\n"
"    border-radius: 10px;\n"
"    padding: 10px;\n"
"	border: 1px solid #bfbfbf;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #c9c9c9;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:  #b3b3b3;\n"
"}"));

        gridLayout->addWidget(pushButton_8, 1, 1, 1, 1);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:#d6d6d6;;\n"
"    color: white;\n"
"    font-size: 18px;\n"
"    border-radius: 10px;\n"
"    padding: 10px;\n"
"	border: 1px solid #bfbfbf;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #c9c9c9;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:  #b3b3b3;\n"
"}"));

        gridLayout->addWidget(pushButton_5, 2, 1, 1, 1);

        pushButton_division = new QPushButton(centralwidget);
        pushButton_division->setObjectName("pushButton_division");
        pushButton_division->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #a5b53e;\n"
"    color: white;\n"
"    font-size: 18px;\n"
"    border-radius: 10px;\n"
"    padding: 10px;\n"
"	border: 1px solid #c9ccb8\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color:#6b7526;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:  #4c5415;\n"
"}"));

        gridLayout->addWidget(pushButton_division, 0, 3, 1, 1);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:#d6d6d6;;\n"
"    color: white;\n"
"    font-size: 18px;\n"
"    border-radius: 10px;\n"
"    padding: 10px;\n"
"	border: 1px solid #bfbfbf;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #c9c9c9;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:  #b3b3b3;\n"
"}"));

        gridLayout->addWidget(pushButton_3, 3, 2, 1, 1);

        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:#d6d6d6;;\n"
"    color: white;\n"
"    font-size: 18px;\n"
"    border-radius: 10px;\n"
"    padding: 10px;\n"
"	border: 1px solid #bfbfbf;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #c9c9c9;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:  #b3b3b3;\n"
"}"));

        gridLayout->addWidget(pushButton_9, 1, 2, 1, 1);

        pushButton_result = new QPushButton(centralwidget);
        pushButton_result->setObjectName("pushButton_result");
        pushButton_result->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_result {\n"
"    background-color:#399ced;\n"
"    color: white;\n"
"    font-size: 18px;\n"
"    border-radius: 10px;\n"
"    padding: 10px;\n"
"	border: 1px solid #bfbfbf;\n"
"}\n"
"\n"
"QPushButton#pushButton_result:hover {\n"
"    background-color: #c9c9c9;\n"
"}\n"
"\n"
"QPushButton#pushButton_result:pressed {\n"
"    background-color:  #b3b3b3;\n"
"}"));

        gridLayout->addWidget(pushButton_result, 4, 3, 1, 1);

        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:#d6d6d6;;\n"
"    color: white;\n"
"    font-size: 18px;\n"
"    border-radius: 10px;\n"
"    padding: 10px;\n"
"	border: 1px solid #bfbfbf;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #c9c9c9;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:  #b3b3b3;\n"
"}"));

        gridLayout->addWidget(pushButton_6, 2, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        verticalLayout_2->setStretch(0, 2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 483, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        pushButton_sub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_decimal->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_mul->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        pushButton_add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_plus_minus->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_clear_all->setText(QCoreApplication::translate("MainWindow", "CE", nullptr));
        pushButton_percent->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_division->setText(QCoreApplication::translate("MainWindow", "\303\267", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_result->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
