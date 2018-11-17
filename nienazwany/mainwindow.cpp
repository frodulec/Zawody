#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "baza.h"
#include <QJsonObject>
#include <QDebug>
#include <QJsonDocument>
#include <QFile>


QVector<QString> wczytajListeZawodow()
{
    QVector <QString> lista(0);
    QFile plikZListaZawodow("listaZawodow.txt");

       if( plikZListaZawodow.open(QIODevice::ReadOnly | QIODevice::Text))
       {
        //    return 0;

        QTextStream in(&plikZListaZawodow);

        QString line = in.readLine();

        while (!line.isNull())
        {
            lista.resize(lista.size()+1);
            lista[lista.size()-1]=line;
            line = in.readLine();
        }
        return lista;
       }
       else return lista;
}



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QVector <QString> lista = wczytajListeZawodow();
    for(int i = 0;i< (lista.size());i++)
    {
        ui->listWidget->insertItem(i,lista[i]);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Dodaj_clicked()
{


        QString source = "test.json";
        QFile testFile(source);
        QString readData;
        testFile.open(QIODevice::ReadOnly | QIODevice::Text);

        readData=testFile.readAll();
        testFile.close();


        QJsonDocument doc = QJsonDocument::fromJson(readData.toUtf8());
        QJsonObject allParameters = doc.object();
        QJsonObject::iterator it=allParameters.begin();
        QVector <Zawody> listaZawodow;
        //parameters.resize(allParameters.size());

        QJsonValue value = allParameters.value(QString("PucharMazowsza"));
        QJsonObject item = value.toObject();

            /* in case of string value get value and convert into string*/
        QJsonValue subobj = item["Informacje"];


        int j=0;
        int iloscZawodow=0;
        for(;it!= allParameters.end();++it)
        {
            iloscZawodow++;
        }
        it=allParameters.begin();

        listaZawodow.resize(iloscZawodow);

        for ( ;it != allParameters.end();++it)

        {

            QJsonValue value = allParameters.value(QString(it.key()));
            QJsonObject pojedynczeZawody= value.toObject();

            QJsonValue infoValue =  pojedynczeZawody.value("Informacje");
            QJsonObject miejsce = infoValue.toObject();

            QJsonValue konkretnaMiejscowosc=miejsce.value("Miejsce");
            QJsonValue konkretnaData=miejsce.value("Data");

            listaZawodow[j].miejsce=konkretnaMiejscowosc.toString();
            listaZawodow[j].data=konkretnaData.toString();

            qWarning()<<listaZawodow[j].miejsce;
            qWarning()<<listaZawodow[j].data;



            j++;

        }


}



void MainWindow::on_bazaZawodnikow_clicked()
{

    nowabaza.show();
    this->close();
}




void MainWindow::on_Wczytaj_clicked()
{
    QVector <QString> lista(0);
    QFile plikZListaZawodow("listaZawodow.txt");

       if( plikZListaZawodow.open(QIODevice::ReadOnly | QIODevice::Text))
       {
        //    return 0;

        QTextStream in(&plikZListaZawodow);
       }
   // ui->textBrowser->setText(lista[0]+lista[1]+lista[2]);

}

//void MainWindow::on_listWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous)
//{

//}
