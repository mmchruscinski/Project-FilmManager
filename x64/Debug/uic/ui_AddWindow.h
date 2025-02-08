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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddWindowClass
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *text_title;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *text_director;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *text_dates;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *text_series;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QSpinBox *spinBox;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QComboBox *comboBox_2;

    void setupUi(QWidget *AddWindowClass)
    {
        if (AddWindowClass->objectName().isEmpty())
            AddWindowClass->setObjectName("AddWindowClass");
        AddWindowClass->resize(453, 596);
        layoutWidget = new QWidget(AddWindowClass);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(60, 450, 341, 51));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");

        horizontalLayout_5->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout_5->addWidget(pushButton_2);

        layoutWidget1 = new QWidget(AddWindowClass);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(60, 52, 341, 331));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(layoutWidget1);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        text_title = new QLineEdit(layoutWidget1);
        text_title->setObjectName("text_title");

        horizontalLayout->addWidget(text_title);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        text_director = new QLineEdit(layoutWidget1);
        text_director->setObjectName("text_director");

        horizontalLayout_2->addWidget(text_director);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        comboBox = new QComboBox(layoutWidget1);
        comboBox->setObjectName("comboBox");

        horizontalLayout_3->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        text_dates = new QLineEdit(layoutWidget1);
        text_dates->setObjectName("text_dates");

        horizontalLayout_4->addWidget(text_dates);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName("label_6");

        horizontalLayout_6->addWidget(label_6);

        text_series = new QLineEdit(layoutWidget1);
        text_series->setObjectName("text_series");

        horizontalLayout_6->addWidget(text_series);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName("label_7");

        horizontalLayout_8->addWidget(label_7);

        spinBox = new QSpinBox(layoutWidget1);
        spinBox->setObjectName("spinBox");

        horizontalLayout_8->addWidget(spinBox);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName("label_5");

        horizontalLayout_7->addWidget(label_5);

        comboBox_2 = new QComboBox(layoutWidget1);
        comboBox_2->setObjectName("comboBox_2");

        horizontalLayout_7->addWidget(comboBox_2);


        verticalLayout->addLayout(horizontalLayout_7);


        retranslateUi(AddWindowClass);
        QObject::connect(pushButton_2, &QPushButton::clicked, AddWindowClass, qOverload<>(&QWidget::close));
        QObject::connect(pushButton, SIGNAL(clicked()), AddWindowClass, SLOT(acceptAddition()));

        QMetaObject::connectSlotsByName(AddWindowClass);
    } // setupUi

    void retranslateUi(QWidget *AddWindowClass)
    {
        AddWindowClass->setWindowTitle(QCoreApplication::translate("AddWindowClass", "AddWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("AddWindowClass", "Ok", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AddWindowClass", "Anuluj", nullptr));
        label->setText(QCoreApplication::translate("AddWindowClass", "Tytu\305\202:", nullptr));
        label_2->setText(QCoreApplication::translate("AddWindowClass", "Re\305\274yser:", nullptr));
        label_3->setText(QCoreApplication::translate("AddWindowClass", "Kategoria:", nullptr));
        label_4->setText(QCoreApplication::translate("AddWindowClass", "Data Obejrzenia:", nullptr));
        label_6->setText(QCoreApplication::translate("AddWindowClass", "Seria:", nullptr));
        label_7->setText(QCoreApplication::translate("AddWindowClass", "Rok powstania:", nullptr));
        label_5->setText(QCoreApplication::translate("AddWindowClass", "Ocena:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddWindowClass: public Ui_AddWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDWINDOW_H
