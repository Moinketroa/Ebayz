#include "Modele.h"
#include <iostream>

using namespace std;

Modele::Modele(Ui::MainWindow * uiMW)
{

    this->ui = uiMW;

    this->compteConnecte = LesComptes::compteConnecte;

    this->mesProduits = new LesProduits();

    this->lesProduitsAlpha = LesProduits::getToutLesProduits()->getProduitTriAlphabetique(1);
    this->lesProduitsCroi = LesProduits::getToutLesProduits()->getProduitPrixCroissant(1);
    this->lesProduitsDecr = LesProduits::getToutLesProduits()->getProduitPrixDecroissant(1);

    connect(this->ui->actionRechercher, SIGNAL(clicked()),
            this, SLOT(setLesProduits()));

}


void Modele::setLesProduits(){
    cout << (ui->tagAChercher->text()).toStdString().c_str() << endl;
    update();
}

void Modele::update(){

}
