#ifndef PRODUIT_H
#define PRODUIT_H

#include "Vente/Vente.h"

class Produit
{
private:
    char* libelle;
    char* description;
    int reference;
    int stockDispo;
    Vente * vente;

public:
    Produit(char*, char*, int, int, Vente&);
    virtual ~Produit();

    char* getLibelle();
    char* getDescription();
    int getReference();
    int getStock();
    Vente * getTypeVente();

    void setLibelle(char*);
    void setDescription(char*);
    void setReference(int);
    void setStockDispo(int);
    void setTypeVente(Vente*);

};

#endif // PRODUIT_H
