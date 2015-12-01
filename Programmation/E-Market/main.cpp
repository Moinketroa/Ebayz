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
    p1->addTags(1, (char *) "lol");
    p2->addTags(1, (char *) "B2OBA"); //c l'ai vray baille tavu

    cout << endl;

    cout << "nb de lol : "      << LesTags::getNbTag((char *) "lol") << endl;
    cout << "nb de kappa : "    << LesTags::getNbTag((char *) "kappa") << endl;
    cout << "nb de B2OBA : "    << LesTags::getNbTag((char *) "B2OBA") <<  "  Y\'en a qu\'un seul des duc tu pe pa test tavu" << endl;
    cout << "nb de lel : "      << LesTags::getNbTag((char *) "lel") << endl << endl;

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

    cout << "\nRecherche Mot Clé (experimental ne marche qu'avec un seul mot)" << endl;
    LesProduits * lps5 = lp->getProduitMotsCles("lel", 1);
    if (lps5 != NULL){
        for(unsigned int i=0; i< lps5->getLesProduits()->size() ; i++){
        cout << lps5->getProduit(i)->getLibelle() << endl;
        }
    }

    p2->rmTag((char *) "B2OBA");
    cout << "\nSuppression d\'un tag dans p2 (supression de B2OBA (Pour laisser plasse à LAFOUINE, KAARIS, GRADUR ET KOLONAYL REYEEEEEL))" << endl;
    cout << "Tags dans p2 : ";
    p2->afficherTags();
    cout << "\nnb de B2OBA : "      << LesTags::getNbTag((char *) "B2OBA") << endl;

    delete p;
    cout << "\nSuppression d\'un produit (p) et donc des mot cles" << endl;
    cout << "nb de lol : "      << LesTags::getNbTag((char *) "lol") << endl;
    cout << "nb de lel : "      << LesTags::getNbTag((char *) "lel") << endl << endl;
    //return a.exec();
}
