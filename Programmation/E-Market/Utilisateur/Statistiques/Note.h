#ifndef NOTE_H
#define NOTE_H

class Note
{
private:
    int note;
public:
    Note();
    Note(int note);
    virtual ~Note();
    int getNote()const;
    void setNote(int);
};

#endif // NOTE_H
