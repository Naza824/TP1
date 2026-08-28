#ifndef PSA_H
#define PSA_H

#include <QDialog>

namespace Ui {
class PSA;
}

class PSA : public QDialog
{
    Q_OBJECT

public:
    explicit PSA(QWidget *parent = nullptr);
    ~PSA();

private:
    Ui::PSA *ui;
};

#endif // PSA_H
