#include "Commentaire.h"

/************ CONSTRUCTOR *****************/
Commentaire::Commentaire():commentaire((char *)""){}

Commentaire::Commentaire(char * commentaire){
    this->commentaire = commentaire;
}

/************* GET FUNCTION ***************/

char * Commentaire::getCommentaire() const{
    return this->commentaire;
}

/************ SET FUNCTION ****************/

void Commentaire::setCommentaire(char * commentaire) {
    this->commentaire = commentaire;
}

/************* DESTRUCTOR ***************/

Commentaire::~Commentaire(){

}
