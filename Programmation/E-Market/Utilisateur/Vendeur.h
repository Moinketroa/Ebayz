#ifndef VENDEUR_H
#define VENDEUR_H

#include "../Commerce/Produit/LesProduits.h"
#include "../Commerce/Produit/Produit.h"
#include "Personne.h"

class Compte;
class Personne;

class Vendeur : public Personne
{
private:
    LesProduits * mesProduits;
public:
    Vendeur(Compte *);
    virtual ~Vendeur();

    LesProduits * getLesProduits();
    Produit * getProduit(int);
    Compte * getCompte();

    void ajouterProduitVenteEnchere(char *, char *, int, float, char *, char *);
    void ajouterProduitVenteNormal(char *, char *, int, float, char *);
    void supprimerProduit(int);
};

#endif // VENDEUR_H
