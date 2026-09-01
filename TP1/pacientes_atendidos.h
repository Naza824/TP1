#ifndef PACIENTES_ATENDIDOS_H
#define PACIENTES_ATENDIDOS_H

#include <QDialog>
#include<queue>
#include "pacientes.h"

namespace Ui {
class Pacientes_atendidos;
}

class Pacientes_atendidos : public QDialog
{
    Q_OBJECT

public:
    explicit Pacientes_atendidos(std::queue<Paciente>& cola, QWidget *parent = nullptr);
    ~Pacientes_atendidos();

private:
    Ui::Pacientes_atendidos *ui;
    std::queue<Paciente>& cola;
};

#endif // PACIENTES_ATENDIDOS_H
