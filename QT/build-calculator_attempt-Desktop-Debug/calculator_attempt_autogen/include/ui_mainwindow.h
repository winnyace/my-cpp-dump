/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *button1;
    QPushButton *button3;
    QPushButton *button9;
    QPushButton *button4;
    QPushButton *button0;
    QPushButton *button6;
    QPushButton *button2;
    QPushButton *button5;
    QLineEdit *lineEdit;
    QPushButton *button8;
    QPushButton *button7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(433, 293);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        button1 = new QPushButton(centralwidget);
        button1->setObjectName(QString::fromUtf8("button1"));

        gridLayout->addWidget(button1, 2, 0, 1, 1);

        button3 = new QPushButton(centralwidget);
        button3->setObjectName(QString::fromUtf8("button3"));

        gridLayout->addWidget(button3, 2, 2, 1, 1);

        button9 = new QPushButton(centralwidget);
        button9->setObjectName(QString::fromUtf8("button9"));

        gridLayout->addWidget(button9, 4, 2, 1, 1);

        button4 = new QPushButton(centralwidget);
        button4->setObjectName(QString::fromUtf8("button4"));

        gridLayout->addWidget(button4, 3, 0, 1, 1);

        button0 = new QPushButton(centralwidget);
        button0->setObjectName(QString::fromUtf8("button0"));

        gridLayout->addWidget(button0, 7, 1, 1, 1);

        button6 = new QPushButton(centralwidget);
        button6->setObjectName(QString::fromUtf8("button6"));

        gridLayout->addWidget(button6, 3, 2, 1, 1);

        button2 = new QPushButton(centralwidget);
        button2->setObjectName(QString::fromUtf8("button2"));

        gridLayout->addWidget(button2, 2, 1, 1, 1);

        button5 = new QPushButton(centralwidget);
        button5->setObjectName(QString::fromUtf8("button5"));

        gridLayout->addWidget(button5, 3, 1, 1, 1);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 3, 3, 1, 1);

        button8 = new QPushButton(centralwidget);
        button8->setObjectName(QString::fromUtf8("button8"));

        gridLayout->addWidget(button8, 4, 1, 1, 1);

        button7 = new QPushButton(centralwidget);
        button7->setObjectName(QString::fromUtf8("button7"));

        gridLayout->addWidget(button7, 4, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 433, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        button1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        button3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        button9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        button4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        button0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        button6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        button2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        button5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        button8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        button7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
