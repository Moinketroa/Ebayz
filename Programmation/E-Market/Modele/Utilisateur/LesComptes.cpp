#include <cstddef>
#include "LesComptes.h"

using namespace std;

/************ PRIVATE STATIC ***************/
LesComptes * LesComptes::singleton = new LesComptes();

/************ PUBLIC STATIC ***************/
Compte * LesComptes::compteConnecte = NULL;

/************ CONSTRUCTOR *****************/

LesComptes::LesComptes()
{
    this->toutLesComptes = new vector<Compte *>();
}

/************* GET FUNCTION ***************/

Compte * LesComptes::getCompte(int id){
    vector<Compte *>::iterator cid = LesComptes::singleton->toutLesComptes->begin();

    for(; cid != LesComptes::singleton->toutLesComptes->end(); cid++){
        if ((*cid)->getID() == id)
            return *cid;
    }

    return NULL;
}

LesComptes * LesComptes::getInstance(){
    return LesComptes::singleton;
}


/************* OTHERS *********************/

int LesComptes::authentification(char * pseudo, char * mdp){
    int erreur = 0;

    if (LesComptes::compteConnecte != NULL){

        erreur = 3;

    } else {

        Compte * c = LesComptes::getCompte(pseudo);

        if (c == NULL){
            erreur = 1; //Compte inexistant
        } else if (c->getMdp() != mdp){
            erreur = 2; //Mdp incorrect
        } else {
            c->setConnecte(true);
            LesComptes::setCompteConnecte(c);
        }

    }

    return erreur;
}

void LesComptes::deconnexion(){
    LesComptes::compteConnecte->setConnecte(false);
    LesComptes::compteConnecte = NULL;
}

int LesComptes::inscription(char * nom,
                            char * prenom,
                            char * pseudo,
                            char * email,
                            char * mdp,
                            char * adresse,
                            char * ddn,
                            bool estVendeur,
                            bool estAcheteur,
                            bool estMediateur){

    int erreur = 0;

    if (LesComptes::existsPseudo(pseudo)){
        erreur = 1; //pseudo existant
        if (LesComptes::existsEmail(email))
            erreur = 3; //pseudo et email existant
    } else if (LesComptes::existsEmail(email)){
        erreur = 2; //email existant
    } else {
        Compte * c = new Compte(nom, prenom, pseudo, email, mdp, adresse, ddn);
        if (estVendeur)
            c->setVendeur(new Vendeur(c));
        if (estAcheteur)
            c->setAcheteur(new Acheteur(c));
        if (estMediateur)
            c->setMediateur(new Mediateur(c));

        LesComptes::addCompte(c);
    }

    return erreur;
}



/************* PRIVATE METHODS ************/

Compte * LesComptes::getCompte(char * pseudo){
    vector<Compte *>::iterator cid = LesComptes::singleton->toutLesComptes->begin();

    for(; cid != LesComptes::singleton->toutLesComptes->end(); cid++){
        if ((*cid)->getPseudo() == pseudo)
            return *cid;
    }

    return NULL;
}

void LesComptes::setCompteConnecte(Compte * c){
    LesComptes::compteConnecte = c;
}

bool LesComptes::existsEmail(char * email){
    vector<Compte *>::iterator cid = LesComptes::singleton->toutLesComptes->begin();

    for(; cid != LesComptes::singleton->toutLesComptes->end(); cid++){
        if ((*cid)->getEmail() == email)
            return true;
    }

    return false;
}

bool LesComptes::existsPseudo(char * pseudo){
    vector<Compte *>::iterator cid = LesComptes::singleton->toutLesComptes->begin();

    for(; cid != LesComptes::singleton->toutLesComptes->end(); cid++){
        if ((*cid)->getPseudo() == pseudo)
            return true;
    }

    return false;
}

void LesComptes::addCompte(Compte * c){
    LesComptes::singleton->toutLesComptes->push_back(c);
}
