#ifndef PRODUIT_H
#define PRODUIT_H

class Produit
{
private:
    char* libelle;
    char* description;
    int reference;
    int stockDispo;
    Vente vente;

public:
    Produit();

    char* getLibelle();
    char* getDescription();
    int getReference();
    int getStock();
    Vente getTypeVente();

    void setLibelle(char* libelle);
    void setDescription(char* description);
    void setReference(int reference);
    void setStockDispo(int stock);
    void setTypeVente(Vente vente);

};

#endif // PRODUIT_H
