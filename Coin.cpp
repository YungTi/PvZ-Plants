#include"Coin.h"


int Coin::max_hp;
int Coin::cost;
int Coin::rounds;
int Coin::earn;
//----------Coin----------
Coin::Coin():Plant(max_hp),cd(rounds){
}

void Coin::initCoin(const int MH,const int C,const int R,const int E){
    max_hp=MH;
    setHp(MH);
    cost=C;
    rounds=R;
    this->cd=R;
    earn=E;
}

int Coin::playerAct(){
    this->cd-=1;
    if(this->cd!=0){
        std::cout<<"You still need "<<this->cd<<" visits to earn money."<<std::endl;
    }
    else{
        std::cout<<"You have earned $"<<earn<<"!"<<std::endl;
        cd=rounds;
        return earn;
    }
    return -1;
}

void Coin::printPlant(){
    std::cout<<"Mushroom HP:"<<returnHp()<<" ("<<this->cd<<" more visits)"<<std::endl;
}

int Coin::returnMaxHp(){
    return max_hp;
}

int Coin::returnCost(){
    return cost;
}
