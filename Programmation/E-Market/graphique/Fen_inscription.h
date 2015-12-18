#ifndef FEN_INSCRIPTION_H
#define FEN_INSCRIPTION_H

#include <QtWidgets>
#include <QDialog>

#include "Modele/Modele.h"
class Modele;

class Fen_inscription : public QDialog
{
    Q_OBJECT

public:
    Fen_inscription(Modele * m, QWidget *parent = 0);

private:

    Modele * mod;

    QLabel *compte;
    QLabel *l_pseudo;
    QLabel *l_nom;
    QLabel *l_prenom;
    QLabel *l_mdp;
    QLabel *l_email;
    QLabel *l_dtn;
    QLabel *l_adresse;

    QLineEdit *pseudo;
    QLineEdit *nom;
    QLineEdit *prenom;
    QLineEdit *mdp;
    QLineEdit *email;
    QLineEdit *dtn;
    QLineEdit *adresse;

    QPushButton *creer;

public slots:
    void enregistrer();

};

#endif // FEN_INSCRIPTION_H
