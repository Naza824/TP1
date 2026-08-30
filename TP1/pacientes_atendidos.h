#ifndef PACIENTES_ATENDIDOS_H
#define PACIENTES_ATENDIDOS_H

#include <QDialog>

namespace Ui {
class Pacientes_atendidos;
}

class Pacientes_atendidos : public QDialog
{
    Q_OBJECT

public:
    explicit Pacientes_atendidos(QWidget *parent = nullptr);
    ~Pacientes_atendidos();

private:
    Ui::Pacientes_atendidos *ui;
};

#endif // PACIENTES_ATENDIDOS_H
