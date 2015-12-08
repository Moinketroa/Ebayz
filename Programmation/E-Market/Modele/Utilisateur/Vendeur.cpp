#include "Vendeur.h"
#include "Compte.h"
#include "../Commerce/Produit/Vente/VenteEnchere.h"
#include "../Commerce/Produit/Vente/VenteNormal.h"

/************ CONSTRUCTOR *****************/

Vendeur::Vendeur(Compte * nomC)
                 : Personne(nomC)
{
    this->mesProduits = new LesProduits();
}

/************* GET FUNCTION ***************/

LesProduits * Vendeur::getLesProduits(){
    return this->mesProduits;
}

Produit * Vendeur::getProduit(int ref){
    return this->mesProduits->getProduit(ref, 0);
}

Compte * Vendeur::getCompte(){
    return this->monCompte;
}

/************* OTHERS *******************/

void Vendeur::ajouterProduitVenteEnchere(char * libelle,
                                         char * desc,
                                         int stockDispo,
                                         float prixDep,
                                         char * dateDeb,
                                         char * dateFin){

    VenteEnchere * ve = new VenteEnchere(prixDep, dateDeb, dateFin);
    Produit * p = new Produit(libelle,
                              desc,
                              this->monCompte->getID(),
                              stockDispo,
                              *ve);

    this->mesProduits->addProduit(p);
}

void Vendeur::ajouterProduitVenteNormal(char * libelle,
                                        char * desc,
                                        int stockDisp,
                                        float prix,
                                        char * delay){
    VenteNormal * vn = new VenteNormal(prix, delay);
    Produit * p = new Produit(libelle,
                              desc,
                              this->monCompte->getID(),
                              stockDisp,
                              *vn);

    this->mesProduits->addProduit(p);
}

void Vendeur::supprimerProduit(int ref){
    this->mesProduits->rmProduit(ref, 0);
}

/************* DESTRUCTOR ***************/

Vendeur::~Vendeur(){}
