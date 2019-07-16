#ifndef BAZA_H
#define BAZA_H

#include <QWidget>
#include <QFile>
#include <QTextStream>

namespace Ui {
class baza;
}


struct zawodnik{
    int     id;
    QString kto;
    QString rocznik;
    QString klub;
    QString plec ;
    QString konkurencja;
};

struct score {
    zawodnik shooter;
    int konkurencja;
    float result;

};

struct zawody{
    QString title;
    QString place;
    QString date;

};




class baza : public QWidget
{
    Q_OBJECT

public:
    explicit baza(QWidget *parent = 0);
    ~baza();

private slots:
    void on_Dodajzawodnika_clicked();

    void on_tableWidget_entered(const QModelIndex &index);

    void on_tableWidget_clicked(const QModelIndex &index);

private:
    Ui::baza *ui;
};

QVector<zawodnik> wczytajBaze();

#endif // BAZA_H
