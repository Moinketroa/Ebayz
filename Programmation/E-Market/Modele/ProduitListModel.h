#ifndef PRODUITLISTMODEL_H
#define PRODUITLISTMODEL_H

#include <QAbstractListModel>

class ProduitListModel : public QAbstractListModel
{
    Q_OBJECT
public:
    explicit ProduitListModel(QObject *parent = 0);

signals:

public slots:

};

#endif // PRODUITLISTMODEL_H
