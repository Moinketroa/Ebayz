#ifndef COMPTE_H
#define COMPTE_H

#include "Vendeur.h"
#include "Acheteur.h"
#include "Mediateur.h"

class Compte
{
private:
    //Fields
    int id;
    char * nom;
    char * prenom;
    char * pseudo;
    char * email;
    char * mdp;
    char * adresse;
    char * telephone;
    char * dateDeNaissance;
    int numeroCarte;
    int cryptogramme;
    char * dateExp;
    bool connecte;

    Personne * typePersonne[3]; //0 = Vendeur, 1 = Acheteur, 2 = Mediateur
public:
    //Field
    static int NB_UTILISATEUR;

    //Constructor Destructor
    Compte();
    Compte(char *,
           char *,
           char *,
           char *,
           char *,
           char *,
           char *,
           char * = (char *)"",
           int = 0,
           int = 0,
           char * = (char *)"");
    virtual ~Compte();

    //Methods
    static void incrNombreUtilisateur();
    static void decrNombreUtilisateur();

    int getID() const;
    char *getNom() const;
    char *getPrenom() const;
    char *getPseudo() const;
    char *getEmail() const;
    char *getMdp() const;
    char *getAdresse() const;
    char *getTelephone() const;
    char *getDateDeNaissance() const;
    int getNumeroCarte() const;
    int getCryptogramme() const;
    char *getDateExp() const;

    void setNom(char *value);
    void setPrenom(char *value);
    void setPseudo(char *value);
    void setEmail(char *value);
    void setMdp(char *value);
    void setAdresse(char *value);
    void setTelephone(char *value);
    void setDateDeNaissance(char *value);
    void setNumeroCarte(int value);
    void setCryptogramme(int value);
    void setDateExp(char *value);
    void setConnecte(bool);
    void setVendeur(Vendeur *);
    void setAcheteur(Acheteur *);
    void setMediateur(Mediateur *);

    bool isVendeur();
    bool isAcheteur();
    bool isMediateur();
};

#endif // COMPTE_H
