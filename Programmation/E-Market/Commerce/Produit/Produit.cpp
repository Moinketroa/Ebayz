#include "Produit.h"
#include <iostream>
#include <string>
#include <cstring>
#include <stdarg.h>
#include <vector>

using namespace std;

/************ PUBLIC STATIC ***************/

unsigned int Produit::NOMBRE_PRODUIT = 0;

/************ CONSTRUCTOR *****************/

Produit::Produit()
                 : libelle((char *)""),
                   description((char *)""),
                   idVendeur(0),
                   reference(Produit::NOMBRE_PRODUIT),
                   stockDispo(0),
                   vente(0)
{
    Produit::incrNB_PROD();
    this->lesTags = new LesTags();
}

Produit::Produit(char* lib,
                 char* desc,
                 int idv,
                 int stock,
                 Vente & v)
                  : idVendeur(idv),
                    reference(Produit::NOMBRE_PRODUIT),
                    stockDispo(stock)
{
    Produit::incrNB_PROD();

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

bool Produit::isInLesTags(char * tg){
    return lesTags->isInLesTags(tg);
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

void Produit::rmTag(char * tg){
    this->lesTags->rmTag(tg);
}

void Produit::rmTag(int index){
    this->lesTags->rmTag(index);
}

void Produit::afficherTags(){
    vector<char *> * vc = this->lesTags->getLesTags();

    for (unsigned int i = 0; i < vc->size(); i++){
        cout << vc->at(i) << endl;
    }
}

bool operator==(Produit const& a, Produit const& b){ // ERREUR ?
    return a.getReference() == a.getReference();
}

/************* PRIVATE METHODS **********/

void Produit::incrNB_PROD(){
    Produit::NOMBRE_PRODUIT++;
}

void Produit::decrNB_PROD(){
    Produit::NOMBRE_PRODUIT--;
}

/************* DESTRUCTOR ***************/

Produit::~Produit(){

    Produit::decrNB_PROD();

    delete this->lesTags;
    delete this->vente;

}
