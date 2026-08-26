#ifndef PACIENTES_H
#define PACIENTES_H

#include <QDialog>

namespace Ui {
class Pacientes;
}

class Pacientes : public QDialog
{
    Q_OBJECT

public:
    explicit Pacientes(QWidget *parent = nullptr);
    ~Pacientes();

private:
    Ui::Pacientes *ui;
};

#endif // PACIENTES_H
