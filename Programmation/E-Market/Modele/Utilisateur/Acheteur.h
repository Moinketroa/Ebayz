#ifndef ACHETEUR_H
#define ACHETEUR_H

#include "Personne.h"

class Personne;
class Compte;

/// @brief classe qui gerant le status d'un utilisateur (acheteur)
class Acheteur : public Personne
{
public:
    /// @brief constructeur de acheteur
    /// @param Compte *
    Acheteur(Compte *);
    /// @brief destructeur de Acheteur
    virtual ~Acheteur();
};

#endif // ACHETEUR_H
