/********************************************************************************
** Form generated from reading UI file 'psa.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PSA_H
#define UI_PSA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_PSA
{
public:
    QGridLayout *gridLayout;
    QTextBrowser *ListaPSA;

    void setupUi(QDialog *PSA)
    {
        if (PSA->objectName().isEmpty())
            PSA->setObjectName("PSA");
        PSA->resize(382, 312);
        gridLayout = new QGridLayout(PSA);
        gridLayout->setObjectName("gridLayout");
        ListaPSA = new QTextBrowser(PSA);
        ListaPSA->setObjectName("ListaPSA");

        gridLayout->addWidget(ListaPSA, 0, 0, 1, 1);


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
