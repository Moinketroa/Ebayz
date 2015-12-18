#ifndef PERSONNE_H
#define PERSONNE_H


class Compte;

/// @brief classe abstraite Personne qui gere les personnes
class Personne
{
protected:
    /// @brief attribut Compte
    Compte * monCompte;
public:
    /// @brief constructeur de perssonee
    /// @param Compte *
    Personne(Compte *);
    /// @brief destructeur de personne
    virtual ~Personne();
};

#endif // PERSONNE_H
