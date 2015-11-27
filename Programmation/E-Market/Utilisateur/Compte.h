#ifndef COMPTE_H
#define COMPTE_H

class Compte
{
private:
    //Fields
    int id;
    char * nom;
    char * prenom;
    char * pseudo;
    char * email;
    char * mdp;
    char * adresse;
    char * telephone;
    char * dateDeNaissance;
    int numeroCarte;
    int cryptogramme;
    char * dateExp;
public:
    //Field
    static int NB_UTILISATEUR;

    //Constructor Destructor
    Compte();
    Compte(char *, char *, char *, char *, char *, char *, char *, char *, int, int, char *);
    virtual ~Compte();

    //Methods
    static void incrNombreUtilisateur();
    static void decrNombreUtilisateur();


    char *getNom() const;
    char *getPrenom() const;
    char *getPseudo() const;
    char *getEmail() const;
    char *getMdp() const;
    char *getAdresse() const;
    char *getTelephone() const;
    char *getDateDeNaissance() const;
    int getNumeroCarte() const;
    int getCryptogramme() const;
    char *getDateExp() const;

    void setNom(char *value);
    void setPrenom(char *value);
    void setPseudo(char *value);
    void setEmail(char *value);
    void setMdp(char *value);
    void setAdresse(char *value);
    void setTelephone(char *value);
    void setDateDeNaissance(char *value);
    void setNumeroCarte(int value);
    void setCryptogramme(int value);
    void setDateExp(char *value);
};

#endif // COMPTE_H
