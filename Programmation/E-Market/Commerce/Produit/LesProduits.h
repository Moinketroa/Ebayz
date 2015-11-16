#ifndef LESPRODUITS_H
#define LESPRODUITS_H
#include <iostream>
#include <vector>

#include "Produit.h"

class LesProduits
{
private:
    std::vector<Produit> lesProduits;
public:
    LesProduits();
    ~LesProduits();

    Produit getProduit(int index);
    std::vector<Produit> getLesProduits();
    void addProduit(Produit p);
    LesProduits getProduitTriAlphabetique(std::vector<Produit> lesProduits);
    LesProduits getProduitPrixCroissant(std::vector<Produit> lesProduits);
    LesProduits getProduitPrixDecroissant(std::vector<Produit> lesProduits);
    LesProduits getProduitMotsCles(char* motsCles,std::vector<Produit> lesProduits);

};

#endif // LESPRODUITS_H

