#ifndef MODELE_H
#define MODELE_H

#include <QObject>

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

public:
    Modele(Ui::MainWindow * uiMW);

public slots:
    void setLesProduits();


    void update();

};

#endif // MODELE_H
