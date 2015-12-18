#include "LesTags.h"
#include <cstddef>
#include <string.h>
#include <iostream>

using namespace std;

map<char *, int> * LesTags::toutLesTags = new map<char *, int>();

/************ CONSTRUCTOR *****************/
LesTags::LesTags()
{
    this->lesTags = new vector<char *>();
    this->lesTags->push_back("");
}

LesTags::LesTags(vector<char *> * vt){
    this->lesTags = vt;
}

/************* GET FUNCTION ***************/
char * LesTags::getTag(unsigned int index){
    if (index >= this->lesTags->size()){
        return NULL;
    } else {
        return this->lesTags->at(index);
    }
}

vector<char *> * LesTags::getLesTags(){
    return this->lesTags;
}

map<char *, int> * LesTags::getToutLesTags(){
    return LesTags::toutLesTags;
}

int LesTags::getNbTag(char * tg){
    map<char *, int>::iterator it = LesTags::toutLesTags->find(tg);

    if (it == LesTags::toutLesTags->end()){
        return 0;
    } else {
        return it->second;
    }
}

bool LesTags::isInLesTags(char * tagAChercher){
    bool trouve = false;
    unsigned int i = 0;

    while ((i < this->lesTags->size()) && (!trouve)){
        if (strcmp(tagAChercher, this->lesTags->at(i)) == 0){
            trouve = true;
        } else {
            trouve = false;
        }

        i++;
    }

    return trouve;
}

bool LesTags::isInToutLesTags(char * tagAChercher){
    map<char *, int>::iterator it = LesTags::toutLesTags->find(tagAChercher);

    if (it == LesTags::toutLesTags->end()){
        return 0;
    } else {
        return 1;
    }

}

/************** OTHER *******************/
void LesTags::addTag(char * tg){
    map<char *, int>::iterator it = LesTags::toutLesTags->find(tg);

    if (it == LesTags::toutLesTags->end()){
        LesTags::toutLesTags->insert(pair<char *, int>(tg, 1));
    } else {
        it->second = it->second + 1;
    }

    this->lesTags->push_back(tg);
}

void LesTags::rmTag(char * tg){
    if (this->isInLesTags(tg)){
        map<char *, int>::iterator it = LesTags::toutLesTags->find(tg);

        if (it->second == 1){
            LesTags::toutLesTags->erase(it);
        } else {
            it->second = it->second - 1;
        }

        vector<char *>::iterator vit = this->lesTags->begin();

        for(; *vit != tg; vit++);

        this->lesTags->erase(vit);
    }
}

void LesTags::rmTag(int index){
    char * tg = this->getTag(index);
    map<char *, int>::iterator it = LesTags::toutLesTags->find(tg);

    if (it->second == 1){
        LesTags::toutLesTags->erase(it);
    } else {
        it->second = it->second - 1;
    }

    vector<char *>::iterator vit = this->lesTags->begin();

    for (int i = 0; i < index; i++)
        vit ++;

    this->lesTags->erase(vit);
}

/************* DESTRUCTOR ***************/
LesTags::~LesTags(){
    for (unsigned int i = 0; i < this->lesTags->size();) //Quand j'ai trop la flemme de passer d'un for à un while
        this->rmTag(i);
}
