#include "pacientes.h"
#include "ui_pacientes.h"

Pacientes::Pacientes(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Pacientes)
{
    ui->setupUi(this);
}



Pacientes::~Pacientes()
{
    delete ui;
}

void Pacientes::on_IngresarBtn_clicked(){

}
