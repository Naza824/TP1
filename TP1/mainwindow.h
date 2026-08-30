#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "login.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private slots:
    /*void on_LoginBtn_clicked();
    void habilitarInicioSesion();*/

    void on_CambiarUsuarioBtn_clicked();

    void on_CargaPaciente_clicked();

    void on_PSABtn_clicked();

    void on_AtenderBtn_clicked();

    void on_AtendidosBtn_clicked();

    void on_SiguientePacienteBtn_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
