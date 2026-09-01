/********************************************************************************
** Form generated from reading UI file 'pacientes_atendidos.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PACIENTES_ATENDIDOS_H
#define UI_PACIENTES_ATENDIDOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Pacientes_atendidos
{
public:
    QGridLayout *gridLayout;
    QTextBrowser *textBrowserPA;

    void setupUi(QDialog *Pacientes_atendidos)
    {
        if (Pacientes_atendidos->objectName().isEmpty())
            Pacientes_atendidos->setObjectName("Pacientes_atendidos");
        Pacientes_atendidos->resize(400, 300);
        gridLayout = new QGridLayout(Pacientes_atendidos);
        gridLayout->setObjectName("gridLayout");
        textBrowserPA = new QTextBrowser(Pacientes_atendidos);
        textBrowserPA->setObjectName("textBrowserPA");

        gridLayout->addWidget(textBrowserPA, 0, 0, 1, 1);


        retranslateUi(Pacientes_atendidos);

        QMetaObject::connectSlotsByName(Pacientes_atendidos);
    } // setupUi

    void retranslateUi(QDialog *Pacientes_atendidos)
    {
        Pacientes_atendidos->setWindowTitle(QCoreApplication::translate("Pacientes_atendidos", "Pacientes atendidos", nullptr));
        textBrowserPA->setHtml(QCoreApplication::translate("Pacientes_atendidos", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700; font-style:italic;\">Lista de pacientes atendidos:</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Pacientes_atendidos: public Ui_Pacientes_atendidos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PACIENTES_ATENDIDOS_H
