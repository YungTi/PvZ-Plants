#include"Coin.h"


//----------Coin----------
Coin::Coin(const int MH,const int C,const int R,const int E){
    setMaxHp(MH);
    setHp(MH);
    setCost(C);
    this->rounds=R;
    this->cd=R;
    this->earn=E;
}

int Coin::playerAct(){
    this->cd-=1;
    if(this->cd!=0){
        std::cout<<"You still need "<<this->cd<<" visits to earn money."<<std::endl;
    }
    else{
        std::cout<<"You have earned $"<<this->earn<<"!"<<std::endl;
        this->cd=this->rounds;
        return this->earn;
    }
    return -1;
}

void Coin::printPlant(){
    std::cout<<"Mushroom HP:"<<returnHp()<<" ("<<this->cd<<" more visits)"<<std::endl;
}

