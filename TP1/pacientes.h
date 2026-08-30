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


private slots:
    void on_IngresarBtn_clicked();

private:
    Ui::Pacientes *ui;
    QString nombre;
    QString apellido;
    uint8_t edad;
    QString genero;
    int dni;
};

#endif // PACIENTES_H
