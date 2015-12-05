#ifndef ACHETEUR_H
#define ACHETEUR_H

#include "Personne.h"

class Personne;
class Compte;

class Acheteur : public Personne
{
public:
    Acheteur(Compte *);
    virtual ~Acheteur();
};

#endif // ACHETEUR_H
