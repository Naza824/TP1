/********************************************************************************
** Form generated from reading UI file 'pacientes.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PACIENTES_H
#define UI_PACIENTES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Pacientes
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_3;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_5;
    QLabel *label_5;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QComboBox *comboBox;
    QPushButton *IngresarBtn;

    void setupUi(QDialog *Pacientes)
    {
        if (Pacientes->objectName().isEmpty())
            Pacientes->setObjectName("Pacientes");
        Pacientes->resize(285, 272);
        gridLayout_2 = new QGridLayout(Pacientes);
        gridLayout_2->setObjectName("gridLayout_2");
        groupBox = new QGroupBox(Pacientes);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName("lineEdit_3");

        gridLayout->addWidget(lineEdit_3, 2, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout->addWidget(label, 7, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        lineEdit_5 = new QLineEdit(groupBox);
        lineEdit_5->setObjectName("lineEdit_5");

        gridLayout->addWidget(lineEdit_5, 3, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName("lineEdit_2");

        gridLayout->addWidget(lineEdit_2, 0, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName("lineEdit_4");

        gridLayout->addWidget(lineEdit_4, 7, 1, 1, 1);

        comboBox = new QComboBox(groupBox);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        gridLayout->addWidget(comboBox, 4, 1, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        IngresarBtn = new QPushButton(Pacientes);
        IngresarBtn->setObjectName("IngresarBtn");

        gridLayout_2->addWidget(IngresarBtn, 1, 0, 1, 1);


        retranslateUi(Pacientes);

        comboBox->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(Pacientes);
    } // setupUi

    void retranslateUi(QDialog *Pacientes)
    {
        Pacientes->setWindowTitle(QCoreApplication::translate("Pacientes", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Pacientes", "GroupBox", nullptr));
        label->setText(QCoreApplication::translate("Pacientes", "DNI", nullptr));
        label_2->setText(QCoreApplication::translate("Pacientes", "Apellido", nullptr));
        label_5->setText(QCoreApplication::translate("Pacientes", "Edad", nullptr));
        label_3->setText(QCoreApplication::translate("Pacientes", "Genero", nullptr));
        label_4->setText(QCoreApplication::translate("Pacientes", "Nombre", nullptr));
        lineEdit_4->setPlaceholderText(QCoreApplication::translate("Pacientes", "Colocar solo numeros", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Pacientes", "Masculino", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Pacientes", "Femenino", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Pacientes", "Otros", nullptr));

        comboBox->setPlaceholderText(QCoreApplication::translate("Pacientes", "Seleccionar", nullptr));
        IngresarBtn->setText(QCoreApplication::translate("Pacientes", "Ingresar Paciente al sistema", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Pacientes: public Ui_Pacientes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PACIENTES_H
