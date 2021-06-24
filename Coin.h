#ifndef COIN_H_INCLUDED
#define COIN_H_INCLUDED
#include"Plant.h"

class Coin:public Plant{
public:
    //constructor
    Coin(const int MH,const int C,const int R,const int E);

    virtual int playerAct();
    virtual void printPlant();
private:
    int rounds=0;
    int cd=0;
    int earn=0;
};

#endif // COIN_H_INCLUDED
