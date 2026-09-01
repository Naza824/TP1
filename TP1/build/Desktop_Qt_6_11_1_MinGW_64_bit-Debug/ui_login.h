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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogIn
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *Usuario;
    QLabel *label_2;
    QPushButton *IngresarBtn;
    QLineEdit *Clave;
    QLabel *label;

    void setupUi(QDialog *LogIn)
    {
        if (LogIn->objectName().isEmpty())
            LogIn->setObjectName("LogIn");
        LogIn->resize(581, 378);
        gridLayoutWidget = new QWidget(LogIn);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(160, 120, 241, 155));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Usuario = new QLineEdit(gridLayoutWidget);
        Usuario->setObjectName("Usuario");

        gridLayout->addWidget(Usuario, 2, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        IngresarBtn = new QPushButton(gridLayoutWidget);
        IngresarBtn->setObjectName("IngresarBtn");

        gridLayout->addWidget(IngresarBtn, 5, 0, 1, 1);

        Clave = new QLineEdit(gridLayoutWidget);
        Clave->setObjectName("Clave");
        Clave->setEchoMode(QLineEdit::EchoMode::Password);

        gridLayout->addWidget(Clave, 4, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 0, 0, 1, 1);


        retranslateUi(LogIn);

        QMetaObject::connectSlotsByName(LogIn);
    } // setupUi

    void retranslateUi(QDialog *LogIn)
    {
        LogIn->setWindowTitle(QCoreApplication::translate("LogIn", "Usuario", nullptr));
        label_2->setText(QCoreApplication::translate("LogIn", "Clave", nullptr));
        IngresarBtn->setText(QCoreApplication::translate("LogIn", "Ingresar", nullptr));
        label->setText(QCoreApplication::translate("LogIn", "Nombre", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogIn: public Ui_LogIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
