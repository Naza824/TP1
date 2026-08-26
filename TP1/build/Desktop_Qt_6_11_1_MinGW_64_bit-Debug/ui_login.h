/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LogIn
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *Clave;
    QLineEdit *Usuario;
    QPushButton *IngresarBtn;

    void setupUi(QDialog *LogIn)
    {
        if (LogIn->objectName().isEmpty())
            LogIn->setObjectName("LogIn");
        LogIn->resize(400, 300);
        label = new QLabel(LogIn);
        label->setObjectName("label");
        label->setGeometry(QRect(160, 70, 49, 16));
        label_2 = new QLabel(LogIn);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(170, 150, 49, 16));
        Clave = new QLineEdit(LogIn);
        Clave->setObjectName("Clave");
        Clave->setGeometry(QRect(130, 190, 113, 22));
        Clave->setEchoMode(QLineEdit::EchoMode::Password);
        Usuario = new QLineEdit(LogIn);
        Usuario->setObjectName("Usuario");
        Usuario->setGeometry(QRect(130, 110, 113, 22));
        IngresarBtn = new QPushButton(LogIn);
        IngresarBtn->setObjectName("IngresarBtn");
        IngresarBtn->setGeometry(QRect(150, 240, 75, 24));

        retranslateUi(LogIn);

        QMetaObject::connectSlotsByName(LogIn);
    } // setupUi

    void retranslateUi(QDialog *LogIn)
    {
        LogIn->setWindowTitle(QCoreApplication::translate("LogIn", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("LogIn", "Nombre", nullptr));
        label_2->setText(QCoreApplication::translate("LogIn", "Clave", nullptr));
        IngresarBtn->setText(QCoreApplication::translate("LogIn", "Ingresar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogIn: public Ui_LogIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
