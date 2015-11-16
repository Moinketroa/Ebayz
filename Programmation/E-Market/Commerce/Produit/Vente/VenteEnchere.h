#ifndef VENTEENCHERE_H
#define VENTEENCHERE_H

#include "Vente.h"

class VenteEnchere : public Vente {
private:
    float prixDepart;
    float dernierPrixPropose;
    char * dateDebut;
    char * dateFin;
public:
    VenteEnchere(float, char *, char *);
    virtual ~VenteEnchere();

    float getPrix();
    float getPrixDepart();
    float getDernierPrixPropose();
    char * getDateDebut();
    char * getDateFin();
    void setPrixDepart(float);
    void setDernierPrixPropose(float);
    void setDateDebut(char *);
    void setDateFin(char *);
};

#endif // VENTEENCHERE_H
