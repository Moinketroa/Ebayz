#include "LesTags.h"
#include <cstddef>
#include <string.h>

using namespace std;

LesTags * LesTags::Singleton = new LesTags();

/************ CONSTRUCTOR *****************/
LesTags::LesTags()
{
    this->lesTags = new vector<char *>();
}

LesTags::LesTags(vector<char *> * vt){
    this->lesTags = vt;
}

/************* GET FUNCTION ***************/
char * LesTags::getTag(int index){
    if (index >= this->lesTags->size()){
        return NULL;
    } else {
        return this->lesTags->at(index);
    }
}

vector<char *> * LesTags::getLesTags(){
    return this->lesTags;
}

LesTags * LesTags::getSingleton(){
    return LesTags::Singleton;
}

bool LesTags::isInLesTags(char * tagAChercher){
    bool trouve = false;
    int i = 0;

    while ((i < this->lesTags->size()) || (!trouve)){
        if (strcmp(tagAChercher, this->lesTags->at(i)) == 0){
            trouve = true;
        } else {
            trouve = false;
        }

        i++;
    }

    return trouve;
}

bool LesTags::isInSingleton(char * tagAChercher){
    return LesTags::Singleton->isInLesTags(tagAChercher);
}

/************** OTHER *******************/
void LesTags::addTag(char * tg){
    this->lesTags->push_back(tg);
    LesTags::addTagToSingleton(tg);
}

/************* PRIVATE METHODS **********/
void LesTags::addTagToSingleton(char * tg){
    LesTags::Singleton->lesTags->push_back(tg);
}


/************* DESTRUCTOR ***************/
LesTags::~LesTags(){

}
