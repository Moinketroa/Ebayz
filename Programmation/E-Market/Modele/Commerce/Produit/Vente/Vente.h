#ifndef VENTE_H
#define VENTE_H

class Vente {

public:
    //Constructor Destructor
    Vente();
    virtual ~Vente();

    //Methods
    virtual float getPrix() const = 0;

    virtual void setPrix(float) = 0;
};

#endif // VENTE_H
