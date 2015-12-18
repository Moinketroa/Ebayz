#ifndef LESTAGS_H
#define LESTAGS_H

#include <vector>
#include <map>

/** @brief La classe LesTags gere le vector des classes.
 **/
class LesTags
{
private:
    //Fields
    /// @brief vector lesTags
    std::vector<char *> * lesTags;
    /// @brief hasmap des tags
    static std::map<char *, int> * toutLesTags; //Regroupe tout les tags utilisés par tout les produits du site

public:
    //Constructor Destructor
    /// @brief constructeur de LesTags
    LesTags();
    /// @brief constructeur de LesTags
    /// @param  vector de char*.
    LesTags(std::vector<char *> *);
    /// @brief desstructeur de LesTags
    virtual ~LesTags();

    //Methods
    /// @brief recuperer un tag à un index
    /// @param  index.
    /// @return tag (char*)
    char * getTag(unsigned int);
    /// @brief recuperer le vector des tags
    /// @return vector des tags
    std::vector<char *> * getLesTags();
    /// @brief recuperer une hasmap qui contient tous les tags de la classe
    /// @return hasmap qui contient tous les tags de la classe
    static std::map<char *, int> * getToutLesTags();
    /// @brief nombre de presence d'un tag dans la classe
    /// @param tag (char *)
    /// @return nombre de presence d'un tag dans la classe
    static int getNbTag(char *);
    /// @brief le tag est present dans l'objet
    /// @param tag (char *)
    /// @return booleen presence du tag dans l'objet
    bool isInLesTags(char *);
    /// @brief le tag est present dans le vector de la classe
    /// @param tag (char *)
    /// @return booleen presence du tag dans tous les tags
    static bool isInToutLesTags(char *);

    /// @brief ajouter un tag
    /// @param tag (char *)
    void addTag(char *);
    /// @brief supprimer un tag
    /// @param tag (char *)
    void rmTag(char *);
    /// @brief supprimer un tag
    /// @param index (int)
    void rmTag(int);
};

#endif // LESTAGS_H
