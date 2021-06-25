#ifndef COIN_H_INCLUDED
#define COIN_H_INCLUDED
#include"Plant.h"

class Coin:public Plant{
public:
    //constructor
    Coin();
    void initCoin(const int MH,const int C,const int R,const int E);
    virtual int playerAct();
    virtual void printPlant();
    int returnMaxHp();
    int returnCost();
private:
    static int max_hp;
    static int cost;
    static int rounds;
    int cd=0;
    static int earn;
};

#endif // COIN_H_INCLUDED
