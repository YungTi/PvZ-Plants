#ifndef PLANT_H_INCLUDED
#define PLANT_H_INCLUDED
#include<iostream>

class Plant{
public:

    virtual int playerAct();
    virtual int zombieAct(int zomATK);
    //virtual void printPlant();
    void setMaxHp(const int MH);
    void setHp(const int H);
    void setCost(const int C);
    int returnMaxHp();
    int returnHp();
    int returnCost();
private:
    int max_hp=0;
    int hp=0;
    int cost=0;
};




#endif // PLANT_H_INCLUDED
