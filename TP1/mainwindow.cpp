#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "login.h"
#include "pacientes.h"
#include "pacientes_atendidos.h"
#include "psa.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->CambiarUsuarioBtn->setEnabled(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

/* Funcion que lleva a la ventana de
   login para ingresar al programa principal
   con otro usuario */
void MainWindow::on_CambiarUsuarioBtn_clicked()
{
    LogIn *ventanaLogin = new LogIn();
    ventanaLogin->setAttribute(Qt::WA_DeleteOnClose);
    ventanaLogin->show();

    this->close();  // cierra MainWindow
}


/* Funcion que abre la ventana
   para cargar pacientes */
void MainWindow::on_CargaPaciente_clicked()
{
    Pacientes *ventanaPacientes = new Pacientes(pacientesSinAtender,this);
    ventanaPacientes->setAttribute(Qt::WA_DeleteOnClose);
    ventanaPacientes->show();
}


/* Funcion que abre la ventana
   de pacientes sin atender */
void MainWindow::on_PSABtn_clicked()
{
    PSA *ventanaPSA = new PSA(pacientesSinAtender,this);
    ventanaPSA ->setAttribute(Qt::WA_DeleteOnClose);
    ventanaPSA->show();
}


/* Funcion que en caso de haber pacientes sin
   atender, atiende al proximo paciente, lo
   remueve de la lista y lo agrega a la lista
   de pacientes atendidos */
void MainWindow::on_AtenderBtn_clicked()
{
    if (pacientesSinAtender.empty()){
        ui->textBrowsermw->setText("No hay pacientes por atender");
        return;
    }

    Paciente paciente = pacientesSinAtender.front();
    pacientesSinAtender.pop();

    pacientesAtendidos.push(paciente);

    ui->textBrowsermw->setText(
        "Paciente atendido correctamente.\n\n"
        "Nombre: " + paciente.nombre + "\n"
        "Apellido: " + paciente.apellido + "\n"
        "Edad: " + QString::number(paciente.edad) + "\n"
        "Genero: " + QString(paciente.genero) + "\n"
        "DNI: " + QString::number(paciente.dni)
    );
}


/* Funcion que abre una ventana que muestra
   una lista de los pacientes ya atendidos */
void MainWindow::on_AtendidosBtn_clicked()
{
    Pacientes_atendidos *ventanaPacientes_atendidos = new Pacientes_atendidos(pacientesAtendidos,this);
    ventanaPacientes_atendidos->setAttribute(Qt::WA_DeleteOnClose);
    ventanaPacientes_atendidos->show();
}


/* Funcion que comprueba si hay pacientes sin atender
   y en caso de haberlos muestra al siguiente paciente */
void MainWindow::on_SiguientePacienteBtn_clicked()
{
    if(pacientesSinAtender.empty()){
        ui->textBrowsermw->setText("No hay pacientes sin atender.");
        return;
    }

    Paciente siguiente = pacientesSinAtender.front();

    ui->textBrowsermw->setText(
        "Siguiente paciente: \n\n"
        "Nombre: " + siguiente.nombre +"\n"
        "Apellido: " + siguiente.apellido +"\n"
        "Edad: " + QString::number(siguiente.edad) +"\n"
        "Genero: " + QString(siguiente.genero) + "\n"
        "DNI: " + QString::number(siguiente.dni)
    );
}

