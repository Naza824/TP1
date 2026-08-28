/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *CambiarUsuarioBtn;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *CargaPaciente;
    QTextEdit *textEdit;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QPushButton *pushButton_4;
    QLabel *label_5;
    QPushButton *pushButton_8;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        CambiarUsuarioBtn = new QPushButton(centralwidget);
        CambiarUsuarioBtn->setObjectName("CambiarUsuarioBtn");
        CambiarUsuarioBtn->setGeometry(QRect(0, 50, 121, 24));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(50, 310, 160, 125));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        CargaPaciente = new QPushButton(gridLayoutWidget);
        CargaPaciente->setObjectName("CargaPaciente");

        gridLayout->addWidget(CargaPaciente, 2, 0, 1, 1);

        textEdit = new QTextEdit(gridLayoutWidget);
        textEdit->setObjectName("textEdit");

        gridLayout->addWidget(textEdit, 1, 0, 1, 1);

        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(320, 310, 160, 138));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_7 = new QPushButton(gridLayoutWidget_2);
        pushButton_7->setObjectName("pushButton_7");

        gridLayout_2->addWidget(pushButton_7, 3, 0, 1, 1);

        pushButton_6 = new QPushButton(gridLayoutWidget_2);
        pushButton_6->setObjectName("pushButton_6");

        gridLayout_2->addWidget(pushButton_6, 2, 0, 1, 1);

        pushButton_4 = new QPushButton(gridLayoutWidget_2);
        pushButton_4->setObjectName("pushButton_4");

        gridLayout_2->addWidget(pushButton_4, 1, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget_2);
        label_5->setObjectName("label_5");

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        pushButton_8 = new QPushButton(gridLayoutWidget_2);
        pushButton_8->setObjectName("pushButton_8");

        gridLayout_2->addWidget(pushButton_8, 4, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
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
        label->setText(QCoreApplication::translate("MainWindow", "Nuevo paciente", nullptr));
        CargaPaciente->setText(QCoreApplication::translate("MainWindow", "Ingresar", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Atender siguiente", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Mostrar siguiente", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Mostrar sin atender", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Pacientes", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Mostrar atendidos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
