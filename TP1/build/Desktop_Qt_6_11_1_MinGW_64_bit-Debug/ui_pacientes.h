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
    QLineEdit *lineApellido;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdad;
    QLabel *label_5;
    QLabel *label_3;
    QLineEdit *lineNombre;
    QLabel *label_4;
    QLineEdit *lineDNI;
    QComboBox *cBGenero;
    QPushButton *IngresarBtn;

    void setupUi(QDialog *Pacientes)
    {
        if (Pacientes->objectName().isEmpty())
            Pacientes->setObjectName("Pacientes");
        Pacientes->resize(285, 277);
        gridLayout_2 = new QGridLayout(Pacientes);
        gridLayout_2->setObjectName("gridLayout_2");
        groupBox = new QGroupBox(Pacientes);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        lineApellido = new QLineEdit(groupBox);
        lineApellido->setObjectName("lineApellido");

        gridLayout->addWidget(lineApellido, 2, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout->addWidget(label, 7, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        lineEdad = new QLineEdit(groupBox);
        lineEdad->setObjectName("lineEdad");

        gridLayout->addWidget(lineEdad, 3, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        lineNombre = new QLineEdit(groupBox);
        lineNombre->setObjectName("lineNombre");

        gridLayout->addWidget(lineNombre, 0, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        lineDNI = new QLineEdit(groupBox);
        lineDNI->setObjectName("lineDNI");

        gridLayout->addWidget(lineDNI, 7, 1, 1, 1);

        cBGenero = new QComboBox(groupBox);
        cBGenero->addItem(QString());
        cBGenero->addItem(QString());
        cBGenero->addItem(QString());
        cBGenero->setObjectName("cBGenero");

        gridLayout->addWidget(cBGenero, 4, 1, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        IngresarBtn = new QPushButton(Pacientes);
        IngresarBtn->setObjectName("IngresarBtn");

        gridLayout_2->addWidget(IngresarBtn, 1, 0, 1, 1);


        retranslateUi(Pacientes);

        cBGenero->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(Pacientes);
    } // setupUi

    void retranslateUi(QDialog *Pacientes)
    {
        Pacientes->setWindowTitle(QCoreApplication::translate("Pacientes", "Cargar paciente", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Pacientes", "Datos del paciente", nullptr));
        lineApellido->setInputMask(QString());
        label->setText(QCoreApplication::translate("Pacientes", "DNI", nullptr));
        label_2->setText(QCoreApplication::translate("Pacientes", "Apellido", nullptr));
        lineEdad->setInputMask(QCoreApplication::translate("Pacientes", "999", nullptr));
        label_5->setText(QCoreApplication::translate("Pacientes", "Edad", nullptr));
        label_3->setText(QCoreApplication::translate("Pacientes", "Genero", nullptr));
        lineNombre->setInputMask(QString());
        label_4->setText(QCoreApplication::translate("Pacientes", "Nombre", nullptr));
        lineDNI->setInputMask(QCoreApplication::translate("Pacientes", "99999999", nullptr));
        lineDNI->setPlaceholderText(QCoreApplication::translate("Pacientes", "Colocar solo numeros", nullptr));
        cBGenero->setItemText(0, QCoreApplication::translate("Pacientes", "M", nullptr));
        cBGenero->setItemText(1, QCoreApplication::translate("Pacientes", "F", nullptr));
        cBGenero->setItemText(2, QCoreApplication::translate("Pacientes", "O", nullptr));

        cBGenero->setPlaceholderText(QCoreApplication::translate("Pacientes", "Seleccionar", nullptr));
        IngresarBtn->setText(QCoreApplication::translate("Pacientes", "Ingresar Paciente al sistema", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Pacientes: public Ui_Pacientes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PACIENTES_H
