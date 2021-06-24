#include"Bomb.h"


//----------Bomb----------
Bomb::Bomb(const int mh,const int c){
    setMaxHp(mh);
    setHp(mh);
    setCost(c);
}


int Bomb::zombieAct(int zomATK){
    std::cout<<"Bombflower gives "<<returnMaxHp()<<" damage to the zombie!"<<std::endl;
    std::cout<<"Bombflower is dead!"<<std::endl;
    setHp(0);
    return returnHp();
}

void Bomb::printPlant(){
    std::cout<<"Bombflower HP:"<<returnHp()<<std::endl;
}
