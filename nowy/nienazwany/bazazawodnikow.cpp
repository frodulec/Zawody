#include "bazazawodnikow.h"
//#include "ui_bazazawodnikow.h"

bazazawodnikow::bazazawodnikow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::bazazawodnikow)
{
    ui->setupUi(this);
}

bazazawodnikow::~bazazawodnikow()
{
    delete ui;
}
