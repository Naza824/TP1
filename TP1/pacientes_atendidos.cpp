#include "pacientes_atendidos.h"
#include "ui_pacientes_atendidos.h"

Pacientes_atendidos::Pacientes_atendidos(std::queue<Paciente>& cola, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Pacientes_atendidos)
    ,cola(cola)
{
    ui->setupUi(this);

    QString lista;

    std::queue<Paciente> copia = cola;

    if(copia.empty()){
        lista = "No hay pacientes atendidos.";
    }

    /* Pone los datos del paciente en un texto
       y saca el paciente de la queue, luego
       muestra el paciente en la ventana */
    else {
        while(!copia.empty()){
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

    ui->textBrowserPA->setText(lista);
}

Pacientes_atendidos::~Pacientes_atendidos()
{
    delete ui;
}

