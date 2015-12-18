#include "ProduitListModel.h"
#include <string>
#include <sstream>

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
        Produit * p = pList.at(index.row());
        std::ostringstream buff;
        buff << p->getTypeVente()->getPrix();
        std::string s = "Nom produit : ";
        s = s + p->getLibelle();
        s = s + "\nPrix : ";
        s = s + buff.str();
        s = s + "\n";
        return QString(s.c_str());
    } else {
        return QVariant();
    }
}

void ProduitListModel::setProduitList(QList<Produit *> nlist){
    emit beginResetModel();
    this->pList = nlist;
    emit endResetModel();
}
