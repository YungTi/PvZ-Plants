#include"Heal.h"

int Heal::max_hp;
int Heal::cost;
int Heal::points;
//----------Heal----------
Heal::Heal():Plant(max_hp){
}
void Heal::initHeal(const int MH,const int C,const int P){
    max_hp=MH;
    setHp(MH);
    cost=C;
    points=P;
}

int Heal::playerAct(){
    std::cout<<"All your plants have recovered "<<points<<" HP!"<<std::endl;
    return points;
}

void Heal::printPlant(){
    std::cout<<"Healflower HP:"<<returnHp()<<std::endl;
}

int Heal::returnMaxHp(){
    return max_hp;
}

int Heal::returnCost(){
    return cost;
}
