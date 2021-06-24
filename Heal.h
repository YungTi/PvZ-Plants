#ifndef HEAL_H_INCLUDED
#define HEAL_H_INCLUDED
#include"Plant.h"

class Heal:public Plant{
public:
    //constructor
    Heal(const int MH,const int C,const int P);

    virtual int playerAct();
    virtual void printPlant();
private:
    int points=0;
};

#endif // HEAL_H_INCLUDED
