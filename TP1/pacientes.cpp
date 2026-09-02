#include "pacientes.h"
#include "ui_pacientes.h"
#include <QString>
#include <QMessageBox>
#include <cstring>
#include <QRegularExpressionValidator>

Pacientes::Pacientes(std::queue<Paciente>& cola,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Pacientes)
    ,cola(cola)
{
    ui->setupUi(this);
    QRegularExpression regexNombre("[a-zA-ZáéíóúÁÉÍÓÚñÑ\\s]{1,30}");
    ui->lineNombre->setValidator(new QRegularExpressionValidator(regexNombre, this));
    ui->lineApellido->setValidator(new QRegularExpressionValidator(regexNombre, this));
}

Pacientes::~Pacientes()
{
    delete ui;
}

/* Funcion que comprueba si se ingresaron todos los datos y
   valida el ingreso de edad y dni. Si  se ingresaron todos
   los datos y son validados ingresa al  paciente al sistema
   y luego muestra un mensaje de que se ingreso correctamente */
void Pacientes::on_IngresarBtn_clicked(){

    nombre = ui->lineNombre->text();
    apellido = ui->lineApellido->text();

    QString edadTexto = ui->lineEdad->text();
    QString dniTexto = ui->lineDNI->text();

    if (nombre.isEmpty() || apellido.isEmpty() ||
        edadTexto.isEmpty() || dniTexto.isEmpty())
    {
        QMessageBox::warning(this, "ERROR","Todos los casilleros deben estar completos.");
        return;
    }

    bool edadValida, dniValido;

    int edadnum = edadTexto.toInt(&edadValida);
    int dninum = dniTexto.toInt(&dniValido);

    if (!edadValida || !dniValido)
    {
        QMessageBox::warning(this, "ERROR","Edad o DNI invalidos.");
        return;
    }

    if (edadnum < 0 || edadnum > 120)
    {
        QMessageBox::warning(this, "ERROR","La edad ingresada no es valida.");
        return;
    }

    if (dninum <= 0 || dninum > 70000000)
    {
        QMessageBox::warning(this, "ERROR", "DNI invalido.");
        return;
    }

    edad = edadnum;
    dni = dninum;

    QString generoTexto = ui->cBGenero->currentText();

    if (generoTexto == "F"){
        genero = 'F';
    }

    else if (generoTexto == "M"){
        genero = 'M';
    }
    else if (generoTexto == "O"){
        genero = 'O';
    }
    Paciente nuevo;
    nuevo.nombre= nombre;
    nuevo.apellido= apellido;
    nuevo.edad=edad;
    nuevo.genero=genero;
    nuevo.dni=dni;

    cola.push(nuevo);

    QMessageBox::information(this, "Paciente ingresado", "El paciente fue ingresado correctamente.");

    ui->lineNombre->clear();
    ui->lineApellido->clear();
    ui->lineEdad->clear();
    ui->cBGenero->setCurrentIndex(0);
    ui->lineDNI->clear();
}
