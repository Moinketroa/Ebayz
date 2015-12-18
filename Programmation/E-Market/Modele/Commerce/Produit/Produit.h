#ifndef PRODUIT_H
#define PRODUIT_H

#include "Vente/Vente.h"
#include "Tag/LesTags.h"

class Produit
{
private:
    //Fields
    /// @brief char *  libelle
    char* libelle;
    /// @brief char *  description
    char* description;
    /// @brief int idVendeur
    int idVendeur;
    /// @brief int reference
    int reference;
    /// @brief int stockDispo
    int stockDispo;
    /// @brief Vente * vente
    Vente * vente;
    /// @brief LesTags tags
    LesTags * lesTags;

    //Methods
    /// @brief fonction incrementant NOMBRE_PRODUIT
    ///        lors de la création d'un produit
    static void incrNB_PROD();
    /// @brief fonction decrementant NOMBRE_PRODUIT
    ///        lors de la suppression d'un produit
    static void decrNB_PROD();

public:
    //Static Fields
    /// @brief int NOMBRE_PRODUIT
    ///        ce champs represente le nombre de produits
    static unsigned int NOMBRE_PRODUIT;

    //Constructor Destructor
    /// @brief constructeur d'un produit
    Produit();
    /// @brief constructeur d'un produit
    /// @param char *
    /// @param char *
    /// @param int
    /// @param int
    /// @param Vente
    Produit(char*, char*, int, int, Vente&);
    /// @brief destructeur du produit
    virtual ~Produit();

    //Methods
    /// @brief recuperer le libelle
    char* getLibelle() const;
    /// @brief recuperer la description
    char* getDescription() const;
    /// @brief recuperer la reference
    int getReference() const;
    /// @brief recuperer le stock
    int getStock() const;
    /// @brief recuperer le type de vente
    Vente * getTypeVente() const;
    /// @brief verifie si le tag est dans l'objet
    /// @param char *
    bool isInLesTags(char *);
/// @brief modifier le libelle
/// @param char *
    void setLibelle(char*);
    /// @brief modifier la description
    /// @param char *
    void setDescription(char*);
    /// @brief modifier la reference
    /// @param int
    void setReference(int);
    /// @brief modifier le stock
    /// @param stock
    void setStockDispo(int);
    /// @brief modifier le type de vente
    /// @param Vente *
    void setTypeVente(Vente*);
/// @brief ajouter un tag
/// @param int
/// @param ...
    void addTags(int nbArgs, ...);
    /// @brief supprimer un tag
    /// @param int
    void rmTag(int);
    /// @brief supprimer un tag
    /// @param char *
    void rmTag(char *);

    //tempo
    /// @brief pour le debug des tags
    void afficherTags();

};

#endif // PRODUIT_H
