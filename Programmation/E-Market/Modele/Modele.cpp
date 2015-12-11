#include "Modele.h"
#include <iostream>

using namespace std;

Modele::Modele(Ui::MainWindow * uiMW)
{

    this->ui = uiMW;
    this->compteConnecte = LesComptes::compteConnecte;

    connect(this->ui->actionInscription, SIGNAL(triggered()),
            this, SLOT(inscription()));
    connect(this->ui->actionDeconnexion, SIGNAL(triggered()),
            this, SLOT(deconnexion()));

    this->mesProduits = new LesProduits();

<<<<<<< HEAD
=======
    if(this->compteConnecte != NULL)
        if(this->compteConnecte->isVendeur())
            this->mesProduits = compteConnecte->getVendeur()->getLesProduits();
>>>>>>> 10439710c08200d4f689fcf01205363d69558546

    this->lesProduitsAlpha = LesProduits::getToutLesProduits()->getProduitTriAlphabetique(1);
    this->lesProduitsCroi = LesProduits::getToutLesProduits()->getProduitPrixCroissant(1);
    this->lesProduitsDecr = LesProduits::getToutLesProduits()->getProduitPrixDecroissant(1);

    connect(this->ui->actionRechercher, SIGNAL(clicked()),
            this, SLOT(setLesProduits()));

    connect(this->ui->actionAjouter_Produit, SIGNAL(triggered()),
            this, SLOT(afficheFenAjout()));

    QStringList lAlpha;
    QStringList lCroi;
    QStringList lDecr;
    QStringList lMesP;

    for (unsigned int i = 0; i < lesProduitsAlpha->getLesProduits()->size(); i++){
        lAlpha << lesProduitsAlpha->getProduit(i)->getLibelle();
        lCroi << lesProduitsCroi->getProduit(i)->getLibelle();
        lDecr << lesProduitsDecr->getProduit(i)->getLibelle();
    }

    for (unsigned int j = 0; j < mesProduits->getLesProduits()->size(); j++){
        lMesP << mesProduits->getProduit(j)->getLibelle();
    }

    modelAlpha = new QStringListModel(lAlpha);
    modelCroi = new QStringListModel(lCroi);
    modelDecr = new QStringListModel(lDecr);
    modelMesP = new QStringListModel(lMesP);

    viewAlpha = new QListView();
    viewCroi = new QListView();
    viewDecr = new QListView();
    viewMesP = new QListView();

    viewAlpha->setModel(modelAlpha);
    viewCroi->setModel(modelCroi);
    viewDecr->setModel(modelDecr);
    viewMesP->setModel(modelMesP);

    ui->listLesProduitsAlpha->setWidget(viewAlpha);
    ui->listLesProduitsCroiss->setWidget(viewCroi);
    ui->listLesProduitsDecrois->setWidget(viewDecr);
    ui->listMesProduits->setWidget(viewMesP);

    ui->listLesProduitsAlpha->setEnabled(false);

    isChangeLesProduits = false;
    isChangeMesProduits = false;
    isChangeUtilisateur = true; //tempo

    update();
}


void Modele::setLesProduits(){

    const char * cons = (ui->tagAChercher->text()).toStdString().c_str();
    char * c;
    strcpy(c, cons);

    LesProduits * recherche = LesProduits::getToutLesProduits()->getProduitMotsCles(c);

    if (recherche != NULL){
        lesProduitsAlpha = recherche->getProduitTriAlphabetique(1);
        lesProduitsCroi = recherche->getProduitPrixCroissant(1);
        lesProduitsDecr = recherche->getProduitPrixDecroissant(1);
    }

    isChangeLesProduits = true;

    update();
}

void Modele::inscription(){
    fen_inscri = new Fen_inscription(0);
    fen_inscri->show();
}

void Modele::deconnexion(){
    LesComptes::deconnexion();
    this->compteConnecte = LesComptes::compteConnecte;

    isChangeUtilisateur = true;

    update();
}

void Modele::afficheFenAjout(){
    this->fenAjout = new Fen_ajout(0);
    //this->fenAjout->getEditId().setText(this->ui->v_id->text());
    fenAjout->show();
}


void Modele::update(){

    if (this->compteConnecte != NULL){

        if (isChangeUtilisateur){
            this->ui->actionConnexion->setVisible(false);
            this->ui->actionDeconnexion->setVisible(true);
            this->ui->actionDeconnexion->setEnabled(true);
            this->ui->actionInscription->setVisible(false);

            if (this->compteConnecte->isVendeur()){
                ui->mesProduits->setEnabled(true);
            }

            this->ui->monCompte->setEnabled(true);
            this->ui->v_adresse->setText(this->compteConnecte->getAdresse());
            this->ui->v_crypt->setText(QString::number(this->compteConnecte->getCryptogramme()));
            this->ui->v_ddn->setText(this->compteConnecte->getDateDeNaissance());
            this->ui->v_dexp->setText(this->compteConnecte->getDateExp());
            this->ui->v_id->setText(QString::number(this->compteConnecte->getID()));
            this->ui->v_mdp->setText(this->compteConnecte->getMdp());
            this->ui->v_name->setText(this->compteConnecte->getNom());
            this->ui->v_no_carte->setText(QString::number(this->compteConnecte->getNumeroCarte()));
            this->ui->v_pseudo->setText(this->compteConnecte->getPseudo());
            this->ui->v_surname->setText(this->compteConnecte->getPrenom());
            this->ui->v_tel->setText(this->compteConnecte->getTelephone());

            isChangeUtilisateur = false;
        }

    } else {

        if (isChangeUtilisateur){
            this->ui->actionConnexion->setVisible(true);
            this->ui->actionDeconnexion->setVisible(false);
            this->ui->actionDeconnexion->setEnabled(false);
            this->ui->actionInscription->setVisible(true);

            ui->mesProduits->setEnabled(false);

            this->ui->v_adresse->setText("");
            this->ui->v_crypt->setText("");
            this->ui->v_ddn->setText("");
            this->ui->v_dexp->setText("");
            this->ui->v_id->setText("");
            this->ui->v_mdp->setText("");
            this->ui->v_name->setText("");
            this->ui->v_no_carte->setText("");
            this->ui->v_pseudo->setText("");
            this->ui->v_surname->setText("");
            this->ui->v_tel->setText("");
            this->ui->monCompte->setEnabled(false);

            isChangeUtilisateur = false;
        }
    }

    if (isChangeLesProduits){
        QStringList lAlpha;
        QStringList lCroi;
        QStringList lDecr;

        for (unsigned int i = 0; i < lesProduitsAlpha->getLesProduits()->size(); i++){
            lAlpha << lesProduitsAlpha->getProduit(i)->getLibelle();
            lCroi << lesProduitsCroi->getProduit(i)->getLibelle();
            lDecr << lesProduitsDecr->getProduit(i)->getLibelle();
        }

        modelAlpha->setStringList(lAlpha);
        modelCroi->setStringList(lCroi);
        modelDecr->setStringList(lDecr);

        isChangeLesProduits = false;
    }

    if (isChangeMesProduits){
        QStringList lMesP;

        for (unsigned int j = 0; j < mesProduits->getLesProduits()->size(); j++){
            lMesP << mesProduits->getProduit(j)->getLibelle();
        }

        modelMesP->setStringList(lMesP);

        isChangeMesProduits = false;
    }
}
