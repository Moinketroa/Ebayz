#ifndef ACHETEUR_H
#define ACHETEUR_H

#include "Personne.h"

class Personne;

class Acheteur : public Personne
{
public:
    Acheteur(Compte *);
    virtual ~Acheteur();
};

#endif // ACHETEUR_H
