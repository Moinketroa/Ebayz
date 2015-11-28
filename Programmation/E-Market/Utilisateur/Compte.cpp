#include "Compte.h"

int Compte::NB_UTILISATEUR = 0;

/************ CONSTRUCTOR *****************/

Compte::Compte(){
    Compte::incrNombreUtilisateur();
}

Compte::Compte(char * pnom,
               char * pprenom,
               char * ppseudo,
               char * pemail,
               char * pmdp,
               char * padresse,
               char * ptelephone,
               char * pdDN,
               int pnCarte,
               int pcryto,
               char * pdateExp)
                : id(Compte::NB_UTILISATEUR),
                  nom(pnom),
                  prenom(pprenom),
                  pseudo(ppseudo),
                  email(pemail),
                  mdp(pmdp),
                  adresse(padresse),
                  telephone(ptelephone),
                  dateDeNaissance(pdDN),
                  numeroCarte(pnCarte),
                  cryptogramme(pcryto),
                  dateExp(pdateExp)
{
    Compte::incrNombreUtilisateur();
}

/************* GET FUNCTION ***************/

char *Compte::getNom() const
{
    return nom;
}

char *Compte::getPrenom() const
{
    return prenom;
}

char *Compte::getPseudo() const
{
    return pseudo;
}

char *Compte::getEmail() const
{
    return email;
}

char *Compte::getMdp() const
{
    return mdp;
}

char *Compte::getAdresse() const
{
    return adresse;
}

char *Compte::getTelephone() const
{
    return telephone;
}

char *Compte::getDateDeNaissance() const
{
    return dateDeNaissance;
}

int Compte::getNumeroCarte() const
{
    return numeroCarte;
}

int Compte::getCryptogramme() const
{
    return cryptogramme;
}

char *Compte::getDateExp() const
{
    return dateExp;
}

/************ SET FUNCTION ****************/

void Compte::setNom(char *value)
{
    nom = value;
}

void Compte::setPrenom(char *value)
{
    prenom = value;
}

void Compte::setPseudo(char *value)
{
    pseudo = value;
}

void Compte::setEmail(char *value)
{
    email = value;
}

void Compte::setMdp(char *value)
{
    mdp = value;
}

void Compte::setAdresse(char *value)
{
    adresse = value;
}

void Compte::setTelephone(char *value)
{
    telephone = value;
}

void Compte::setDateDeNaissance(char *value)
{
    dateDeNaissance = value;
}

void Compte::setNumeroCarte(int value)
{
    numeroCarte = value;
}

void Compte::setCryptogramme(int value)
{
    cryptogramme = value;
}

void Compte::setDateExp(char *value)
{
    dateExp = value;
}

/************* STATIC METHODS ***********/

void Compte::incrNombreUtilisateur(){
    Compte::NB_UTILISATEUR = Compte::NB_UTILISATEUR + 1;
}

void Compte::decrNombreUtilisateur(){
    Compte::NB_UTILISATEUR = Compte::NB_UTILISATEUR - 1;
}

/************* DESTRUCTOR ***************/

Compte::~Compte(){
    Compte::decrNombreUtilisateur();
}


