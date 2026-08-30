#include "mainwindow.h"
#include "login.h"

#include <QApplication>
int a;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    LogIn w;
    w.show();
    return QApplication::exec();
}
