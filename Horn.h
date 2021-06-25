#ifndef HORN_H_INCLUDED
#define HORN_H_INCLUDED
#include"Plant.h"

class Horn:public Plant{
public:
    //constructor
    Horn(const int MH,const int C,const int A);
    virtual int zombieAct(Zombie &obj);
    virtual void printPlant();
    int returnATK();
private:
    int atk=0;
};

#endif // HORN_H_INCLUDED
