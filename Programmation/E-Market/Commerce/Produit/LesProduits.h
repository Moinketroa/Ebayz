#ifndef LESPRODUITS_H
#define LESPRODUITS_H
#include <iostream>
#include <list>

#include "Produit.h"

class LesProduits
{    
private:
    //Fields
    std::list<Produit*> * lesProduits;

    //Methods
    static bool compareAlpha(const Produit*, const Produit*);
    static bool comparePrixCroi(const Produit*, const Produit*);
    static bool comparePrixDecroi(const Produit*, const Produit*);

    std::list<Produit*> * copyList();
    std::list<Produit*> * copyList(std::list<Produit*> *, int, int);

public:
    //Fields
    static unsigned int PRODUIT_PAR_PAGE;

    //Constructor Destructor
    LesProduits();
    LesProduits(std::list<Produit *> *);
    ~LesProduits();

    //Methods
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

