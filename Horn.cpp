#include"Horn.h"


//----------Horn----------
Horn::Horn(const int MH,const int C,const int A){
    setMaxHp(MH);
    setHp(MH);
    setCost(C);
    this->atk=A;
}


int Horn::zombieAct(int zomATK){
    setHp(returnHp()-zomATK);
    std::cout<<"Hornflower gives "<<this->atk<<" damage to the zombie!"<<std::endl;
    std::cout<<"Zombie eats plant Hornflower and causes damage "<<zomATK<<"."<<std::endl;
    if(returnHp()<=0){
        std::cout<<"Plant is dead!"<<std::endl;
        return 0;
    }
    return returnHp();
}

void Horn::printPlant(){
    std::cout<<"Hornflower HP:"<<returnHp()<<std::endl;
}

int Horn::returnATK(){
    return this->atk;
}
