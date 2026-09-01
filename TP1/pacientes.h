#ifndef PACIENTES_H
#define PACIENTES_H

#include <queue>
#include <QDialog>
#include <QString>

struct Paciente{
    QString nombre;
    QString apellido;
    int edad;
    char genero;
    int dni;
};
namespace Ui {
class Pacientes;
}

class Pacientes : public QDialog
{
    Q_OBJECT

public:
    explicit Pacientes(std::queue<Paciente>&cola, QWidget *parent = nullptr);
    ~Pacientes();


private slots:
    void on_IngresarBtn_clicked();

private:
    Ui::Pacientes *ui;
    QString nombre;
    QString apellido;
    int  edad;
    char genero;
    int dni;
    std::queue<Paciente>&cola;
};

#endif // PACIENTES_H
