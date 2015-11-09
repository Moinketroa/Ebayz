#ifndef VENTE_H
#define VENTE_H

class Vente {

public:
    Vente();
    virtual ~Vente();

    virtual float getPrix() = 0;
    virtual void setPrix(int) = 0;
};

#endif // VENTE_H
