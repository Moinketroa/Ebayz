#ifndef MODELE_H
#define MODELE_H

#include <QObject>
#include <QStringListModel>
#include <QListView>

#include "ui_mainwindow.h"
#include "graphique/Fen_ajout.h"
#include "Commerce/Produit/LesProduits.h"
#include "Utilisateur/LesComptes.h"


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

    QListView * viewAlpha,
              * viewCroi,
              * viewDecr;

    QStringListModel * modelAlpha,
                     * modelCroi,
                     * modelDecr;
    Fen_ajout *fenAjout;

public:
    Modele(Ui::MainWindow * uiMW);

public slots:
    void setLesProduits();
    void afficheFenAjout();


    void update();

};

#endif // MODELE_H
