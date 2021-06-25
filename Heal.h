#ifndef HEAL_H_INCLUDED
#define HEAL_H_INCLUDED
#include"Plant.h"

class Heal:public Plant{
public:
    //constructor
    Heal();
    void initHeal(const int MH,const int C,const int P);
    virtual int playerAct();
    virtual void printPlant();
    int returnMaxHp();
    int returnCost();
private:
    static int max_hp;
    static int cost;
    static int points;
};


#endif // HEAL_H_INCLUDED
