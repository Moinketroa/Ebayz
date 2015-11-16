#include "VenteEnchere.h"

VenteEnchere::VenteEnchere(float prixDep,
                           char* dateStart,
                           char* dateEnd)
                            : prixDepart(prixDep),
                              dernierPrixPropose(-1.),
                              dateDebut(dateStart),
                              dateFin(dateEnd)
{}

float VenteEnchere::getPrix(){

    if (this->dernierPrixPropose < 0.){

        return this->prixDepart;

    } else {

        return this->dernierPrixPropose;

    }

}

float VenteEnchere::getPrixDepart(){

    return this->prixDepart;

}

float VenteEnchere::getDernierPrixPropose(){

    return this->dernierPrixPropose;

}

String VenteEnchere::getDateDebut(){

    return this->dateDebut;

}


