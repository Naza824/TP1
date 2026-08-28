/********************************************************************************
** Form generated from reading UI file 'psa.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PSA_H
#define UI_PSA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_PSA
{
public:

    void setupUi(QDialog *PSA)
    {
        if (PSA->objectName().isEmpty())
            PSA->setObjectName("PSA");
        PSA->resize(400, 300);

        retranslateUi(PSA);

        QMetaObject::connectSlotsByName(PSA);
    } // setupUi

    void retranslateUi(QDialog *PSA)
    {
        PSA->setWindowTitle(QCoreApplication::translate("PSA", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PSA: public Ui_PSA {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PSA_H
