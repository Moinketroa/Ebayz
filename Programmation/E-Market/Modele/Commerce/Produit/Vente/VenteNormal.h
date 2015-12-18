#ifndef VENTENORMAL_H
#define VENTENORMAL_H

#include "Vente.h"

/** @brief La classe VenteNormal permet de créer
 *         une vente normale.
 **/
class VenteNormal : public Vente {

private:
    //Fields
    /// @brief float prixDeVente
    float prixDeVente;
    /// @brief char * delaiRetractation
    char * delaiRetractation;

public:
    //Constructor Destructor
    /// @brief construsteur d'un vente normal
    VenteNormal(float, char *);
    /// @brief destructeur d'une vente normal
    virtual ~VenteNormal();

    //Methods
    /// @brief recuperer le prix
    virtual float getPrix() const;
    /// @brief recuperer le délai
    char * getDelai() const;
    /// @brief modifier le prix
    /// @param float
    virtual void setPrix(float);
    /// @brief modifier le delais
    /// @param char *
    void setDelai(char *);
};

#endif // VENTENORMAL_H
