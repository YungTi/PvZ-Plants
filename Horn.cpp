#include"Horn.h"

int Horn::cost;
int Horn::max_hp;
int Horn::atk;
//----------Horn----------
Horn::Horn():Plant(max_hp){
}

void Horn::initHorn(const int MH,const int C,const int A){
    max_hp=MH;
    setHp(MH);
    cost=C;
    atk=A;
}

int Horn::zombieAct(Zombie &obj){
    int zomATK=obj.getAtk();
    obj.hp-=atk;
    std::cout<<"Hornflower gives "<<atk<<" damage to the zombie!"<<std::endl;
    if(obj.hp>0){
        setHp(returnHp()-zomATK);
        std::cout<<"Zombie eats plant Hornflower and causes damage "<<zomATK<<"."<<std::endl;
    }
    if(returnHp()<=0){
        std::cout<<"Plant is dead!"<<std::endl;
        return 0;
    }
    return returnHp();
}

void Horn::printPlant(){
    std::cout<<"Hornflower HP:"<<returnHp()<<std::endl;
}

int Horn::returnMaxHp(){
    return max_hp;
}

int Horn::returnCost(){
    return cost;
}
