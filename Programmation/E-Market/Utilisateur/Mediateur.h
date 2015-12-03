#ifndef MEDIATEUR_H
#define MEDIATEUR_H

#include "Personne.h"

class Personne;

class Mediateur : public Personne
{
public:
    Mediateur(Compte *);
    virtual ~Mediateur();
};

#endif // MEDIATEUR_H
