#include "VenteNormal.h"

VenteNormal::VenteNormal(float prix,
                         char * delai)
                          : prixDeVente(prix), delaiRetractation(delai)
{}

float VenteNormal::getPrix(){
    return this->prixDeVente;
}

char * VenteNormal::getDelai(){
    return this->delaiRetractation;
}

void VenteNormal::setPrix(float prix){
    this->prixDeVente = prix;
}

void VenteNormal::setDelai(char * delai){
    this->delaiRetractation = delai;
}
