#ifndef LESCOMPTES_H
#define LESCOMPTES_H

#include <vector>
#include "Compte.h"

class LesComptes
{
private:
    std::vector<Compte *> * toutLesComptes;
    static LesComptes * singleton;

    LesComptes();

    static bool existsEmail(const char *);
    static bool existsPseudo(const char *);
    static Compte * getCompte(char *);
    static void setCompteConnecte(Compte *);
    static void addCompte(Compte *);

public:
    static Compte * compteConnecte;

    static Compte * getCompte(int);
    static LesComptes * getInstance();

    static int authentification(char *, char *);
    static void deconnexion();
    static int inscription(const char *,
                           const char *,
                           const char *,
                           const char *,
                           const char *,
                           const char *,
                           const char *,
                           bool,
                           bool,
                           bool);

};

#endif // LESCOMPTES_H
