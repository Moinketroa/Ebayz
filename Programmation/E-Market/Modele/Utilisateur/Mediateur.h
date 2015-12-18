#ifndef MEDIATEUR_H
#define MEDIATEUR_H

#include "Personne.h"

class Personne;
class Compte;

/// @brief classe qui gerant le status d'un utilisateur (mediateur)
class Mediateur : public Personne
{
public:
    /// @brief constructeur de mediateur
    /// @param Compte *
    Mediateur(Compte *);
    /// @destructeur de mediateur
    virtual ~Mediateur();
};

#endif // MEDIATEUR_H
