#include"Plant.h"

//----------Plant----------
Plant::Plant(const int h){
    this->hp=h;
}

int Plant::playerAct(){
    std::cout<<"Plant Are Guilding!"<<std::endl;
    return -1;
}

int Plant::zombieAct(Zombie &obj){
    hp-=obj.getAtk();
    std::cout<<"Zombie eats plant and cause "<<obj.getAtk()<<" damage."<<std::endl;
    if(hp<=0){
        std::cout<<"Plant is dead!"<<std::endl;
    }
    return hp;
}
void Plant::setHp(const int H){
    this->hp=H;
}

int Plant::returnHp(){
    return this->hp;
}

void Plant::printPlant(){
}









