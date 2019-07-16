#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "baza.h"
#include <QFile>
#include <QTextStream>
#include <QListWidget>

namespace Ui {
class MainWindow;
}

class Zawody
{
public:
    QString nazwa;
    QString miejsce;
    QString data;

};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QVector <Zawody> listaZawodow;

private slots:

    void on_Dodaj_clicked();

    void on_bazaZawodnikow_clicked();

    void on_Wczytaj_clicked();

    void on_listWidget_itemChanged(QListWidgetItem *item);

    //void on_listWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous);

private:
    Ui::MainWindow *ui;
    baza nowabaza;
};

#endif // MAINWINDOW_H
