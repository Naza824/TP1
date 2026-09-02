#include "login.h"
#include "mainwindow.h"
#include "ui_login.h"
#include <QMessageBox>

LogIn::LogIn(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LogIn)
{
    ui->setupUi(this);
}

LogIn::~LogIn()
{
    delete ui;
}

/* Funcion para el login e ingresar al programa principal
   con su debido error si no se ingresan los datos correctamente */
void LogIn::on_IngresarBtn_clicked()
{
    QString usuario = ui->Usuario->text();
    QString contrasena = ui->Clave->text();


    if (usuario == "grupo6" && contrasena == "utnfrh")
    {
        MainWindow *ventanaPrincipal = new MainWindow();
        ventanaPrincipal->setAttribute(Qt::WA_DeleteOnClose);
        ventanaPrincipal->show();

        this->close();
    }
    else
    {
        QMessageBox::warning(this, "Error", "Usuario o contraseña incorrectos, intente nuevamente");
    }
}


