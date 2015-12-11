#ifndef MODELE_H
#define MODELE_H

#include <QObject>
#include <QStringListModel>
#include <QListView>
#include <QList>

#include "ui_mainwindow.h"
#include "graphique/Fen_ajout.h"
#include "Commerce/Produit/LesProduits.h"
#include "Utilisateur/LesComptes.h"
#include "graphique/Fen_inscription.h"
#include "ProduitListModel.h"

class Modele : public QObject
{

    Q_OBJECT

private:
    Ui::MainWindow * ui;

    Compte * compteConnecte;
    LesProduits * mesProduits,
                * lesProduitsAlpha,
                * lesProduitsDecr,
                * lesProduitsCroi;

    QListView * viewMesP,
              * viewAlpha,
              * viewCroi,
              * viewDecr;

    QStringListModel * modelMesP,
                     * modelCroi,
                     * modelDecr;

    Fen_ajout *fenAjout;

    ProduitListModel * modelAlpha;

    bool isChangeUtilisateur,
         isChangeLesProduits,
         isChangeMesProduits;

    Fen_inscription * fen_inscri;

public:
    Modele(Ui::MainWindow * uiMW);

    void update();

public slots:
    void setLesProduits();
    void afficheFenAjout();
    void inscription();
    void deconnexion();

};

#endif // MODELE_H
