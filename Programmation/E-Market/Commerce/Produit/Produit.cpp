#include "Produit.h"

/************ CONSTRUCTOR *****************/

Produit::Produit(char* lib,
                 char* desc,
                 int ref,
                 int stock,
                 Vente & v)
                  : libelle(lib),
                    description(desc),
                    reference(ref),
                    stockDispo(stock)
{
    this->vente = &v;
}

/************* GET FUNCTION ***************/

char* Produit::getLibelle() {
    return this->libelle;
}

char* Produit::getDescription() {
    return this->description;
}

int Produit::getReference() {
    return this->reference;
}

int Produit::getStock() {
    return this->stockDispo;
}

Vente* Produit::getTypeVente() {
    return this->vente;
}

/************ SET FUNCTION ****************/

void Produit::setLibelle(char* libelle) {
    this->libelle = libelle;
}

void Produit::setDescription(char* description) {
    this->description = description;
}

void Produit::setReference(int reference) {
    this->reference = reference;
}

void Produit::setStockDispo(int stock) {
    this->stockDispo = stock;
}

void Produit::setTypeVente(Vente * vente) {
    this->vente = vente;
}


/************* DESTRUCTOR ***************/

Produit::~Produit(){

    delete this->vente;

}
