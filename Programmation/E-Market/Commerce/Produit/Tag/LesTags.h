#ifndef LESTAGS_H
#define LESTAGS_H

#include <vector>
#include <map>

class LesTags
{
private:
    //Fields
    std::vector<char *> * lesTags;
    static std::map<char *, int> * toutLesTags; //Regroupe tout les tags utilisés par tout les produits du site

public:
    //Constructor Destructor
    LesTags();
    LesTags(std::vector<char *> *);
    virtual ~LesTags();

    //Methods
    char * getTag(int);
    std::vector<char *> * getLesTags();
    static std::map<char *, int> * getToutLesTags();
    static int getNbTag(char *);
    bool isInLesTags(char *);
    static bool isInToutLesTags(char *);

    void addTag(char *);
    void rmTag(char *);
    void rmTag(int);
};

#endif // LESTAGS_H
