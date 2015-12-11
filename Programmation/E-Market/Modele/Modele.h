#ifndef MODELE_H
#define MODELE_H

#include <QObject>
#include <QStringListModel>
#include <QListView>

#include "ui_mainwindow.h"
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

    QListView * viewMesP,
              * viewAlpha,
              * viewCroi,
              * viewDecr;

    QStringListModel * modelMesP,
                     * modelAlpha,
                     * modelCroi,
                     * modelDecr;



    bool isChangeUtilisateur,
         isChangeLesProduits,
         isChangeMesProduits;

public:
    Modele(Ui::MainWindow * uiMW);
    void update();

public slots:
    void setLesProduits();
};

#endif // MODELE_H
