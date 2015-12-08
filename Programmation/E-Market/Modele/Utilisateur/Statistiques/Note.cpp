#include "Note.h"

/************ CONSTRUCTOR *****************/
Note::Note():note(0){}

Note::Note(int note){
    this->note = note;
}

/************* GET FUNCTION ***************/

int Note::getNote() const{
    return this->note;
}

/************ SET FUNCTION ****************/

void Note::setNote(int note) {
    this->note = note;
}

/************* DESTRUCTOR ***************/

Note::~Note(){

}
