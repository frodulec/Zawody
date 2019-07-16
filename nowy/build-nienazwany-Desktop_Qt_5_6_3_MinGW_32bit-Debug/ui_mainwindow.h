/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *Dodaj;
    QTextEdit *Kto;
    QTextEdit *Rocznik;
    QTextEdit *Klub;
    QPushButton *bazaZawodnikow;
    QPushButton *Wczytaj;
    QTextBrowser *textBrowser;
    QListWidget *listWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(601, 382);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Dodaj = new QPushButton(centralWidget);
        Dodaj->setObjectName(QStringLiteral("Dodaj"));
        Dodaj->setGeometry(QRect(380, 80, 75, 23));
        Kto = new QTextEdit(centralWidget);
        Kto->setObjectName(QStringLiteral("Kto"));
        Kto->setGeometry(QRect(10, 80, 151, 21));
        Rocznik = new QTextEdit(centralWidget);
        Rocznik->setObjectName(QStringLiteral("Rocznik"));
        Rocznik->setGeometry(QRect(290, 80, 71, 21));
        Klub = new QTextEdit(centralWidget);
        Klub->setObjectName(QStringLiteral("Klub"));
        Klub->setGeometry(QRect(170, 80, 111, 21));
        bazaZawodnikow = new QPushButton(centralWidget);
        bazaZawodnikow->setObjectName(QStringLiteral("bazaZawodnikow"));
        bazaZawodnikow->setGeometry(QRect(20, 280, 101, 31));
        Wczytaj = new QPushButton(centralWidget);
        Wczytaj->setObjectName(QStringLiteral("Wczytaj"));
        Wczytaj->setGeometry(QRect(150, 290, 75, 23));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(280, 140, 221, 111));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(240, 290, 161, 21));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 601, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        Dodaj->setText(QApplication::translate("MainWindow", "Dodaj", Q_NULLPTR));
        bazaZawodnikow->setText(QApplication::translate("MainWindow", "Baza zawodnik\303\263w", Q_NULLPTR));
        Wczytaj->setText(QApplication::translate("MainWindow", "wczytaj", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
