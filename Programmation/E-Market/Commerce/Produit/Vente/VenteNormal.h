#ifndef VENTENORMAL_H
#define VENTENORMAL_H

#include "Vente.h"

class VenteNormal : public Vente {

private:
    //Fields
    float prixDeVente;
    char * delaiRetractation;

public:
    //Constructor Destructor
    VenteNormal(float, char *);
    virtual ~VenteNormal();

    //Methods
    virtual float getPrix() const;
    char * getDelai() const;

    virtual void setPrix(float);
    void setDelai(char *);
};

#endif // VENTENORMAL_H
