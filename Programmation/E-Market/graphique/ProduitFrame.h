#ifndef PRODUITFRAME_H
#define PRODUITFRAME_H

#include <QFrame>

class Produit;

class ProduitFrame : public QFrame
{
    Q_OBJECT
public:
    explicit ProduitFrame(Produit *, QObject *parent = 0);

private :
    Produit * prod;

signals:

public slots:

};

#endif // PRODUITFRAME_H
