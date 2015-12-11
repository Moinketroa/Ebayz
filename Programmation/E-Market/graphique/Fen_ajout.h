#ifndef FEN_AJOUT_H
#define FEN_AJOUT_H
#include <QDialog>
#include<QtWidgets>

class Fen_ajout: public QDialog
{
     Q_OBJECT
public:
    Fen_ajout(QWidget *parent = 0);
    QLineEdit *getEditId();

public slots:
    void changeEnchere();
    void changeNormal();

private:
    QLabel *libelle;
    QLabel *description;
    QLabel *idVendeur;
    QLabel *stockDispo;
    QLabel *prix;

    QLineEdit *editLibelle;
    QLineEdit *editDescr;
    QLineEdit *editId;
    QLineEdit *editStock;
    QLineEdit *editPrix;

    QPushButton *btnCreer;

    QCheckBox *venteNormal;
    QCheckBox *venteEnchere;

};

#endif // FEN_AJOUT_H
