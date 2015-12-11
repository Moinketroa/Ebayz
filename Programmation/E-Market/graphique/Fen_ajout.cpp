#include "Fen_ajout.h"


Fen_ajout::Fen_ajout(QWidget *parent)
    : QDialog(parent)
{
    libelle = new QLabel(tr("Libéllé :"));
        editLibelle = new QLineEdit;
        libelle->setBuddy(editLibelle);

     description = new QLabel(tr("Description:"));
        editDescr = new QLineEdit;
        editDescr->setFixedSize(150,75);
        description->setBuddy(editDescr);

     idVendeur = new QLabel(tr("ID :"));
         editId = new QLineEdit;
         idVendeur->setBuddy(editId);

     stockDispo = new QLabel(tr("Stock :"));
         editStock = new QLineEdit;
         stockDispo->setBuddy(editStock);

     prix = new QLabel(tr("Prix:"));
         editPrix = new QLineEdit;
         prix->setBuddy(editPrix);

     venteNormal = new QCheckBox(tr("Normal"));
     venteEnchere = new QCheckBox(tr("Enchere"));

     connect(this->venteNormal, SIGNAL(toggled(bool)),
             this, SLOT(changeEnchere()));

     connect(this->venteEnchere, SIGNAL(toggled(bool)),
             this, SLOT(changeNormal()));

     btnCreer = new QPushButton(tr("Créer"));
     btnCreer->setDefault(true);


     QGridLayout *mainLayout = new QGridLayout;
         mainLayout->setSizeConstraint(QLayout::SetFixedSize);
         mainLayout->addWidget(idVendeur, 1, 0);
         mainLayout->addWidget(editId , 1, 1);
         mainLayout->addWidget(libelle , 2, 0);
         mainLayout->addWidget(editLibelle, 2, 1);
         mainLayout->addWidget(description, 3, 0);
         mainLayout->addWidget(editDescr , 3, 1);
         mainLayout->addWidget(stockDispo, 4, 0);
         mainLayout->addWidget(editStock, 4, 1);
         mainLayout->addWidget(prix, 5, 0);
         mainLayout->addWidget(editPrix,5 , 1);
         mainLayout->addWidget(venteNormal, 6, 0);
         mainLayout->addWidget(venteEnchere, 6, 1);
         mainLayout->addWidget(btnCreer, 7, 1);

         setLayout(mainLayout);
}

void Fen_ajout::changeEnchere(){
    this->venteEnchere->setChecked(false);
}

void Fen_ajout::changeNormal(){
    this->venteNormal->setChecked(false);
}
QLineEdit *Fen_ajout::getEditId(){
    return this->editId;
}


