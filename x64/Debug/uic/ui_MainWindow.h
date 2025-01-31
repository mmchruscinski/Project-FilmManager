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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QPushButton *pushButton;
    QTableView *tableView;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;

    void setupUi(QWidget *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName("MainWindowClass");
        MainWindowClass->resize(1086, 687);
        pushButton = new QPushButton(MainWindowClass);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(810, 100, 211, 41));
        tableView = new QTableView(MainWindowClass);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(30, 20, 731, 641));
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        pushButton_2 = new QPushButton(MainWindowClass);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(810, 200, 211, 41));
        pushButton_3 = new QPushButton(MainWindowClass);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(810, 150, 211, 41));
        pushButton_4 = new QPushButton(MainWindowClass);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(810, 250, 211, 41));
        pushButton_5 = new QPushButton(MainWindowClass);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(810, 300, 211, 41));

        retranslateUi(MainWindowClass);
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindowClass, SLOT(addWindow()));
        QObject::connect(tableView, SIGNAL(clicked(QModelIndex)), MainWindowClass, SLOT(selectId(QModelIndex)));
        QObject::connect(pushButton_2, SIGNAL(clicked()), MainWindowClass, SLOT(deleteFilm()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), MainWindowClass, SLOT(catWindow()));

        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QWidget *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QCoreApplication::translate("MainWindowClass", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindowClass", "Dodaj", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindowClass", "Usu\305\204", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindowClass", "Edytuj", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindowClass", "Kategorie", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindowClass", "Re\305\274yserzy", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
