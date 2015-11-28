#include "mainwindow.h"
#include <QApplication>

#include <iostream>

#include "Commerce/Produit/Vente/VenteNormal.h"

#include "Commerce/Produit/Produit.h"
#include "Commerce/Produit/LesProduits.h"

#include "Commerce/Produit/Tag/LesTags.h"

using namespace std;

int main(int argc, char *argv[])
{
    //QApplication a(argc, argv);
    //MainWindow w;
    //w.show();

    VenteNormal * vn = new VenteNormal(15., (char *)"21/01/2016");
    VenteNormal * vn1 = new VenteNormal(11., (char *)"21/01/2016");
    VenteNormal * vn2 = new VenteNormal(14., (char *)"21/01/2016");

    Produit * p = new Produit((char *)"common", (char *)"C\'est du reve", 15026, 15, *vn);
    Produit * p1 = new Produit((char *)"openSSL", (char *)"C\'est du reve1", 15026, 15, *vn1);
    Produit * p2 = new Produit((char *)"axel", (char *)"C\'est du reve2", 15026, 15, *vn2);

    LesProduits * lp = new LesProduits();

    p->addTags(2, (char *) "lol", (char *) "lel");
    p->afficherTags();
    p->addTags(1, (char *) "kappa");

    cout << endl;

    cout << LesTags::getSingleton()->getLesTags()->at(0) << endl;
    cout << LesTags::getSingleton()->getLesTags()->at(2) << endl;

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
        for(unsigned int i=0; i< lps->getLesProduits()->size(); i++){
        cout << lps->getProduit(i)->getTypeVente()->getPrix() << endl;
        }
    }

    cout << endl;

    cout << "Tri prix croissant page 2" << endl;
    LesProduits * lps1 = lp->getProduitPrixCroissant(2);

    if (lps1 != NULL){
        for(unsigned int i=0; i< lps1->getLesProduits()->size() ; i++){
        cout << lps1->getProduit(i)->getTypeVente()->getPrix() << endl;
        }
    }

    cout << "\nTri prix décroissant" << endl;
    LesProduits * lps3 = lp->getProduitPrixDecroissant(1);

    if (lps3 != NULL){
        for(unsigned int i=0; i< lps3->getLesProduits()->size() ; i++){
        cout << lps3->getProduit(i)->getTypeVente()->getPrix() << endl;
        }
    }


    cout << "\nTri Alpha" << endl;
    LesProduits * lps4 = lp->getProduitTriAlphabetique(1);
    if (lps4 != NULL){
        for(unsigned int i=0; i< lps4->getLesProduits()->size() ; i++){
        cout << lps4->getProduit(i)->getLibelle() << endl;
        }
    }

    //return a.exec();
}
