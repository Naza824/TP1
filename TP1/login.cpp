#include "login.h"
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

void LogIn::on_IngresarBtn_clicked()
{
    QString usuario = ui->Usuario->text();
    QString contrasena = ui->Clave->text();

    if (usuario == "grupo6" && contrasena == "utnfrh")
    {
        QMessageBox::information(this, "Éxito", "Ingreso correcto");

    }
    else
    {
        QMessageBox::warning(this, "Error", "Usuario o contraseña incorrectos");
    }
}

