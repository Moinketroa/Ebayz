#ifndef VENDEUR_H
#define VENDEUR_H

#include "../Commerce/Produit/LesProduits.h"
#include "../Commerce/Produit/Produit.h"
#include "Personne.h"

class Compte;
class Personne;

/// @brief classe
class Vendeur : public Personne
{
private:
    /// @brief attribut LesProduits
    LesProduits * mesProduits;
public:
    /// @brief constructeur de Vendeur
    /// @param Compte *
    Vendeur(Compte *);
    /// @brief destructeur de Vendeur
    virtual ~Vendeur();

    /// @brief retourne les produits du Vendeur
    /// @return produits du vendeur
    LesProduits * getLesProduits();
    /// @brief retourne un produit
    /// @param index
    /// @return un produit
    Produit * getProduit(int);
    /// @brief retourne un compte
    /// @return compte
    Compte * getCompte();

    /// @brief ajout d'un produit, vente enchere
    /// @param libelle
    /// @param stockDispo
    /// @param prixDep
    /// @param dateDep
    /// @param dateFin
    void ajouterProduitVenteEnchere(char *, char *, int, float, char *, char *);

    void ajouterProduitVenteNormal(char *, char *, int, float, char *);

    void ajouterProduitVenteEnchere(Produit *);
    void ajouterProduitVenteNormal(Produit *);

    void supprimerProduit(int);
};

#endif // VENDEUR_H
