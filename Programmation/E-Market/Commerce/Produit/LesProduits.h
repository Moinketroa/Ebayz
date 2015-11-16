#ifndef LESPRODUITS_H
#define LESPRODUITS_H
#include <iostream>
#include <vector>


class LesProduits
{
private:
    vector<Produit> lesProduits;
public:
    LesProduits();
    Produit getProduit(int index);
    LesProduits getLesProduits();
    void addProduit(Produit p);
    LesProduits getProduitTriAlphabetique(vector<Produit> lesProduits);
    LesProduits getProduitPrixCroissant(vector<Produit> lesProduits);
    LesProduits getProduitPrixDecroissant(vector<Produit> lesProduits);
    LesProduits getProduitMotsCles(char* motsCles,vector<Produit> lesProduits);

};

#endif // LESPRODUITS_H

