#include "ProduitListModel.h"

ProduitListModel::ProduitListModel(QList<Produit*> produitL,
                                   QObject *parent)
                                    : QAbstractListModel(parent),
                                      pList(produitL)
{}


int ProduitListModel::rowCount(const QModelIndex &parent) const
{
    return pList.count();
}

QVariant ProduitListModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    if (index.row() >= pList.size())
        return QVariant();

    if (role == Qt::DisplayRole){
        return QString((pList.at(index.row())->getDescription()));
    } else {
        return QVariant();
    }
}
