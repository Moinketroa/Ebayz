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
    static LesProduits * toutLesProduits;

    //Methods
    static bool compareAlpha(const Produit*, const Produit*);
    static bool comparePrixCroi(const Produit*, const Produit*);
    static bool comparePrixDecroi(const Produit*, const Produit*);

    static void addInToutLesProduits(Produit *);
    static void rmProduitTLP(int);

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
    Produit * getProduit(int, int); //getProduit(ref, 0) Le premier parametre est la reference et le deuxieme est 0 pour differencier du getProduit(index)
    std::list<Produit*> * getLesProduits();
    static LesProduits * getToutLesProduits();
    LesProduits * getProduitTriAlphabetique(int);
    LesProduits * getProduitPrixCroissant(int);
    LesProduits * getProduitPrixDecroissant(int);
    LesProduits * getProduitMotsCles(char *);
    static bool isInToutLesProduits(int);
    bool isInLesProduits(int);

    void addProduit(Produit *);
    void addProduit(Produit *, int);
    void rmProduit(int);
    void rmProduit(int, int); //rmProduit(ref, 0) pour differencier du rmProduit(index)
};

#endif // LESPRODUITS_H

