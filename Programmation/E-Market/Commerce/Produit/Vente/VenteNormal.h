#ifndef VENTENORMAL_H
#define VENTENORMAL_H

#include "Vente.h"

class VenteNormal : public Vente {

private:
    float prixDeVente;
    char * delaiRetractation;

public:
    VenteNormal(float, char *);
    virtual ~VenteNormal();

    float getPrix();
    char * getDelai();
    void setPrix(float);
    void setDelai(char *);
};

#endif // VENTENORMAL_H
