#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "login.h"
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

}

