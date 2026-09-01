/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *CambiarUsuarioBtn;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *CargaPaciente;
    QPushButton *PSABtn;
    QPushButton *AtenderBtn;
    QPushButton *AtendidosBtn;
    QGridLayout *gridLayout_3;
    QPushButton *SiguientePacienteBtn;
    QTextBrowser *textBrowsermw;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1066, 521);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        CambiarUsuarioBtn = new QPushButton(centralwidget);
        CambiarUsuarioBtn->setObjectName("CambiarUsuarioBtn");

        gridLayout->addWidget(CambiarUsuarioBtn, 0, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        CargaPaciente = new QPushButton(centralwidget);
        CargaPaciente->setObjectName("CargaPaciente");

        horizontalLayout_2->addWidget(CargaPaciente);

        PSABtn = new QPushButton(centralwidget);
        PSABtn->setObjectName("PSABtn");

        horizontalLayout_2->addWidget(PSABtn);

        AtenderBtn = new QPushButton(centralwidget);
        AtenderBtn->setObjectName("AtenderBtn");

        horizontalLayout_2->addWidget(AtenderBtn);

        AtendidosBtn = new QPushButton(centralwidget);
        AtendidosBtn->setObjectName("AtendidosBtn");

        horizontalLayout_2->addWidget(AtendidosBtn);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setVerticalSpacing(1);
        gridLayout_3->setContentsMargins(7, -1, -1, -1);
        SiguientePacienteBtn = new QPushButton(centralwidget);
        SiguientePacienteBtn->setObjectName("SiguientePacienteBtn");

        gridLayout_3->addWidget(SiguientePacienteBtn, 0, 0, 1, 1);

        textBrowsermw = new QTextBrowser(centralwidget);
        textBrowsermw->setObjectName("textBrowsermw");

        gridLayout_3->addWidget(textBrowsermw, 1, 0, 1, 1);


        gridLayout->addLayout(gridLayout_3, 2, 0, 1, 2);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        CambiarUsuarioBtn->setText(QCoreApplication::translate("MainWindow", "Cambiar Usuario", nullptr));
        CargaPaciente->setText(QCoreApplication::translate("MainWindow", "Ingresar paciente", nullptr));
        PSABtn->setText(QCoreApplication::translate("MainWindow", "Mostrar sin atender", nullptr));
        AtenderBtn->setText(QCoreApplication::translate("MainWindow", "Atender siguiente", nullptr));
        AtendidosBtn->setText(QCoreApplication::translate("MainWindow", "Mostrar atendidos", nullptr));
        SiguientePacienteBtn->setText(QCoreApplication::translate("MainWindow", "Mostrar siguiente", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
