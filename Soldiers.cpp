#include "Soldiers.h"

void Soldiers::engage(){
    prepare();
    execute();
}

void Soldiers::disengage(){
    retreat();
    rest();
}

int Soldiers::getHealthPerSoldier()  { return healthPerSoldier; }
int Soldiers::getDamagePerSoldier()  { return damagePerSoldier; }
int Soldiers::getDefencePerSoldier()  { return defencePerSoldier; }
int Soldiers::getAmountOfSoldiersPerUnit()  { return amountOfSoldiersPerUnit; }
std::string Soldiers::getUnitName()  { return unitName; }