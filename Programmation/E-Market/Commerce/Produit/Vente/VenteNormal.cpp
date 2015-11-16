#include "VenteNormal.h"

/************ CONSTRUCTOR *****************/

VenteNormal::VenteNormal(float prix,
                         char * delai)
                          : prixDeVente(prix), delaiRetractation(delai)
{}

/************* GET FUNCTION ***************/

float VenteNormal::getPrix(){
    return this->prixDeVente;
}

char * VenteNormal::getDelai(){
    return this->delaiRetractation;
}

/************ SET FUNCTION ****************/

void VenteNormal::setPrix(float prix){
    this->prixDeVente = prix;
}

void VenteNormal::setDelai(char * delai){
    this->delaiRetractation = delai;
}

/************* DESTRUCTOR ***************/

VenteNormal::~VenteNormal(){

}
