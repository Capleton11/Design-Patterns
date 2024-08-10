#include "Soldiers.h"

// Soldiers::Soldiers(int health, int damage, int defence, int soldiersNO, std::string unitName){
//     this->healthPerSoldier = health;
//     this->damagePerSoldier = damage;
//     this->defencePerSoldier = defence;
//     this->amountOfSoldiersPerUnit = soldiersNO;
//     this->unitName = unitName;
// }


Soldiers::~Soldiers(){}

void Soldiers::engage(){
    prepare();
    execute();
}

void Soldiers::disengage(){
    retreat();
    rest();
}

Memento* Soldiers::militusMemento(){
    Memento* N = new Memento(healthPerSoldier, damagePerSoldier, defencePerSoldier, amountOfSoldiersPerUnit, unitName);
    return N;
}

void Soldiers::vivificaMemento(Memento* meme){
    amountOfSoldiersPerUnit = meme->amountOfSoldiersPerUnit;
    damagePerSoldier = meme->damagePerSoldier;
    defencePerSoldier = meme->defencePerSoldier;
    healthPerSoldier = meme->healthPerSoldier;
    unitName = meme->unitName;
}

int Soldiers::getHealthPerSoldier()  { 
    return healthPerSoldier; 
}
int Soldiers::getDamagePerSoldier()  {
     return damagePerSoldier;
 }
int Soldiers::getDefencePerSoldier()  {
    return defencePerSoldier; 
}
int Soldiers::getAmountOfSoldiersPerUnit()  { 
    return amountOfSoldiersPerUnit;
}
std::string Soldiers::getUnitName()  { 
return unitName; 
}