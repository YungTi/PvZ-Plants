#ifndef PLANT_H_INCLUDED
#define PLANT_H_INCLUDED
#include<iostream>
#include"Zombie.h"


class Plant{
public:

    virtual int playerAct();
    virtual int zombieAct(Zombie &obj);
    //virtual void printPlant();
    void setMaxHp(const int MH);
    void setHp(const int H);
    void setCost(const int C);
    int returnMaxHp();
    int returnHp();
    int returnCost();
    friend class Zombie;
private:
    int max_hp=0;
    int hp=0;
    int cost=0;
};



#endif // PLANT_H_INCLUDED
