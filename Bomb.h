#ifndef BOMB_H_INCLUDED
#define BOMB_H_INCLUDED
#include"Plant.h"

class Bomb:public Plant{
public:
    //constructor
    Bomb();
    void initBomb(const int mh,const int c);
    virtual int zombieAct(Zombie &obj);
    virtual void printPlant();
    int returnMaxHp();
    int returnCost();
private:
    static int max_hp;
    static int cost;
};

#endif // BOMB_H_INCLUDED
