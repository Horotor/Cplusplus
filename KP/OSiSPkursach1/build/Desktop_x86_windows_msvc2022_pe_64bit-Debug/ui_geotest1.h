/********************************************************************************
** Form generated from reading UI file 'geotest1.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GEOTEST1_H
#define UI_GEOTEST1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GeoTest1
{
public:
    QLabel *QuestionLabel;
    QLabel *Answer1;
    QLabel *Answer2;
    QLabel *Answer3;
    QLabel *Answer4;
    QLineEdit *AnswerLineEdit;
    QPushButton *AnswerButton;

    void setupUi(QDialog *GeoTest1)
    {
        if (GeoTest1->objectName().isEmpty())
            GeoTest1->setObjectName("GeoTest1");
        GeoTest1->resize(400, 300);
        QuestionLabel = new QLabel(GeoTest1);
        QuestionLabel->setObjectName("QuestionLabel");
        QuestionLabel->setGeometry(QRect(10, 9, 381, 51));
        QuestionLabel->setAlignment(Qt::AlignCenter);
        Answer1 = new QLabel(GeoTest1);
        Answer1->setObjectName("Answer1");
        Answer1->setGeometry(QRect(50, 110, 63, 20));
        Answer2 = new QLabel(GeoTest1);
        Answer2->setObjectName("Answer2");
        Answer2->setGeometry(QRect(260, 110, 63, 20));
        Answer3 = new QLabel(GeoTest1);
        Answer3->setObjectName("Answer3");
        Answer3->setGeometry(QRect(50, 170, 63, 20));
        Answer4 = new QLabel(GeoTest1);
        Answer4->setObjectName("Answer4");
        Answer4->setGeometry(QRect(270, 170, 63, 20));
        AnswerLineEdit = new QLineEdit(GeoTest1);
        AnswerLineEdit->setObjectName("AnswerLineEdit");
        AnswerLineEdit->setGeometry(QRect(130, 200, 113, 28));
        AnswerButton = new QPushButton(GeoTest1);
        AnswerButton->setObjectName("AnswerButton");
        AnswerButton->setGeometry(QRect(140, 250, 83, 29));

        retranslateUi(GeoTest1);

        QMetaObject::connectSlotsByName(GeoTest1);
    } // setupUi

    void retranslateUi(QDialog *GeoTest1)
    {
        GeoTest1->setWindowTitle(QCoreApplication::translate("GeoTest1", "Dialog", nullptr));
        QuestionLabel->setText(QCoreApplication::translate("GeoTest1", "TextLabel", nullptr));
        Answer1->setText(QCoreApplication::translate("GeoTest1", "TextLabel", nullptr));
        Answer2->setText(QCoreApplication::translate("GeoTest1", "TextLabel", nullptr));
        Answer3->setText(QCoreApplication::translate("GeoTest1", "TextLabel", nullptr));
        Answer4->setText(QCoreApplication::translate("GeoTest1", "TextLabel", nullptr));
        AnswerButton->setText(QCoreApplication::translate("GeoTest1", "Answer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GeoTest1: public Ui_GeoTest1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GEOTEST1_H
