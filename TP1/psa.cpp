#include "psa.h"
#include "ui_psa.h"

PSA::PSA(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::PSA)
{
    ui->setupUi(this);
}

PSA::~PSA()
{
    delete ui;
}
