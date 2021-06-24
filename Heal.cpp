#include"Heal.h"


//----------Heal----------
Heal::Heal(const int MH,const int C,const int P){
    setMaxHp(MH);
    setHp(MH);
    setCost(C);
    this->points=P;
}

int Heal::playerAct(){
    std::cout<<"All your plants have recovered "<<this->points<<" HP!"<<std::endl;
    return this->points;
}

void Heal::printPlant(){
    std::cout<<"Healflower HP:"<<returnHp()<<std::endl;
}
