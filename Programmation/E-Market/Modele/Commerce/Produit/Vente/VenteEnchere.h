#ifndef VENTEENCHERE_H
#define VENTEENCHERE_H

#include "Vente.h"

/** @brief La classe VenteEnchere permet de
 *         créer une vente aux enchères.
 **/
class VenteEnchere : public Vente {
private:
    //Fields
    /// @brief float prixDepart
    float prixDepart;
    /// @brief float DernierPrixPropose
    float dernierPrixPropose;
    /// @brief char * dateDebut
    char * dateDebut;
    /// @brief char * dateFin
    char * dateFin;

public:
    //Constructor Destructor
    /// @brief constructeur de LesTags
    /// @param float
    /// @param char *
    /// @param char *
    VenteEnchere(float, char *, char *);
    /// @brief destructeur de VenteEnchere
    virtual ~VenteEnchere();

    //Methods
    /// @brief recuperer un prix
    float getPrix() const;
    /// @brief recuperer un prix de départ
    float getPrixDepart() const;
    /// @brief recuperer DernierPrixPropose
    float getDernierPrixPropose() const;
    /// @brief recuperer DateDebut
    char * getDateDebut() const;
    /// @brief recuperer DateFin
    char * getDateFin() const;
    /// @brief modifier le prix
    /// @param float
    void setPrix(float);
    /// @brief modifier le dernierPrixPropose
    /// @param float
    void setDernierPrixPropose(float);
    /// @brief modifier DateDebut
    /// @param char *
    void setDateDebut(char *);
    /// @brief modifier DateFin
    /// @param char *
    void setDateFin(char *);
};

#endif // VENTEENCHERE_H
