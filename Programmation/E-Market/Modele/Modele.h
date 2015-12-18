#ifndef MODELE_H
#define MODELE_H

#include <QObject>
#include <QStringListModel>
#include <QListView>
#include <QList>

#include "ui_mainwindow.h"

#include "Commerce/Produit/LesProduits.h"
#include "Utilisateur/LesComptes.h"
#include "ProduitListModel.h"
#include "../graphique/Fen_ajout.h"
#include "../graphique/Fen_inscription.h"
class Fen_inscription;

class Modele : public QObject
{

    Q_OBJECT

private:
    Ui::MainWindow * ui;

    LesComptes * lesComptes;
    Compte * compteConnecte;

    LesProduits * mesProduits,
                * lesProduitsAlpha,
                * lesProduitsDecr,
                * lesProduitsCroi;

    QListView * viewMesP,
              * viewAlpha,
              * viewCroi,
              * viewDecr;

    ProduitListModel * modelAlpha,
                     * modelMesP,
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
    void nouvelle_inscription(const char *,
                              const char *,
                              const char *,
                              const char *,
                              const char *,
                              const char *,
                              const char *,
                              bool,
                              bool,
                              bool);

public slots:
    void setLesProduits();
    void afficheFenAjout();
    void inscription();
    void deconnexion();



};

#endif // MODELE_H
