/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName("MainWindowClass");
        MainWindowClass->resize(600, 400);
        pushButton = new QPushButton(MainWindowClass);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(410, 30, 121, 41));

        retranslateUi(MainWindowClass);
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindowClass, SLOT(addWindow()));

        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QWidget *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QCoreApplication::translate("MainWindowClass", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindowClass", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
