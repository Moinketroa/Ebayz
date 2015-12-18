#ifndef COMPTE_H
#define COMPTE_H

#include "Vendeur.h"
#include "Mediateur.h"
#include "Acheteur.h"

class Acheteur;
class Vendeur;
class Mediateur;

class Compte
{
private:
    //Fields
    int id;
    const char * nom;
    const char * prenom;
    const char * pseudo;
    const char * email;
    const char * mdp;
    const char * adresse;
    const char * telephone;
    const char * dateDeNaissance;
    int numeroCarte;
    int cryptogramme;
    const char * dateExp;
    bool connecte;

    Acheteur * acheteur;
    Vendeur * vendeur;
    Mediateur * mediateur;

public:
    //Field
    static int NB_UTILISATEUR;

    //Constructor Destructor
    Compte();
    Compte(const char *,
           const char *,
           const char *,
           const char *,
           const char *,
           const char *,
           const char *,
           const char * = (const char *)"",
           int = 0,
           int = 0,
           const char * = (const char *)"");
    virtual ~Compte();

    //Methods
    static void incrNombreUtilisateur();
    static void decrNombreUtilisateur();

    int getID() const;
    const char *getNom() const;
    const char *getPrenom() const;
    const char *getPseudo() const;
    const char *getEmail() const;
    const char *getMdp() const;
    const char *getAdresse() const;
    const char *getTelephone() const;
    const char *getDateDeNaissance() const;
    int getNumeroCarte() const;
    int getCryptogramme() const;
    const char *getDateExp() const;
    Vendeur * getVendeur();
    Acheteur * getAcheteur();
    Mediateur * getMediateur();

    void setNom(const char *value);
    void setPrenom(const char *value);
    void setPseudo(const char *value);
    void setEmail(const char *value);
    void setMdp(const char *value);
    void setAdresse(const char *value);
    void setTelephone(const char *value);
    void setDateDeNaissance(const char *value);
    void setNumeroCarte(int value);
    void setCryptogramme(int value);
    void setDateExp(const char *value);
    void setConnecte(bool);
    void setVendeur(Vendeur *);
    void setAcheteur(Acheteur *);
    void setMediateur(Mediateur *);

    bool isVendeur();
    bool isAcheteur();
    bool isMediateur();
};

#endif // COMPTE_H
