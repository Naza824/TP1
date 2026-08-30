#include "pacientes_atendidos.h"
#include "ui_pacientes_atendidos.h"

Pacientes_atendidos::Pacientes_atendidos(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Pacientes_atendidos)
{
    ui->setupUi(this);
}

Pacientes_atendidos::~Pacientes_atendidos()
{
    delete ui;
}
