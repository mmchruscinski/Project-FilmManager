/********************************************************************************
** Form generated from reading UI file 'AddWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDWINDOW_H
#define UI_ADDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddWindowClass
{
public:

    void setupUi(QWidget *AddWindowClass)
    {
        if (AddWindowClass->objectName().isEmpty())
            AddWindowClass->setObjectName("AddWindowClass");
        AddWindowClass->resize(468, 529);

        retranslateUi(AddWindowClass);

        QMetaObject::connectSlotsByName(AddWindowClass);
    } // setupUi

    void retranslateUi(QWidget *AddWindowClass)
    {
        AddWindowClass->setWindowTitle(QCoreApplication::translate("AddWindowClass", "AddWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddWindowClass: public Ui_AddWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDWINDOW_H
