#ifndef HORN_H_INCLUDED
#define HORN_H_INCLUDED
#include"Plant.h"

class Horn:public Plant{
public:
    //constructor
    Horn();
    void initHorn(const int MH,const int C,const int A);
    virtual int zombieAct(Zombie &obj);
    virtual void printPlant();
    int returnMaxHp();
    int returnCost();
private:
    static int max_hp;
    static int atk;
    static int cost;
};

#endif // HORN_H_INCLUDED
