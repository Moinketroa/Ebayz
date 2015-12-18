#ifndef VENTEENCHERE_H
#define VENTEENCHERE_H

#include "Vente.h"

class VenteEnchere : public Vente {
private:
    //Fields
    float prixDepart;
    float dernierPrixPropose;
    char * dateDebut;
    char * dateFin;

public:
    //Constructor Destructor
    VenteEnchere(float, char *, char *);
    virtual ~VenteEnchere();

    //Methods
    float getPrix() const;
    float getPrixDepart() const;
    float getDernierPrixPropose() const;
    char * getDateDebut() const;
    char * getDateFin() const;

    void setPrix(float);
    void setDernierPrixPropose(float);
    void setDateDebut(char *);
    void setDateFin(char *);
};

#endif // VENTEENCHERE_H
