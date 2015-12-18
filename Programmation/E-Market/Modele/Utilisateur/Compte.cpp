#include "Compte.h"
#include <cstddef>

int Compte::NB_UTILISATEUR = 0;

/************ CONSTRUCTOR *****************/

Compte::Compte(){
    Compte::incrNombreUtilisateur();

    acheteur = NULL;
    vendeur = NULL;
    mediateur = NULL;
}

Compte::Compte(const char * pnom,
               const char * pprenom,
               const char * ppseudo,
               const char * pemail,
               const char * pmdp,
               const char * padresse,
               const char * pdDN,
               const char * ptelephone,
               int pnCarte,
               int pcryto,
               const char * pdateExp)
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
                  dateExp(pdateExp),
                  connecte(false)
{
    Compte::incrNombreUtilisateur();

    acheteur = NULL;
    vendeur = NULL;
    mediateur = NULL;
}

/************* GET FUNCTION ***************/

int Compte::getID() const
{
    return id;
}

const char *Compte::getNom() const
{
    return nom;
}

const char *Compte::getPrenom() const
{
    return prenom;
}

const char *Compte::getPseudo() const
{
    return pseudo;
}

const char *Compte::getEmail() const
{
    return email;
}

const char *Compte::getMdp() const
{
    return mdp;
}

const char *Compte::getAdresse() const
{
    return adresse;
}

const char *Compte::getTelephone() const
{
    return telephone;
}

const char *Compte::getDateDeNaissance() const
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

const char *Compte::getDateExp() const
{
    return dateExp;
}

Vendeur * Compte::getVendeur(){
    return this->vendeur;
}

Acheteur * Compte::getAcheteur(){
    return this->acheteur;
}

Mediateur * Compte::getMediateur(){
    return this->mediateur;
}

bool Compte::isVendeur(){
    return (this->vendeur != NULL);
}

bool Compte::isAcheteur(){
    return (this->acheteur != NULL);
}

bool Compte::isMediateur(){
    return (this->mediateur != NULL);
}

/************ SET FUNCTION ****************/

void Compte::setNom(const char *value)
{
    nom = value;
}

void Compte::setPrenom(const char *value)
{
    prenom = value;
}

void Compte::setPseudo(const char *value)
{
    pseudo = value;
}

void Compte::setEmail(const char *value)
{
    email = value;
}

void Compte::setMdp(const char *value)
{
    mdp = value;
}

void Compte::setAdresse(const char *value)
{
    adresse = value;
}

void Compte::setTelephone(const char *value)
{
    telephone = value;
}

void Compte::setDateDeNaissance(const char *value)
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

void Compte::setDateExp(const char *value)
{
    dateExp = value;
}

void Compte::setConnecte(bool b){
    this->connecte = b;
}

void Compte::setVendeur(Vendeur * v){
    this->vendeur = v;
}

void Compte::setAcheteur(Acheteur * a){
    this->acheteur = a;
}

void Compte::setMediateur(Mediateur * m){
    this->mediateur = m;
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
    /*delete this->acheteur;
    delete this->vendeur;
    delete this->mediateur;*/
}


