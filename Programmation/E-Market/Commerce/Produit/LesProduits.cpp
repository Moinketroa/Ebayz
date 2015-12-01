#include "LesProduits.h"
#include <iostream>
#include <string.h>
#include <ctype.h>

using namespace std;

/************ PUBLIC STATIC ***************/
unsigned int LesProduits::PRODUIT_PAR_PAGE = 2;

/************ PRIVATE STATIC **************/

LesProduits * LesProduits::toutLesProduits = new LesProduits();

/************ CONSTRUCTOR *****************/

LesProduits::LesProduits(){
    this->lesProduits = new list<Produit *>();
}

LesProduits::LesProduits(std::list<Produit *> * lp){
    this->lesProduits = lp;
}

/************* GET FUNCTION ***************/

Produit * LesProduits::getProduit(int index){
    list<Produit *>::iterator produitVoulu = this->lesProduits->begin();

    for (int i = 0; i < index; i++)
        produitVoulu++;

    return *produitVoulu;
}

list<Produit*> * LesProduits::getLesProduits(){
    return this->lesProduits;
}

LesProduits * LesProduits::getToutLesProduits(){
    return LesProduits::toutLesProduits;
}

LesProduits * LesProduits::getProduitTriAlphabetique(int page){

    if (lesProduits->size() > ((page - 1) * LesProduits::PRODUIT_PAR_PAGE)){

        list<Produit *> * vp = this->copyList();

        vp->sort(LesProduits::compareAlpha);

        list<Produit *> * lp = this->copyList(vp,
                                              ((page - 1) * LesProduits::PRODUIT_PAR_PAGE),
                                              (page * LesProduits::PRODUIT_PAR_PAGE) - 1);

        return (new LesProduits(lp));

    } else {

        cout << "Erreur num page" << endl;
        return NULL;
    }

}

LesProduits * LesProduits::getProduitPrixCroissant(int page){

    if (lesProduits->size() >= ((page - 1) * LesProduits::PRODUIT_PAR_PAGE)){

        list<Produit *> * vp = this->copyList();

        vp->sort(LesProduits::comparePrixCroi);

        list<Produit *> * lp = this->copyList(vp,
                                              ((page - 1) * LesProduits::PRODUIT_PAR_PAGE),
                                              (page * LesProduits::PRODUIT_PAR_PAGE) - 1);

        return (new LesProduits(lp));

    } else {

        cout << "Erreur num page" << endl;
        return NULL;
    }
}

LesProduits * LesProduits::getProduitPrixDecroissant(int page){

    if (lesProduits->size() > ((page - 1) * LesProduits::PRODUIT_PAR_PAGE)){

        list<Produit *> * vp = this->copyList();

        vp->sort(LesProduits::comparePrixDecroi);

        list<Produit *> * lp = this->copyList(vp,
                                              ((page - 1) * LesProduits::PRODUIT_PAR_PAGE),
                                              (page * LesProduits::PRODUIT_PAR_PAGE) - 1);

        return (new LesProduits(lp));

    } else {

        cout << "Erreur num page" << endl;
        return NULL;
    }
}

LesProduits * LesProduits::getProduitMotsCles(char* motsCles, int page){ //debut d'implementation avec un seul tag

    LesProduits * lp = new LesProduits();

    for (int i = 0; i < this->lesProduits->size(); i++){
        Produit * p = this->getProduit(i);
        if (p->isInLesTags(motsCles)){
            lp->addProduit(p);
        }
    }

    return lp->getProduitTriAlphabetique(page);

}

bool LesProduits::isInLesProduits(Produit * p){

    bool trouve = false;
    int i = 0;

    while ((i < this->lesProduits->size()) && (!trouve)){
        if (this->getProduit(i) == p){
            trouve = true;
        } else {
            trouve = false;
        }

        i++;
    }

    return trouve;

}

bool LesProduits::isInToutLesProduits(Produit * p){
    return LesProduits::toutLesProduits->isInLesProduits(p);
}

/************** OTHER ******************/

void LesProduits::addProduit(Produit * p){
    this->lesProduits->push_back(p);
    LesProduits::addInToutLesProduits(p);
}

void LesProduits::addProduit(Produit * p, int index){
    list<Produit *>::iterator vecIt = this->lesProduits->begin();

    for (int i = 1; i < index; i++)
        vecIt++;

    this->lesProduits->insert(vecIt, p);
    LesProduits::addInToutLesProduits(p);
}

/************* PRIVATE METHODS **********/
bool LesProduits::compareAlpha(const Produit * first, const Produit * second){    
    if (strcmp(first->getLibelle(), second->getLibelle()) <= 0){
        return true;
    } else {
        return false;
    }

}

bool LesProduits::comparePrixCroi(const Produit * first, const Produit * second){
    if (first->getTypeVente()->getPrix() < second->getTypeVente()->getPrix())
        return true;
    else
        return false;
}

bool LesProduits::comparePrixDecroi(const Produit * first, const Produit * second){
    if (first->getTypeVente()->getPrix() >= second->getTypeVente()->getPrix())
        return true;
    else
        return false;
}

list<Produit*> * LesProduits::copyList(){
    list<Produit *> * vp = new list<Produit *>();
    list<Produit *>::iterator it;

    for (it = this->lesProduits->begin(); it != this->lesProduits->end(); it++)
        vp->push_back(*it);

    return vp;
}



list<Produit*> * LesProduits::copyList(list<Produit*> * lp, int indexDeb, int indexFin){

    if (lp->size() - 1 < (unsigned int)indexFin){
        indexFin = lp->size() - 1;
    }

    list<Produit *> * vp = new list<Produit *>();
    list<Produit *>::iterator it = lp->begin();

    for (int i = 0; i < indexFin + 1; i++){
        if (i < indexDeb ){
            it++;
        }
        else{
            vp->push_back(*it);
            it++;
        }
    }

    return vp;
}

void LesProduits::addInToutLesProduits(Produit * p){
    LesProduits::toutLesProduits->lesProduits->push_back(p);
}

/************* DESTRUCTOR ***************/

LesProduits::~LesProduits(){
    //delete this->lesProduits;
}
