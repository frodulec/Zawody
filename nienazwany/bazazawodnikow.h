#ifndef BAZAZAWODNIKOW_H
#define BAZAZAWODNIKOW_H

#include <QWidget>

namespace Ui {
class bazazawodnikow;
}

class bazazawodnikow : public QWidget
{
    Q_OBJECT

public:
    explicit bazazawodnikow(QWidget *parent = 0);
    ~bazazawodnikow();

private:
    Ui::bazazawodnikow *ui;
};

#endif // BAZAZAWODNIKOW_H
