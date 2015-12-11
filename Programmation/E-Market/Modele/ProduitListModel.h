#ifndef PRODUITLISTMODEL_H
#define PRODUITLISTMODEL_H

#include <QAbstractListModel>
#include <QList>

#include "Commerce/Produit/Produit.h"

class ProduitListModel : public QAbstractListModel
{
    Q_OBJECT
public:
    explicit ProduitListModel(QList<Produit *>, QObject *parent = 0);

    int rowCount(const QModelIndex &parent = QModelIndex()) const;
    QVariant data(const QModelIndex &index, int role) const;

private:
    QList <Produit *> pList;

};

#endif // PRODUITLISTMODEL_H
