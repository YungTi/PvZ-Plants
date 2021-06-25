#include"Bomb.h"

int Bomb::max_hp;
int Bomb::cost;
//----------Bomb----------
Bomb::Bomb(){
    max_hp=0;
}

void Bomb::initBomb(const int MH,const int C){
    max_hp=MH;
    setHp(MH);
    cost=C;
}

int Bomb::zombieAct(Zombie &obj){
    obj.hp-=max_hp;
    std::cout<<"Bombflower gives "<<max_hp<<" damage to the zombie!"<<std::endl;
    std::cout<<"Bombflower is dead!"<<std::endl;
    setHp(0);
    return returnHp();
}

void Bomb::printPlant(){
    std::cout<<"Bombflower HP:"<<returnHp()<<std::endl;
}

int Bomb::returnMaxHp(){
    return max_hp;
}

int Bomb::returnCost(){
    return cost;
}
