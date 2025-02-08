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
#include <QtWidgets/QLineEdit>
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
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QListView *listView;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *line_date;
    QPushButton *button_adddate;
    QPushButton *button_deldate;

    void setupUi(QWidget *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName("MainWindowClass");
        MainWindowClass->resize(1011, 828);
        pushButton = new QPushButton(MainWindowClass);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(780, 410, 211, 41));
        tableView = new QTableView(MainWindowClass);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(30, 70, 731, 731));
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        pushButton_2 = new QPushButton(MainWindowClass);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(780, 510, 211, 41));
        pushButton_3 = new QPushButton(MainWindowClass);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(780, 460, 211, 41));
        pushButton_4 = new QPushButton(MainWindowClass);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(780, 560, 211, 41));
        pushButton_5 = new QPushButton(MainWindowClass);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(780, 610, 211, 41));
        pushButton_6 = new QPushButton(MainWindowClass);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(780, 660, 211, 41));
        pushButton_7 = new QPushButton(MainWindowClass);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(780, 750, 211, 41));
        label = new QLabel(MainWindowClass);
        label->setObjectName("label");
        label->setGeometry(QRect(880, 70, 49, 16));
        layoutWidget = new QWidget(MainWindowClass);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(780, 90, 101, 216));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        listView = new QListView(layoutWidget);
        listView->setObjectName("listView");

        verticalLayout->addWidget(listView);

        widget = new QWidget(MainWindowClass);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(890, 90, 110, 86));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        line_date = new QLineEdit(widget);
        line_date->setObjectName("line_date");

        verticalLayout_2->addWidget(line_date);

        button_adddate = new QPushButton(widget);
        button_adddate->setObjectName("button_adddate");

        verticalLayout_2->addWidget(button_adddate);

        button_deldate = new QPushButton(widget);
        button_deldate->setObjectName("button_deldate");

        verticalLayout_2->addWidget(button_deldate);


        retranslateUi(MainWindowClass);
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindowClass, SLOT(addWindow()));
        QObject::connect(tableView, SIGNAL(clicked(QModelIndex)), MainWindowClass, SLOT(selectId(QModelIndex)));
        QObject::connect(pushButton_2, SIGNAL(clicked()), MainWindowClass, SLOT(deleteFilm()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), MainWindowClass, SLOT(catWindow()));
        QObject::connect(button_adddate, SIGNAL(clicked()), MainWindowClass, SLOT(addWatching()));

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
        button_adddate->setText(QCoreApplication::translate("MainWindowClass", "Dodaj obejrzenie", nullptr));
        button_deldate->setText(QCoreApplication::translate("MainWindowClass", "Usu\305\204 obejrzenie", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
