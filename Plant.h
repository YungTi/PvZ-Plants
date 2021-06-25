#ifndef PLANT_H_INCLUDED
#define PLANT_H_INCLUDED
#include<iostream>
#include"Zombie.h"


class Plant{
public:
    Plant();
    virtual int playerAct();
    virtual int zombieAct(Zombie &obj);
    void setHp(const int H);
    int returnHp();
    friend class Zombie;
private:
    int hp;
};


#endif // PLANT_H_INCLUDED
