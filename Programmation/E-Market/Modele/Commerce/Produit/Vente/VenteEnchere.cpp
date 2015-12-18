#include "VenteEnchere.h"

/************ CONSTRUCTOR *****************/

VenteEnchere::VenteEnchere(float prixDep,
                           char* dateStart,
                           char* dateEnd)
                            : prixDepart(prixDep),
                              dernierPrixPropose(-1.),
                              dateDebut(dateStart),
                              dateFin(dateEnd)
{}

/************* GET FUNCTION ***************/

float VenteEnchere::getPrix() const{

    if (this->dernierPrixPropose < 0.){

        return this->prixDepart;

    } else {

        return this->dernierPrixPropose;

    }

}

float VenteEnchere::getPrixDepart() const{

    return this->prixDepart;

}

float VenteEnchere::getDernierPrixPropose() const{

    return this->dernierPrixPropose;

}

char * VenteEnchere::getDateDebut() const{

    return this->dateDebut;

}

char * VenteEnchere::getDateFin() const{

    return this->dateFin;

}

/************ SET FUNCTION ****************/

void VenteEnchere::setPrix(float nPrix){

    this->prixDepart = nPrix;

}

void VenteEnchere::setDernierPrixPropose(float nPrixPropose){

    this->dernierPrixPropose = nPrixPropose;

}

void VenteEnchere::setDateDebut(char * nDateDebut){

    this->dateDebut = nDateDebut;

}

/************* DESTRUCTOR ***************/

VenteEnchere::~VenteEnchere(){

}
