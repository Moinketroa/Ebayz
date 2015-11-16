#include "mainwindow.h"
#include <QApplication>

#include <iostream>

#include "Commerce/Produit/Vente/VenteNormal.h"
#include "Commerce/Produit/Produit.h"
#include "Commerce/Produit/LesProduits.h"

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    VenteNormal * vn = new VenteNormal(15., (char *)"21/01/2016");

    Produit * p = new Produit((char *)"du reve", (char *)"C\'est du reve", 15026, 15, *vn);

    cout << p->getLibelle() << endl;

    LesProduits * lp = new LesProduits();

    lp->addProduit(p);

    cout << lp->getProduit(0).getDescription() << endl;

    return a.exec();
}
