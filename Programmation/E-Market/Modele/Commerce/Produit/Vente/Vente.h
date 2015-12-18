#ifndef VENTE_H
#define VENTE_H

/** @brief La classe abstraite Vente permet
 *         de gerer les ventes aux encheres et normales
 **/
class Vente {

public:
    //Constructor Destructor
    /// @brief constructeur de LesTags
    Vente();
    /// @brief desstructeur de LesTags
    virtual ~Vente();

    //Methods
    /// @brief recuperer un prix
    virtual float getPrix() const = 0;
    /// @brief modifier le prix
    /// @param un float
    virtual void setPrix(float) = 0;
};

#endif // VENTE_H
