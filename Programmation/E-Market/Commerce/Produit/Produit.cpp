#include "Produit.h"
#include <iostream>
#include <string>
#include <cstring>

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
                  : reference(ref),
                    stockDispo(stock)
{
    std::string slib = lib;
    slib[0] = (char) toupper(slib[0]);
    char * clib = strdup(slib.c_str());

    std::string sdesc = desc;
    sdesc[0] = (char) toupper(sdesc[0]);
    char * cdesc = strdup(sdesc.c_str());

    this->libelle = clib;
    this->description = cdesc;
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
