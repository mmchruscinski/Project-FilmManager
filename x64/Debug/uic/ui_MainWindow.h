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
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
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
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QListView *listView;

    void setupUi(QWidget *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName("MainWindowClass");
        MainWindowClass->resize(1011, 828);
        pushButton = new QPushButton(MainWindowClass);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(780, 370, 211, 41));
        tableView = new QTableView(MainWindowClass);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(30, 70, 731, 731));
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        pushButton_2 = new QPushButton(MainWindowClass);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(780, 470, 211, 41));
        pushButton_3 = new QPushButton(MainWindowClass);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(780, 420, 211, 41));
        pushButton_4 = new QPushButton(MainWindowClass);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(780, 520, 211, 41));
        pushButton_5 = new QPushButton(MainWindowClass);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(780, 570, 211, 41));
        pushButton_6 = new QPushButton(MainWindowClass);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(780, 620, 211, 41));
        pushButton_7 = new QPushButton(MainWindowClass);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(780, 750, 211, 41));
        label = new QLabel(MainWindowClass);
        label->setObjectName("label");
        label->setGeometry(QRect(880, 70, 49, 16));
        widget = new QWidget(MainWindowClass);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(780, 90, 101, 216));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        listView = new QListView(widget);
        listView->setObjectName("listView");

        verticalLayout->addWidget(listView);


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
        pushButton_6->setText(QCoreApplication::translate("MainWindowClass", "Serie / sagi", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindowClass", "Wyjd\305\272", nullptr));
        label->setText(QCoreApplication::translate("MainWindowClass", "Statystyki", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindowClass", "Obejrzenia", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
