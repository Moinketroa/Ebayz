#include "LesProduits.h"

LesProduits::LesProduits(){

}

Produit LesProduits::getProduit(int index){
        return this->lesProduits[index];
}

std::vector<Produit> LesProduits::getLesProduits(){
        return this->lesProduits;
}

void LesProduits::addProduit(Produit p){
    this->lesProduits.push_back(p);
}

LesProduits LesProduits::getProduitTriAlphabetique(std::vector<Produit> lesProduits){

}

LesProduits LesProduits::getProduitPrixCroissant(std::vector<Produit> lesProduits){

}

LesProduits LesProduits::getProduitPrixDecroissant(std::vector<Produit> lesProduits){

}

LesProduits LesProduits::getProduitMotsCles(char* motsCles, std::vector<Produit> lesProduits){

}


