/********************************************************************************
** Form generated from reading UI file 'autorization.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTORIZATION_H
#define UI_AUTORIZATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Autorization
{
public:
    QLabel *label;
    QGroupBox *groupBox_2;
    QLabel *AutorizationText;
    QGroupBox *LoginGroupBox;
    QVBoxLayout *verticalLayout;
    QLabel *loginText;
    QLineEdit *Login;
    QLabel *passwordText;
    QLineEdit *Password;
    QPushButton *Enter;
    QPushButton *RegButton;
    QPushButton *Test;

    void setupUi(QDialog *Autorization)
    {
        if (Autorization->objectName().isEmpty())
            Autorization->setObjectName("Autorization");
        Autorization->resize(800, 600);
        label = new QLabel(Autorization);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 781, 81));
        QFont font;
        font.setFamilies({QString::fromUtf8("Goudy Old Style")});
        font.setPointSize(20);
        font.setBold(false);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        groupBox_2 = new QGroupBox(Autorization);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(190, 190, 441, 271));
        groupBox_2->setFlat(false);
        AutorizationText = new QLabel(groupBox_2);
        AutorizationText->setObjectName("AutorizationText");
        AutorizationText->setGeometry(QRect(14, 24, 92, 20));
        LoginGroupBox = new QGroupBox(groupBox_2);
        LoginGroupBox->setObjectName("LoginGroupBox");
        LoginGroupBox->setGeometry(QRect(14, 51, 413, 170));
        LoginGroupBox->setFlat(false);
        verticalLayout = new QVBoxLayout(LoginGroupBox);
        verticalLayout->setObjectName("verticalLayout");
        loginText = new QLabel(LoginGroupBox);
        loginText->setObjectName("loginText");

        verticalLayout->addWidget(loginText);

        Login = new QLineEdit(LoginGroupBox);
        Login->setObjectName("Login");

        verticalLayout->addWidget(Login);

        passwordText = new QLabel(LoginGroupBox);
        passwordText->setObjectName("passwordText");

        verticalLayout->addWidget(passwordText);

        Password = new QLineEdit(LoginGroupBox);
        Password->setObjectName("Password");

        verticalLayout->addWidget(Password);

        Enter = new QPushButton(LoginGroupBox);
        Enter->setObjectName("Enter");

        verticalLayout->addWidget(Enter);

        RegButton = new QPushButton(groupBox_2);
        RegButton->setObjectName("RegButton");
        RegButton->setGeometry(QRect(290, 230, 141, 31));
        Test = new QPushButton(Autorization);
        Test->setObjectName("Test");
        Test->setGeometry(QRect(60, 500, 83, 29));

        retranslateUi(Autorization);

        QMetaObject::connectSlotsByName(Autorization);
    } // setupUi

    void retranslateUi(QDialog *Autorization)
    {
        Autorization->setWindowTitle(QCoreApplication::translate("Autorization", "Autorization", nullptr));
        label->setText(QCoreApplication::translate("Autorization", "\320\222\321\205\320\276\320\264 \320\262 \321\201\320\270\321\201\321\202\320\265\320\274\321\203 \n"
" \"\320\241\320\270\321\201\321\202\320\265\320\274\320\260 \320\276\320\275\320\273\320\260\320\271\320\275-\321\202\320\265\321\201\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217 \320\270 \320\276\321\206\320\265\320\275\320\272\320\270 \320\267\320\275\320\260\320\275\320\270\320\271\"", nullptr));
        groupBox_2->setTitle(QString());
        AutorizationText->setText(QCoreApplication::translate("Autorization", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
        LoginGroupBox->setTitle(QString());
        loginText->setText(QCoreApplication::translate("Autorization", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        passwordText->setText(QCoreApplication::translate("Autorization", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        Enter->setText(QCoreApplication::translate("Autorization", "\320\222\321\205\320\276\320\264", nullptr));
        RegButton->setText(QCoreApplication::translate("Autorization", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\260\320\272\320\272\320\260\321\203\320\275\321\202", nullptr));
        Test->setText(QCoreApplication::translate("Autorization", "Test", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Autorization: public Ui_Autorization {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTORIZATION_H
