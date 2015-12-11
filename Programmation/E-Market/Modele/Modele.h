#ifndef MODELE_H
#define MODELE_H

#include <QObject>
#include <QStringListModel>
#include <QListView>

#include "ui_mainwindow.h"
#include "graphique/Fen_ajout.h"
#include "Commerce/Produit/LesProduits.h"
#include "Utilisateur/LesComptes.h"
#include "graphique/Fen_inscription.h"


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
                     * modelAlpha,
                     * modelCroi,
                     * modelDecr;
    Fen_ajout *fenAjout;

    bool isChangeUtilisateur,
         isChangeLesProduits,
         isChangeMesProduits;

    Fen_inscription * fen_inscri;

public:
    Modele(Ui::MainWindow * uiMW);

    void update();

public slots:
    void setLesProduits();
<<<<<<< HEAD
    void afficheFenAjout();


    void update();
=======
    void inscription();
    void deconnexion();
>>>>>>> 10439710c08200d4f689fcf01205363d69558546

};

#endif // MODELE_H
