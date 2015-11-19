#include "Produit.h"
#include <iostream>

/************ CONSTRUCTOR *****************/

Produit::Produit()
                 : libelle((char *)""),
                   description((char *)""),
                   reference(0),
                   stockDispo(0),
                   vente(0)
{}

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

char* Produit::getLibelle() const{
    return this->libelle;
}

char* Produit::getDescription() const{
    return this->description;
}

int Produit::getReference() const{
    return this->reference;
}

int Produit::getStock() const{
    return this->stockDispo;
}

Vente* Produit::getTypeVente() const{
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
