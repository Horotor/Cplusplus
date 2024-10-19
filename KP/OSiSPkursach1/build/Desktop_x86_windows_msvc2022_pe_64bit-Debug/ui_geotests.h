/********************************************************************************
** Form generated from reading UI file 'geotests.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GEOTESTS_H
#define UI_GEOTESTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_geoTests
{
public:

    void setupUi(QDialog *geoTests)
    {
        if (geoTests->objectName().isEmpty())
            geoTests->setObjectName("geoTests");
        geoTests->resize(400, 300);

        retranslateUi(geoTests);

        QMetaObject::connectSlotsByName(geoTests);
    } // setupUi

    void retranslateUi(QDialog *geoTests)
    {
        geoTests->setWindowTitle(QCoreApplication::translate("geoTests", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class geoTests: public Ui_geoTests {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GEOTESTS_H
