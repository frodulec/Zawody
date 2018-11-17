#include "baza.h"
#include "ui_baza.h"
#include <QFile>
#include <QJsonObject>
#include <QDebug>
#include <QJsonDocument>



baza::baza(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::baza)
{
    ui->setupUi(this);
    QVector<zawodnik> baza=wczytajBaze();
    ui->tableWidget->setRowCount(baza.size());

    for(int i=0;i<baza.size();i++)
    {
        ui->tableWidget->setItem(i,0,new QTableWidgetItem(baza[i].kto));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(baza[i].rocznik));
        ui->tableWidget->setItem(i,2,new QTableWidgetItem(baza[i].klub));
        ui->tableWidget->setItem(i,3,new QTableWidgetItem(baza[i].plec));
        ui->tableWidget->setItem(i,4,new QTableWidgetItem(baza[i].konkurencja));
    }
}

baza::~baza()
{
    delete ui;
}

void baza::on_Dodajzawodnika_clicked()
{
  //  QTableWidgetItem bla = 'a';
 // ui->tableWidget->setItem(1,1,new QTableWidgetItem(ui->tableWidget->columnCount()));
  //;
    ui->tableWidget->setRowCount(ui->tableWidget->rowCount()+1);
   for(int i=0;i<ui->tableWidget->columnCount();i++)
    {
       for(int j=0; j<ui->tableWidget->rowCount();j++)
       {
           //zapisz
          // QTableWidgetItem bla = ui->tableWidget->item(2,1);

       }

    }
}

void baza::on_tableWidget_clicked(const QModelIndex &index)
{

}
 void baza::on_tableWidget_entered(const QModelIndex &index)
 {

 }

QVector<zawodnik> wczytajBaze()
{

         QString val;
         QFile file;
         file.setFileName("test.json");
         file.open(QIODevice::ReadOnly | QIODevice::Text);
         val = file.readAll();
         file.close();
         qWarning() << val;
         QJsonDocument d = QJsonDocument::fromJson(val.toUtf8());
         QJsonObject sett2 = d.object();
         QJsonValue value = sett2.value(QString("PucharMazowsza"));
         qWarning() << value;
         QJsonObject item = value.toObject();
         qWarning() <<"QJsonObject of description: " << item;

         /* in case of string value get value and convert into string*/
         qWarning() << "QJsonObject[appName] of description: " << item["description"];
         QJsonValue subobj = item["description"];
         qWarning() << subobj.toString();

    int iloscZawodnikow=0;

    QFile plikZZawodnikami("zawodnicy.txt");

       if( plikZZawodnikami.open(QIODevice::ReadOnly | QIODevice::Text))
       {
        QTextStream in(&plikZZawodnikami);
        QString line = in.readLine();


        if(!line.isNull())
        {
            iloscZawodnikow=line.toInt();
        }
        QVector<zawodnik> baza(iloscZawodnikow);
        for(int i=0;i<iloscZawodnikow;i++)
        {
            line = in.readLine();
            baza[i].kto=line   ;

            line = in.readLine();
            baza[i].rocznik=line   ;

            line = in.readLine();
            baza[i].klub=line   ;

            line = in.readLine();
            baza[i].plec=line   ;

            line = in.readLine();
            baza[i].konkurencja=line   ;

        }
        return baza;

       }
       else{
           QVector<zawodnik> baza(0);
           return baza;

       }


}
