#ifndef LESTAGS_H
#define LESTAGS_H

#include <vector>

class LesTags
{
private:
    //Fields
    std::vector<char *> * lesTags;
    static LesTags * Singleton; //Regroupe tout les tags utilisés par tout les produits du site

    //Methods
    static void addTagToSingleton(char *);

public:
    //Constructor Destructor
    LesTags();
    LesTags(std::vector<char *> *);
    virtual ~LesTags();

    //Methods
    char * getTag(int);
    std::vector<char *> * getLesTags();
    static LesTags * getSingleton();
    bool isInLesTags(char *);
    static bool isInSingleton(char *);

    void addTag(char *);
};

#endif // LESTAGS_H
