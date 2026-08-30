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

void MainWindow::on_CambiarUsuarioBtn_clicked()
{
    LogIn *ventanaLogin = new LogIn();
    ventanaLogin->setAttribute(Qt::WA_DeleteOnClose);
    ventanaLogin->show();

    this->close();  // cierra MainWindow
}


void MainWindow::on_CargaPaciente_clicked()
{
    Pacientes *ventanaPacientes = new Pacientes(this);
    ventanaPacientes->setAttribute(Qt::WA_DeleteOnClose);
    ventanaPacientes->show();
}


void MainWindow::on_PSABtn_clicked()
{
    PSA *ventanaPSA = new PSA(this);
    ventanaPSA ->setAttribute(Qt::WA_DeleteOnClose);
    ventanaPSA->show();
}


void MainWindow::on_AtenderBtn_clicked()
{

}


void MainWindow::on_AtendidosBtn_clicked()
{
    Pacientes_atendidos *ventanaPacientes_atendidos = new Pacientes_atendidos(this);
    ventanaPacientes_atendidos->setAttribute(Qt::WA_DeleteOnClose);
    ventanaPacientes_atendidos->show();
}


void MainWindow::on_SiguientePacienteBtn_clicked()
{

}

