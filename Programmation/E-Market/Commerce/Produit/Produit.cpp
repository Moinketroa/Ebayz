#include "Produit.h"
#include <iostream>
#include <string>
#include <cstring>
#include <stdarg.h>
#include <vector>

using namespace std;

/************ CONSTRUCTOR *****************/

Produit::Produit()
                 : libelle((char *)""),
                   description((char *)""),
                   reference(0),
                   stockDispo(0),
                   vente(0)
{
    this->lesTags = new LesTags();
}

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

    this->lesTags = new LesTags();

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

/************* OTHERS *******************/

void Produit::addTags(int nbArgs, ...){
    va_list args;
    va_start(args, nbArgs);

    int i;

    for (i = 0; i < nbArgs; i++){
        this->lesTags->addTag(va_arg(args, char *));
    }

    va_end(args);
}

void Produit::afficherTags(){
    vector<char *> * vc = this->lesTags->getLesTags();

    for (int i = 0; i < vc->size(); i++){
        cout << vc->at(i) << endl;
    }
}

/************* DESTRUCTOR ***************/

Produit::~Produit(){

    delete this->vente;

}
