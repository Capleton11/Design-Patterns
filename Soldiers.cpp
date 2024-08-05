#include "Soldiers.h"

Soldiers::Soldiers(int health, int damage, int defence, int soldiersNO, std::string unitName){
    this->healthPerSoldier = health;
    this->damagePerSoldier = damage;
    this->defencePerSoldier = defence;
    this->amountOfSoldiersPerUnit = soldiersNO;
    this->unitName = unitName;
}

void Soldiers::engage(){
    prepare();
    execute();
}

void Soldiers::disengage(){
    retreat();
    rest();
}

void Soldiers::displayState(){
    std::cout << "what!!!";
}