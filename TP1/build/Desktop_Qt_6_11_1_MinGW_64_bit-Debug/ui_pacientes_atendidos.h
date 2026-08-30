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
    QTextBrowser *textBrowser;

    void setupUi(QDialog *Pacientes_atendidos)
    {
        if (Pacientes_atendidos->objectName().isEmpty())
            Pacientes_atendidos->setObjectName("Pacientes_atendidos");
        Pacientes_atendidos->resize(400, 300);
        gridLayout = new QGridLayout(Pacientes_atendidos);
        gridLayout->setObjectName("gridLayout");
        textBrowser = new QTextBrowser(Pacientes_atendidos);
        textBrowser->setObjectName("textBrowser");

        gridLayout->addWidget(textBrowser, 0, 0, 1, 1);


        retranslateUi(Pacientes_atendidos);

        QMetaObject::connectSlotsByName(Pacientes_atendidos);
    } // setupUi

    void retranslateUi(QDialog *Pacientes_atendidos)
    {
        Pacientes_atendidos->setWindowTitle(QCoreApplication::translate("Pacientes_atendidos", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Pacientes_atendidos: public Ui_Pacientes_atendidos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PACIENTES_ATENDIDOS_H
