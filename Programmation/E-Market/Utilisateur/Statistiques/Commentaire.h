#ifndef COMMENTAIRE_H
#define COMMENTAIRE_H

class Commentaire
{
private:
    char * commentaire;
public:
    Commentaire();
    Commentaire(char * commentaire);
    virtual ~Commentaire();
    char * getCommentaire()const;
    void setCommentaire(char *);
};
#endif // COMMENTAIRE_H
