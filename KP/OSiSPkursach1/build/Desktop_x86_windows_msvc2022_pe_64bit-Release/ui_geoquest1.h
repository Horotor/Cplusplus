/********************************************************************************
** Form generated from reading UI file 'geoquest1.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GEOQUEST1_H
#define UI_GEOQUEST1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GeoQuest1
{
public:
    QPushButton *Answer1Button;
    QPushButton *Answer2Button;
    QPushButton *Answer3Button;
    QPushButton *Answer4Button;
    QLabel *QuestionLabel;

    void setupUi(QDialog *GeoQuest1)
    {
        if (GeoQuest1->objectName().isEmpty())
            GeoQuest1->setObjectName("GeoQuest1");
        GeoQuest1->resize(400, 300);
        Answer1Button = new QPushButton(GeoQuest1);
        Answer1Button->setObjectName("Answer1Button");
        Answer1Button->setGeometry(QRect(40, 140, 131, 41));
        Answer2Button = new QPushButton(GeoQuest1);
        Answer2Button->setObjectName("Answer2Button");
        Answer2Button->setGeometry(QRect(40, 210, 131, 41));
        Answer3Button = new QPushButton(GeoQuest1);
        Answer3Button->setObjectName("Answer3Button");
        Answer3Button->setGeometry(QRect(220, 140, 141, 41));
        Answer4Button = new QPushButton(GeoQuest1);
        Answer4Button->setObjectName("Answer4Button");
        Answer4Button->setGeometry(QRect(220, 210, 141, 41));
        QuestionLabel = new QLabel(GeoQuest1);
        QuestionLabel->setObjectName("QuestionLabel");
        QuestionLabel->setGeometry(QRect(10, 10, 371, 91));
        QFont font;
        font.setPointSize(12);
        QuestionLabel->setFont(font);
        QuestionLabel->setAlignment(Qt::AlignCenter);

        retranslateUi(GeoQuest1);

        QMetaObject::connectSlotsByName(GeoQuest1);
    } // setupUi

    void retranslateUi(QDialog *GeoQuest1)
    {
        GeoQuest1->setWindowTitle(QCoreApplication::translate("GeoQuest1", "Dialog", nullptr));
        Answer1Button->setText(QCoreApplication::translate("GeoQuest1", "PushButton", nullptr));
        Answer2Button->setText(QCoreApplication::translate("GeoQuest1", "PushButton", nullptr));
        Answer3Button->setText(QCoreApplication::translate("GeoQuest1", "PushButton", nullptr));
        Answer4Button->setText(QCoreApplication::translate("GeoQuest1", "PushButton", nullptr));
        QuestionLabel->setText(QCoreApplication::translate("GeoQuest1", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GeoQuest1: public Ui_GeoQuest1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GEOQUEST1_H
