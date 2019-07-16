#include "mainwindow.h"
#include <QApplication>
#include <QVector>
#include <QFile>
#include <QTextStream>



int main(int argc, char *argv[])
{

    QApplication a(argc, argv);

    MainWindow w;
    w.show();

    return a.exec();
}






