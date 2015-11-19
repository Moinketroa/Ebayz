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
    VenteNormal * vn1 = new VenteNormal(14., (char *)"21/01/2016");
    VenteNormal * vn2 = new VenteNormal(11., (char *)"21/01/2016");

    Produit * p = new Produit((char *)"du reve", (char *)"C\'est du reve", 15026, 15, *vn);
    Produit * p1 = new Produit((char *)"du reve", (char *)"C\'est du reve1", 15026, 15, *vn1);
    Produit * p2 = new Produit((char *)"du reve", (char *)"C\'est du reve2", 15026, 15, *vn2);

    LesProduits * lp = new LesProduits();

    lp->addProduit(p);
    lp->addProduit(p1);
    lp->addProduit(p2);

    cout << "Non trié" << endl;
    cout << lp->getProduit(0)->getTypeVente()->getPrix() << endl;
    cout << lp->getProduit(1)->getTypeVente()->getPrix() << endl;
    cout << lp->getProduit(2)->getTypeVente()->getPrix() << endl << endl;


    cout << "Tri prix croissant page 1" << endl;
    LesProduits * lps = lp->getProduitPrixCroissant(1);

    if (lps != NULL){
        cout << lps->getProduit(0)->getTypeVente()->getPrix() << endl;
        cout << lps->getProduit(1)->getTypeVente()->getPrix() << endl;
        cout << lps->getProduit(2)->getTypeVente()->getPrix() << endl << endl;
    }

    cout << "Tri prix croissant page 2" << endl;
    LesProduits * lps2 = lp->getProduitPrixCroissant(2);

    if (lps2 != NULL){
        cout << lps->getProduit(0)->getTypeVente()->getPrix() << endl;
        cout << lps->getProduit(1)->getTypeVente()->getPrix() << endl;
        cout << lps->getProduit(2)->getTypeVente()->getPrix() << endl << endl;
    }
    //return a.exec();
}
