#ifndef VENTEENCHERE_H
#define VENTEENCHERE_H

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
    float getDernierPrixPropose();
    String getDateDebut();
    String getDateFin();
    void setPrix(float);
    void setDernierPrixPropose(float);
    void setDateDebut(char *);
    void setDateFin(char *);
};

#endif // VENTEENCHERE_H
