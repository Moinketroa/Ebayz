#include "LesProduits.h"
#include <iostream>
using namespace std;

static int PRODUIT_PAR_PAGE;

/************ CONSTRUCTOR *****************/

LesProduits::LesProduits(){

}

LesProduits::LesProduits(std::list<Produit *> * lp)
                          : lesProduits(lp)
{

}

/************* GET FUNCTION ***************/

Produit * LesProduits::getProduit(int index){
    list<Produit *>::iterator produitVoulu = this->lesProduits->begin();

    for (int i = 0; i < index; i++)
        produitVoulu++;

    //cout << (*produitVoulu)->getDescription << endl;

    return *produitVoulu;
}

list<Produit*> * LesProduits::getLesProduits(){
    return this->lesProduits;
}

LesProduits * LesProduits::getProduitTriAlphabetique(int page){

    list<Produit *> * vp = new list<Produit *>(this->lesProduits->size());
    list<Produit *>::iterator it;

    for (it = this->lesProduits->begin(); it != this->lesProduits->end(); it++)
        vp->push_back(*it);

    vp->sort(LesProduits::compareAlpha);

    return (new LesProduits(vp));
}

LesProduits * LesProduits::getProduitPrixCroissant(int page){
    list<Produit *> * vp = new list<Produit *>(this->lesProduits->size());
    list<Produit *>::iterator it;

    for (it = this->lesProduits->begin(); it != this->lesProduits->end(); it++)
        vp->push_back(*it);

    vp->sort(LesProduits::comparePrixCroi);

    return (new LesProduits(vp));
}

LesProduits * LesProduits::getProduitPrixDecroissant(int page){
    list<Produit *> * vp = new list<Produit *>(this->lesProduits->size());
    list<Produit *>::iterator it;

    for (it = this->lesProduits->begin(); it != this->lesProduits->end(); it++)
        vp->push_back(*it);

    vp->sort(LesProduits::comparePrixDecroi);

    return (new LesProduits(vp));
}

LesProduits * LesProduits::getProduitMotsCles(char** motsCles, int page){

}

/************** OTHER ******************/

void LesProduits::addProduit(Produit * p){
    this->lesProduits->push_back(p);
}

void LesProduits::addProduit(Produit * p, int index){
    list<Produit *>::iterator vecIt = this->lesProduits->begin();

    for (int i = 1; i < index; i++)
        vecIt++;

    this->lesProduits->insert(vecIt, p);
}

/************* PRIVATE METHODS **********/
bool LesProduits::compareAlpha(Produit * first, Produit * second){
    return false;
}

bool LesProduits::comparePrixCroi(Produit * first, Produit * second){
    if (first->getTypeVente()->getPrix() >= second->getTypeVente()->getPrix())
        return true;
    else
        return false;
}

bool LesProduits::comparePrixDecroi(Produit * first, Produit * second){
    if (first->getTypeVente()->getPrix() < second->getTypeVente()->getPrix())
        return true;
    else
        return false;
}

/************* DESTRUCTOR ***************/

LesProduits::~LesProduits(){
    //delete this->lesProduits;
}
