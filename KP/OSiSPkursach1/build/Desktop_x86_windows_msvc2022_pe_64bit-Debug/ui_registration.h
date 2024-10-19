/********************************************************************************
** Form generated from reading UI file 'registration.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATION_H
#define UI_REGISTRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Registration
{
public:
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_4;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *Registration)
    {
        if (Registration->objectName().isEmpty())
            Registration->setObjectName("Registration");
        Registration->resize(400, 300);
        groupBox = new QGroupBox(Registration);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 0, 371, 301));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName("lineEdit_3");

        gridLayout->addWidget(lineEdit_3, 5, 0, 1, 1);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 1, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName("lineEdit_4");

        gridLayout->addWidget(lineEdit_4, 7, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 6, 0, 1, 1);

        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName("lineEdit_2");

        gridLayout->addWidget(lineEdit_2, 3, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 8, 0, 1, 1);


        retranslateUi(Registration);

        QMetaObject::connectSlotsByName(Registration);
    } // setupUi

    void retranslateUi(QDialog *Registration)
    {
        Registration->setWindowTitle(QCoreApplication::translate("Registration", "Registration", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Registration", "Registration", nullptr));
        label_2->setText(QCoreApplication::translate("Registration", "Email", nullptr));
        label_4->setText(QCoreApplication::translate("Registration", "Confirm Password", nullptr));
        label_3->setText(QCoreApplication::translate("Registration", "Password", nullptr));
        label->setText(QCoreApplication::translate("Registration", "Login", nullptr));
        pushButton->setText(QCoreApplication::translate("Registration", "Registration", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Registration: public Ui_Registration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATION_H
