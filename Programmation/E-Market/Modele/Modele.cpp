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

    QStringList lAlpha;
    QStringList lCroi;
    QStringList lDecr;

    for (unsigned int i = 0; i < lesProduitsAlpha->getLesProduits()->size(); i++){
        lAlpha << lesProduitsAlpha->getProduit(i)->getLibelle();
        lCroi << lesProduitsCroi->getProduit(i)->getLibelle();
        lDecr << lesProduitsDecr->getProduit(i)->getLibelle();
    }

    modelAlpha = new QStringListModel(lAlpha);
    modelCroi = new QStringListModel(lCroi);
    modelDecr = new QStringListModel(lDecr);

    viewAlpha = new QListView();
    viewCroi = new QListView();
    viewDecr = new QListView();

    viewAlpha->setModel(modelAlpha);
    viewCroi->setModel(modelCroi);
    viewDecr->setModel(modelDecr);

    ui->listLesProduitsAlpha->setWidget(viewAlpha);
    ui->listLesProduitsCroiss->setWidget(viewCroi);
    ui->listLesProduitsDecrois->setWidget(viewDecr);

    update();
}


void Modele::setLesProduits(){
    /*char * c = (ui->tagAChercher->text()).toStdString().c_str();
    lesProduitsAlpha = lesProduitsAlpha->getProduitMotsCles(c, 1);
    cout << (ui->tagAChercher->text()).toStdString().c_str() << endl;*/
    update();
}

void Modele::update(){
    if (this->compteConnecte != NULL){
        this->ui->monCompte->setEnabled(true);
        cout << this->compteConnecte->getPseudo() << endl;
    }
}
