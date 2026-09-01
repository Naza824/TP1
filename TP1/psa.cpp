#include "psa.h"
#include "ui_psa.h"

PSA::PSA(std::queue<Paciente>& cola, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::PSA)
    ,cola(cola)
{
    ui->setupUi(this);
    QString lista;

    std::queue<Paciente> copia = cola; //generamos una copia para no modificar la cola original

    if (copia.empty())
    {
        lista = "No hay pacientes sin atender.";
    }
    else
    {
        while (!copia.empty())
        {
            Paciente paciente = copia.front();
            lista += "Nombre: " + paciente.nombre + "\n";
            lista += "Apellido: " + paciente.apellido + "\n";
            lista += "Edad: " + QString::number(paciente.edad) + "\n";
            lista += "Genero: " + QString(paciente.genero) + "\n";
            lista += "DNI: " + QString::number(paciente.dni) + "\n";
            lista += "-----------------------------\n";

            copia.pop();
        }
    }

    ui->ListaPSA->setText(lista);
}

PSA::~PSA()
{
    delete ui;
}


