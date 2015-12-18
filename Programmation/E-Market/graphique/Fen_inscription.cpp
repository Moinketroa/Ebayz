#include "Fen_inscription.h"

Fen_inscription::Fen_inscription(Modele * m, QWidget *parent)
    :QDialog(parent), mod(m)
{


   compte = new QLabel("Créer mon compte");
   l_pseudo = new QLabel("Pseudo");
   l_nom = new QLabel("Nom");
   l_prenom = new QLabel("Prénom");
   l_mdp = new QLabel("Mot de passe");
   l_email = new QLabel("E-mail");
   l_dtn = new QLabel("Date de naissance");
   l_adresse = new QLabel("Adresse");

   pseudo = new QLineEdit();
   nom = new QLineEdit();
   prenom = new QLineEdit();
   mdp = new QLineEdit();
   email = new QLineEdit();
   dtn = new QLineEdit();
   adresse = new QLineEdit();

   creer = new QPushButton("Créer le Compte", this);

   QGridLayout *layout = new QGridLayout;
      layout->addWidget(compte, 0, 0);
      layout->addWidget(l_pseudo, 1, 0);
      layout->addWidget(pseudo, 1, 1);
      layout->addWidget(l_mdp, 1, 2);
      layout->addWidget(mdp, 1, 3);

      layout->addWidget(l_nom, 2, 0);
      layout->addWidget(nom, 2, 1);
      layout->addWidget(l_prenom, 2, 2);
      layout->addWidget(prenom, 2, 3);

      layout->addWidget(l_email, 3, 0);
      layout->addWidget(email, 3, 1);
      layout->addWidget(l_dtn, 3, 2);
      layout->addWidget(dtn, 3, 3);

      layout->addWidget(l_adresse, 4, 0);
      layout->addWidget(adresse, 4, 1);

      layout->addWidget(creer, 5, 1);

      setLayout(layout);

    connect(this->creer, SIGNAL(clicked()),
            this, SLOT(enregistrer()));

    show();

}

void Fen_inscription::enregistrer(){
    QString temp = pseudo->text();
    const char* pseu = temp.toStdString().c_str();

    temp = nom->text();
    const char* n = temp.toStdString().c_str();

    temp = prenom->text();
    const char* p = temp.toStdString().c_str();

    temp = mdp->text();
    const char* m = temp.toStdString().c_str();

    temp = email->text();
    const char* e = temp.toStdString().c_str();

    temp = dtn->text();
    const char* d = temp.toStdString().c_str();

    temp = adresse->text();
    const char* a = temp.toStdString().c_str();

    this->mod->nouvelle_inscription(n,
                                   p,
                                   pseu,
                                   e,
                                   m,
                                   a,
                                   d,
                                   true,
                                   true,
                                   false);
    this->close();
}

