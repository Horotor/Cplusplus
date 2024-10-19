/********************************************************************************
** Form generated from reading UI file 'mathquestions.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATHQUESTIONS_H
#define UI_MATHQUESTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MathQuestions
{
public:
    QLabel *label;
    QPushButton *Question1Btn;
    QPushButton *Question2Btn;
    QPushButton *Question3Btn;
    QPushButton *Question4Btn;
    QPushButton *Result;

    void setupUi(QDialog *MathQuestions)
    {
        if (MathQuestions->objectName().isEmpty())
            MathQuestions->setObjectName("MathQuestions");
        MathQuestions->resize(400, 600);
        label = new QLabel(MathQuestions);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 371, 81));
        QFont font;
        font.setPointSize(17);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        Question1Btn = new QPushButton(MathQuestions);
        Question1Btn->setObjectName("Question1Btn");
        Question1Btn->setGeometry(QRect(20, 150, 351, 31));
        Question2Btn = new QPushButton(MathQuestions);
        Question2Btn->setObjectName("Question2Btn");
        Question2Btn->setGeometry(QRect(20, 190, 351, 31));
        Question3Btn = new QPushButton(MathQuestions);
        Question3Btn->setObjectName("Question3Btn");
        Question3Btn->setGeometry(QRect(20, 230, 351, 31));
        Question4Btn = new QPushButton(MathQuestions);
        Question4Btn->setObjectName("Question4Btn");
        Question4Btn->setGeometry(QRect(20, 270, 351, 31));
        Result = new QPushButton(MathQuestions);
        Result->setObjectName("Result");
        Result->setGeometry(QRect(90, 460, 201, 81));

        retranslateUi(MathQuestions);

        QMetaObject::connectSlotsByName(MathQuestions);
    } // setupUi

    void retranslateUi(QDialog *MathQuestions)
    {
        MathQuestions->setWindowTitle(QCoreApplication::translate("MathQuestions", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("MathQuestions", "List of questions", nullptr));
        Question1Btn->setText(QCoreApplication::translate("MathQuestions", "Question 1", nullptr));
        Question2Btn->setText(QCoreApplication::translate("MathQuestions", "Question 2", nullptr));
        Question3Btn->setText(QCoreApplication::translate("MathQuestions", "Question 3", nullptr));
        Question4Btn->setText(QCoreApplication::translate("MathQuestions", "Question 4", nullptr));
        Result->setText(QCoreApplication::translate("MathQuestions", "Result", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MathQuestions: public Ui_MathQuestions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATHQUESTIONS_H
