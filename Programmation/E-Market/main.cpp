#include "mainwindow.h"
#include <QApplication>

#include <iostream>

#include "Commerce/Produit/Vente/VenteNormal.h"

#include "Commerce/Produit/Produit.h"
#include "Commerce/Produit/LesProduits.h"

#include "Commerce/Produit/Tag/LesTags.h"

#include "Utilisateur/LesComptes.h"
#include "Utilisateur/Compte.h"

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
    LesProduits * lps5 = lp->getProduitMotsCles((char*)"lel", 1);
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

    cout << "\nSuppression d\'un produit (p) et donc des mot cles. Nombre_Produit : " << Produit::NOMBRE_PRODUIT << endl;
    lp->rmProduit(0, 0);
    cout << "Nombre_Produit après deletion : " << Produit::NOMBRE_PRODUIT << endl;
    cout << "nb de lol : "      << LesTags::getNbTag((char *) "lol") << endl;
    cout << "nb de lel : "      << LesTags::getNbTag((char *) "lel") << endl << endl;

    int err = LesComptes::inscription("Yaffa", "Elie",
                                      "B2OBA",
                                      "le_duc@booba.fr",
                                      "wesh_morray",
                                      "1, rue Booba, Boulogne",
                                      "09/09/1976",
                                      true,
                                      true,
                                      true);

    cout << "\nCreation de session. (Rappel erreur : 1 = pseudo deja pris, 2 = email deja pris, 3 = les deux deja pris)" << endl;
    cout << "\nCreation du compte de Booba" << endl;
    cout << "Erreur creation : " << err << endl;

    err = LesComptes::inscription("Mkouboi", "Housni",
                                  "B2OBA",
                                  "comores@rohff.fr",
                                  "wesh_zoulette",
                                  "2, rue Booba, Boulogne",
                                  "15/09/1977",
                                  true,
                                  true,
                                  false);

    cout << "\nCreation du compte de Rohff, mais comme il veut le copier, " << endl;
    cout << "Erreur creation : " << err << endl;

    err = LesComptes::inscription("Mehadji", "Mohamed",
                                  "Morsay",
                                  "le_duc@booba.fr",
                                  "cliquez_cliquez",
                                  "1, rue de la Zehef attitude, Morsay-ville",
                                  "19/08/1980",
                                  false,
                                  true,
                                  false);

    cout << "\nCreation du compte de Morsay, mais vu qu'il veut pas de pub, il prend l'adresse de booba, mais y'a une erreur" << endl;
    cout << "Erreur creation : " << err << endl;

    err = LesComptes::inscription("De Seilly", "Jean-Walid",
                                  "B2OBA",
                                  "le_duc@booba.fr",
                                  "ouaiche_la_strite",
                                  "635, rue Nicolas Sarkozy, Neuilly-Sur-Seine",
                                  "29/02/1999",
                                  false,
                                  true,
                                  false);

    cout << "\nCreation du compte de Jean-Walid, Tru3 h4cK3Rz professionel qui veut creer son compte Booba à lui, mais se plante lamentablement" << endl;
    cout << "Erreur creation : " << err << endl;

    err = LesComptes::inscription("Mkouboi", "Housni",
                                  "ROH2F",
                                  "comores@rohff.fr",
                                  "wesh_zoulette",
                                  "2, rue Booba, Boulogne",
                                  "15/09/1977",
                                  true,
                                  true,
                                  false);

    cout << "\nCreation du compte de Rohff, mais avec un pseudo original" << endl;
    cout << "Erreur creation : " << err << endl;

    cout << "\nTests de connexion. (Rappel erreur : 1 = pseudo inexistant, 2 = mdp incorrect, 3 = un compte est deja connecte)" << endl;

    err = LesComptes::authentification("Morsay", "cliquez_cliquez");

    cout << "\nConnexion au compte de morsay, mais est inexistant" << endl;
    cout << "Erreur creation : " << err << endl;

    err = LesComptes::authentification("B2OBA", "ouaiche_la_strite");

    cout << "\nConnexion au compte de booba, mais la force brute de Jean-Walid est inefficace" << endl;
    cout << "Erreur creation : " << err << endl;

    err = LesComptes::authentification("ROH2F", "wesh_zoulette");

    cout << "\nConnexion au compte de rohff" << endl;
    cout << "Erreur creation : " << err << endl;

    err = LesComptes::authentification("B2OBA", "wesh_morray");

    cout << "\nConnexion au compte de booba" << endl;
    cout << "Erreur creation : " << err << endl;

    Compte * compteActif = LesComptes::compteConnecte;

    cout << "\nPseudo compte actif : " << compteActif->getPseudo() << endl;

    cout << "\nDeconnexion" << endl;
    LesComptes::deconnexion();

    err = LesComptes::authentification("B2OBA", "wesh_morray");

    cout << "\nConnexion au compte de booba" << endl;
    cout << "Erreur creation : " << err << endl;

    compteActif = LesComptes::compteConnecte;

    cout << "\nPseudo compte actif : " << compteActif->getPseudo() << endl;

    err = LesComptes::authentification("B2OBA", "wesh_morray");

    cout << "\nConnexion au compte de booba" << endl;
    cout << "Erreur creation : " << err << endl;

    Vendeur * v = LesComptes::compteConnecte->getVendeur();

    cout << "\nBooba est-il vendeur ? " << LesComptes::compteConnecte->isVendeur() << endl;

    cout << "\nBooba vends-t-il quelque chose ? " << (v->getLesProduits()->getLesProduits()->size() != 0) << endl;

    cout << "\nAjout de produit en vente normale" << endl;

    v->ajouterProduitVenteNormal("delivree",
                                 "libelle, delivree, je ne vendrais plus jamais",
                                 10,
                                 15.50,
                                 "21/01/2016");

    cout << "\nBooba vends-t-il quelque chose ? " << (v->getLesProduits()->getLesProduits()->size() != 0) << endl;


    //return a.exec();

}
