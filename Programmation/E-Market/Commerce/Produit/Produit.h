#ifndef PRODUIT_H
#define PRODUIT_H

#include "Vente/Vente.h"

class Produit
{
private:
    //Fields
    char* libelle;
    char* description;
    int reference;
    int stockDispo;
    Vente * vente;

public:
    //Constructor Destructor
    Produit();
    Produit(char*, char*, int, int, Vente&);
    virtual ~Produit();

    //Methods
    char* getLibelle() const;
    char* getDescription() const;
    int getReference() const;
    int getStock() const;
    Vente * getTypeVente() const;

    void setLibelle(char*);
    void setDescription(char*);
    void setReference(int);
    void setStockDispo(int);
    void setTypeVente(Vente*);

};

#endif // PRODUIT_H
