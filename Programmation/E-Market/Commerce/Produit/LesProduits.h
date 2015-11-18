#ifndef LESPRODUITS_H
#define LESPRODUITS_H
#include <iostream>
#include <list>

#include "Produit.h"

class LesProduits
{    
private:
    std::list<Produit*> * lesProduits;

    static bool compareAlpha(Produit*, Produit*);
    static bool comparePrixCroi(Produit*, Produit*);
    static bool comparePrixDecroi(Produit*, Produit*);

public:

    static int PRODUIT_PAR_PAGE;

    LesProduits();
    LesProduits(std::list<Produit *> *);
    ~LesProduits();

    Produit * getProduit(int);
    std::list<Produit*> * getLesProduits();
    LesProduits * getProduitTriAlphabetique(int);
    LesProduits * getProduitPrixCroissant(int);
    LesProduits * getProduitPrixDecroissant(int);
    LesProduits * getProduitMotsCles(char **, int);

    void addProduit(Produit *);
    void addProduit(Produit *, int);
};

#endif // LESPRODUITS_H

