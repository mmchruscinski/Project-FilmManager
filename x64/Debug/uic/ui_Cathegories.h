/********************************************************************************
** Form generated from reading UI file 'Cathegories.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CATHEGORIES_H
#define UI_CATHEGORIES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CathegoriesClass
{
public:
    QTableView *tableView;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *CathegoriesClass)
    {
        if (CathegoriesClass->objectName().isEmpty())
            CathegoriesClass->setObjectName("CathegoriesClass");
        CathegoriesClass->resize(543, 420);
        tableView = new QTableView(CathegoriesClass);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(20, 20, 301, 381));
        layoutWidget = new QWidget(CathegoriesClass);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(331, 22, 201, 121));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");

        verticalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);


        retranslateUi(CathegoriesClass);
        QObject::connect(pushButton, SIGNAL(clicked()), CathegoriesClass, SLOT(addCat()));

        QMetaObject::connectSlotsByName(CathegoriesClass);
    } // setupUi

    void retranslateUi(QWidget *CathegoriesClass)
    {
        CathegoriesClass->setWindowTitle(QCoreApplication::translate("CathegoriesClass", "Cathegories", nullptr));
        pushButton->setText(QCoreApplication::translate("CathegoriesClass", "Dodaj kategori\304\231", nullptr));
        pushButton_2->setText(QCoreApplication::translate("CathegoriesClass", "Usu\305\204 kategori\304\231", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CathegoriesClass: public Ui_CathegoriesClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CATHEGORIES_H
