#include "LesProduits.h"

LesProduits::LesProduits(){

}

Produit LesProduits::getProduit(int index){
        return this->lesProduits[index];
}

LesProduits LesProduits::getLesProduits(){
        return this->lesProduits;
}

void LesProduits::addProduit(Produit p){
    this->lesProduits.push_back(p);
}

LesProduits LesProduits::getProduitTriAlphabetique(vector<Produit> lesProduits){

}

LesProduits LesProduits::getProduitPrixCroissant(vector<Produit> lesProduits){

}

LesProduits LesProduits::getProduitPrixDecroissant(vector<Produit> lesProduits){

}

LesProduits LesProduits::getProduitMotsCles(char* motsCles,vector<Produit> lesProduits){

}

