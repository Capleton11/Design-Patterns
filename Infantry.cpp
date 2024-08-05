#include "Infantry.h"

Infantry::Infantry(int health, int damage, int defence, int soldiersNO, std::string unitName):Soldiers(health, damage, defence, soldiersNO, unitName){}

void Infantry::prepare(){
    setHealthPerSoldier((5/100)* getHealthPerSoldier() + getHealthPerSoldier()); 
    setDefencePerSoldier((5/100)* getDefencePerSoldier() + getDefencePerSoldier());
    setDamagePerSoldier((5/100)* getDamagePerSoldier() + getDamagePerSoldier());
}

void Infantry::rest(){
    setHealthPerSoldier((7/100)* getHealthPerSoldier() + getHealthPerSoldier()); 
    setDefencePerSoldier((6/100)* getDefencePerSoldier() + getDefencePerSoldier());
    setDamagePerSoldier((6/100)* getDamagePerSoldier() + getDamagePerSoldier());
    setAmountOfSoldiersPerUnit(getAmountOfSoldiersPerUnit() + 1);
}

void Infantry::retreat(){
    setHealthPerSoldier((8/100)* getHealthPerSoldier() - getHealthPerSoldier()); 
    setDefencePerSoldier((7/100)* getDefencePerSoldier() - getDefencePerSoldier());
    setDamagePerSoldier((7/100)* getDamagePerSoldier() - getDamagePerSoldier());
    setAmountOfSoldiersPerUnit(getAmountOfSoldiersPerUnit() - 1);
}

void Infantry::execute(){
    setHealthPerSoldier((1/100)* getHealthPerSoldier() - getHealthPerSoldier()); 
}

void Infantry::displayState(){
    std::cout << "object type: Infantry"<< '\t' << "name: "<< getUnitName() << '\n';
    std::cout <<'\t'<< "health per soldier: " << getHealthPerSoldier() << '\n';
    std::cout <<'\t'<< "damage per soldier: " << getDamagePerSoldier() << '\n';
    std::cout <<'\t'<< "defence per soldier: " << getDefencePerSoldier() << '\n';
    std::cout <<'\t'<< "amount of soldiers: " << getAmountOfSoldiersPerUnit() << '\n';
}