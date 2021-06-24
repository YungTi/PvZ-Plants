#include"Plant.h"


//----------Plant----------
int Plant::playerAct(){
    std::cout<<"Plant Are Guilding!"<<std::endl;
    return -1;
}

int Plant::zombieAct(int zomATK){
    this->hp-=zomATK;
    std::cout<<"Zombie eats plant and cause "<<zomATK<<" damage."<<std::endl;
    if(this->hp<=0){
        std::cout<<"Plant is dead!"<<std::endl;
    }
    return this->hp;
}
/*
void Plant::printPlant(){
    std::cout<<"Plant printPlant"<<max_hp<<","<<hp<<","<<cost<<std::endl;
}
*/
void Plant::setMaxHp(const int MH){
    this->max_hp=MH;
}

void Plant::setHp(const int H){
    this->hp=H;
}


void Plant::setCost(const int C){
    this->cost=C;
}

int Plant::returnMaxHp(){
    return this->max_hp;
}

int Plant::returnHp(){
    return this->hp;
}

int Plant::returnCost(){
    return this->cost;
}





