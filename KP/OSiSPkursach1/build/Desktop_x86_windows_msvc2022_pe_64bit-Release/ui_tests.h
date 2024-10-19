/********************************************************************************
** Form generated from reading UI file 'tests.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTS_H
#define UI_TESTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Tests
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Tests)
    {
        if (Tests->objectName().isEmpty())
            Tests->setObjectName("Tests");
        Tests->resize(400, 300);
        label = new QLabel(Tests);
        label->setObjectName("label");
        label->setGeometry(QRect(-190, -10, 761, 81));
        QFont font;
        font.setPointSize(28);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        groupBox = new QGroupBox(Tests);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(50, 60, 291, 231));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);


        retranslateUi(Tests);

        QMetaObject::connectSlotsByName(Tests);
    } // setupUi

    void retranslateUi(QDialog *Tests)
    {
        Tests->setWindowTitle(QCoreApplication::translate("Tests", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Tests", "school subjects", nullptr));
        groupBox->setTitle(QString());
        pushButton->setText(QCoreApplication::translate("Tests", "Geography", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Tests", "Math", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tests: public Ui_Tests {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTS_H
