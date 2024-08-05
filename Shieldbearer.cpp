#include "Shieldbearer.h"

Shieldbearer::Shieldbearer(int health, int damage, int defence, int soldiersNO, std::string unitName):Soldiers(health, damage, defence, soldiersNO, unitName){

}

void Shieldbearer::prepare(){
    setHealthPerSoldier((6/100)* getHealthPerSoldier() + getHealthPerSoldier()); 
    setDefencePerSoldier((6/100)* getDefencePerSoldier() + getDefencePerSoldier());
    setDamagePerSoldier((6/100)* getDamagePerSoldier() + getDamagePerSoldier());
}

void Shieldbearer::rest(){
    setHealthPerSoldier((8/100)* getHealthPerSoldier() + getHealthPerSoldier()); 
    setDefencePerSoldier((7/100)* getDefencePerSoldier() + getDefencePerSoldier());
    setDamagePerSoldier((7/100)* getDamagePerSoldier() + getDamagePerSoldier());
    setAmountOfSoldiersPerUnit(getAmountOfSoldiersPerUnit() + 1);
}

void Shieldbearer::retreat(){
    setHealthPerSoldier((9/100)* getHealthPerSoldier() - getHealthPerSoldier()); 
    setDefencePerSoldier((8/100)* getDefencePerSoldier() - getDefencePerSoldier());
    setDamagePerSoldier((8/100)* getDamagePerSoldier() - getDamagePerSoldier());
    setAmountOfSoldiersPerUnit(getAmountOfSoldiersPerUnit() - 1);
}

void Shieldbearer::execute(){
    setHealthPerSoldier((2/100)* getHealthPerSoldier() - getHealthPerSoldier()); 
}

void Shieldbearer::displayState(){
    std::cout << "object type: Infantry"<< '\t' << "name: "<< getUnitName() << '\n';
    std::cout <<'\t'<< "health per soldier: " << getHealthPerSoldier() << '\n';
    std::cout <<'\t'<< "damage per soldier: " << getDamagePerSoldier() << '\n';
    std::cout <<'\t'<< "defence per soldier: " << getDefencePerSoldier() << '\n';
    std::cout <<'\t'<< "amount of soldiers: " << getAmountOfSoldiersPerUnit() << '\n';
}