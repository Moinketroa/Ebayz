#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Modele/Modele.h"

MainWindow::MainWindow(QWidget *parent)
                        : QMainWindow(parent),
                          ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Modele * m = new Modele(ui);
}

MainWindow::~MainWindow()
{
    delete ui;
}
