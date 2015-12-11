#ifndef MODELE_H
#define MODELE_H

#include <QObject>
#include <QStringListModel>
#include <QListView>

#include "ui_mainwindow.h"
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

    QListView * viewAlpha,
              * viewCroi,
              * viewDecr;

    QStringListModel * modelAlpha,
                     * modelCroi,
                     * modelDecr;

    Fen_inscription * fen_inscri;

public:
    Modele(Ui::MainWindow * uiMW);

public slots:
    void setLesProduits();
    void inscription();
    void deconnexion();

    void update();

};

#endif // MODELE_H
