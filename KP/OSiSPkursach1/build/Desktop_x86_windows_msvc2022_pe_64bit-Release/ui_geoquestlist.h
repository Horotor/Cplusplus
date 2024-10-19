/********************************************************************************
** Form generated from reading UI file 'geoquestlist.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GEOQUESTLIST_H
#define UI_GEOQUESTLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GeoQuestList
{
public:
    QLabel *label;
    QPushButton *Question1Btn;
    QPushButton *Question2Btn;
    QPushButton *Question3Btn;
    QPushButton *Question4Btn;
    QPushButton *Question5Btn;
    QPushButton *Question6Btn;
    QPushButton *Question7Btn;
    QPushButton *Question8Btn;
    QPushButton *Question9Btn;
    QPushButton *Question2Btn10;
    QPushButton *ResultBtn;
    QLabel *label_2;

    void setupUi(QDialog *GeoQuestList)
    {
        if (GeoQuestList->objectName().isEmpty())
            GeoQuestList->setObjectName("GeoQuestList");
        GeoQuestList->resize(400, 600);
        label = new QLabel(GeoQuestList);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 20, 371, 81));
        QFont font;
        font.setPointSize(17);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        Question1Btn = new QPushButton(GeoQuestList);
        Question1Btn->setObjectName("Question1Btn");
        Question1Btn->setGeometry(QRect(20, 120, 351, 31));
        Question2Btn = new QPushButton(GeoQuestList);
        Question2Btn->setObjectName("Question2Btn");
        Question2Btn->setGeometry(QRect(20, 480, 351, 31));
        Question3Btn = new QPushButton(GeoQuestList);
        Question3Btn->setObjectName("Question3Btn");
        Question3Btn->setGeometry(QRect(20, 200, 351, 31));
        Question4Btn = new QPushButton(GeoQuestList);
        Question4Btn->setObjectName("Question4Btn");
        Question4Btn->setGeometry(QRect(20, 240, 351, 31));
        Question5Btn = new QPushButton(GeoQuestList);
        Question5Btn->setObjectName("Question5Btn");
        Question5Btn->setGeometry(QRect(20, 280, 351, 31));
        Question6Btn = new QPushButton(GeoQuestList);
        Question6Btn->setObjectName("Question6Btn");
        Question6Btn->setGeometry(QRect(20, 320, 351, 31));
        Question7Btn = new QPushButton(GeoQuestList);
        Question7Btn->setObjectName("Question7Btn");
        Question7Btn->setGeometry(QRect(20, 360, 351, 31));
        Question8Btn = new QPushButton(GeoQuestList);
        Question8Btn->setObjectName("Question8Btn");
        Question8Btn->setGeometry(QRect(20, 400, 351, 31));
        Question9Btn = new QPushButton(GeoQuestList);
        Question9Btn->setObjectName("Question9Btn");
        Question9Btn->setGeometry(QRect(20, 440, 351, 31));
        Question2Btn10 = new QPushButton(GeoQuestList);
        Question2Btn10->setObjectName("Question2Btn10");
        Question2Btn10->setGeometry(QRect(20, 160, 351, 31));
        ResultBtn = new QPushButton(GeoQuestList);
        ResultBtn->setObjectName("ResultBtn");
        ResultBtn->setGeometry(QRect(20, 530, 351, 51));
        label_2 = new QLabel(GeoQuestList);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(370, 170, 371, 81));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        retranslateUi(GeoQuestList);

        QMetaObject::connectSlotsByName(GeoQuestList);
    } // setupUi

    void retranslateUi(QDialog *GeoQuestList)
    {
        GeoQuestList->setWindowTitle(QCoreApplication::translate("GeoQuestList", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("GeoQuestList", "List of questions", nullptr));
        Question1Btn->setText(QCoreApplication::translate("GeoQuestList", "Question 1", nullptr));
        Question2Btn->setText(QCoreApplication::translate("GeoQuestList", "Question 10", nullptr));
        Question3Btn->setText(QCoreApplication::translate("GeoQuestList", "Question 3", nullptr));
        Question4Btn->setText(QCoreApplication::translate("GeoQuestList", "Question 4", nullptr));
        Question5Btn->setText(QCoreApplication::translate("GeoQuestList", "Question 5", nullptr));
        Question6Btn->setText(QCoreApplication::translate("GeoQuestList", "Question 6", nullptr));
        Question7Btn->setText(QCoreApplication::translate("GeoQuestList", "Question 7", nullptr));
        Question8Btn->setText(QCoreApplication::translate("GeoQuestList", "Question 8", nullptr));
        Question9Btn->setText(QCoreApplication::translate("GeoQuestList", "Question 9", nullptr));
        Question2Btn10->setText(QCoreApplication::translate("GeoQuestList", "Question 2", nullptr));
        ResultBtn->setText(QCoreApplication::translate("GeoQuestList", "Result", nullptr));
        label_2->setText(QCoreApplication::translate("GeoQuestList", "List of questions", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GeoQuestList: public Ui_GeoQuestList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GEOQUESTLIST_H
