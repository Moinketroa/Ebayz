#ifndef PERSONNE_H
#define PERSONNE_H


class Compte;

class Personne
{
protected:
    Compte * monCompte;
public:
    Personne(Compte *);
    virtual ~Personne();
};

#endif // PERSONNE_H
