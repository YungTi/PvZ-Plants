#ifndef BOMB_H_INCLUDED
#define BOMB_H_INCLUDED
#include"Plant.h"

class Bomb:public Plant{
public:
    //constructor
    Bomb(const int mh,const int c);

    virtual int zombieAct(int zomATK);
    virtual void printPlant();
};

#endif // BOMB_H_INCLUDED
