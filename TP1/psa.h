#ifndef PSA_H
#define PSA_H

#include <QDialog>
#include <queue>
#include <pacientes.h>

namespace Ui {
class PSA;
}

class PSA : public QDialog
{
    Q_OBJECT

public:
    explicit PSA(std::queue<Paciente>& cola, QWidget *parent = nullptr);
    ~PSA();

private:
    Ui::PSA *ui;
    std::queue<Paciente>& cola;
};

#endif // PSA_H
