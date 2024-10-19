/********************************************************************************
** Form generated from reading UI file 'mathquest1.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATHQUEST1_H
#define UI_MATHQUEST1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MathQuest1
{
public:
    QLabel *QuestionLabel;
    QPushButton *Answer1Button;
    QPushButton *Answer2Button;
    QPushButton *Answer3Button;
    QPushButton *Answer4Button;

    void setupUi(QDialog *MathQuest1)
    {
        if (MathQuest1->objectName().isEmpty())
            MathQuest1->setObjectName("MathQuest1");
        MathQuest1->resize(400, 300);
        QuestionLabel = new QLabel(MathQuest1);
        QuestionLabel->setObjectName("QuestionLabel");
        QuestionLabel->setGeometry(QRect(10, 10, 371, 51));
        QuestionLabel->setAlignment(Qt::AlignCenter);
        Answer1Button = new QPushButton(MathQuest1);
        Answer1Button->setObjectName("Answer1Button");
        Answer1Button->setGeometry(QRect(10, 110, 141, 51));
        Answer2Button = new QPushButton(MathQuest1);
        Answer2Button->setObjectName("Answer2Button");
        Answer2Button->setGeometry(QRect(10, 188, 141, 51));
        Answer3Button = new QPushButton(MathQuest1);
        Answer3Button->setObjectName("Answer3Button");
        Answer3Button->setGeometry(QRect(250, 110, 131, 51));
        Answer4Button = new QPushButton(MathQuest1);
        Answer4Button->setObjectName("Answer4Button");
        Answer4Button->setGeometry(QRect(250, 190, 131, 51));

        retranslateUi(MathQuest1);

        QMetaObject::connectSlotsByName(MathQuest1);
    } // setupUi

    void retranslateUi(QDialog *MathQuest1)
    {
        MathQuest1->setWindowTitle(QCoreApplication::translate("MathQuest1", "Dialog", nullptr));
        QuestionLabel->setText(QCoreApplication::translate("MathQuest1", "TextLabel", nullptr));
        Answer1Button->setText(QCoreApplication::translate("MathQuest1", "PushButton", nullptr));
        Answer2Button->setText(QCoreApplication::translate("MathQuest1", "PushButton", nullptr));
        Answer3Button->setText(QCoreApplication::translate("MathQuest1", "PushButton", nullptr));
        Answer4Button->setText(QCoreApplication::translate("MathQuest1", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MathQuest1: public Ui_MathQuest1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATHQUEST1_H
