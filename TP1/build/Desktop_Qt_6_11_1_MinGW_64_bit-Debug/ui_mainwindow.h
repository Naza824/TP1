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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *CambiarUsuarioBtn;
    QPushButton *CargaPaciente;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(709, 377);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        CambiarUsuarioBtn = new QPushButton(centralwidget);
        CambiarUsuarioBtn->setObjectName("CambiarUsuarioBtn");
        CambiarUsuarioBtn->setGeometry(QRect(20, 20, 121, 24));
        CargaPaciente = new QPushButton(centralwidget);
        CargaPaciente->setObjectName("CargaPaciente");
        CargaPaciente->setGeometry(QRect(10, 170, 158, 24));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(200, 170, 158, 24));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(260, 260, 158, 24));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(370, 170, 158, 24));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(540, 170, 158, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 709, 25));
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
        CargaPaciente->setText(QCoreApplication::translate("MainWindow", "Ingresar paciente", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Mostrar sin atender", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Mostrar siguiente", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Atender siguiente", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Mostrar atendidos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
