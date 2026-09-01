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
        PSA->setWindowTitle(QCoreApplication::translate("PSA", "Pacientes sin atender", nullptr));
        ListaPSA->setHtml(QCoreApplication::translate("PSA", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700; font-style:italic;\">Lista de pacientes sin atender:</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PSA: public Ui_PSA {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PSA_H
