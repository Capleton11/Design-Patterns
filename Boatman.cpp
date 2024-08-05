#include "Boatman.h"

Boatman::Boatman(int health, int damage, int defence, int soldiersNO, std::string unitName):Soldiers(health, damage, defence, soldiersNO, unitName){}

void Boatman::prepare(){
    setHealthPerSoldier((4/100)* getHealthPerSoldier() + getHealthPerSoldier()); 
    setDefencePerSoldier((4/100)* getDefencePerSoldier() + getDefencePerSoldier());
    setDamagePerSoldier((4/100)* getDamagePerSoldier() + getDamagePerSoldier());
}

void Boatman::rest(){
    setHealthPerSoldier((6/100)* getHealthPerSoldier() + getHealthPerSoldier()); 
    setDefencePerSoldier((5/100)* getDefencePerSoldier() + getDefencePerSoldier());
    setDamagePerSoldier((5/100)* getDamagePerSoldier() + getDamagePerSoldier());
    setAmountOfSoldiersPerUnit(getAmountOfSoldiersPerUnit() + 1);
}

void Boatman::retreat(){
    setHealthPerSoldier((7/100)* getHealthPerSoldier() - getHealthPerSoldier()); 
    setDefencePerSoldier((6/100)* getDefencePerSoldier() - getDefencePerSoldier());
    setDamagePerSoldier((6/100)* getDamagePerSoldier() - getDamagePerSoldier());
    setAmountOfSoldiersPerUnit(getAmountOfSoldiersPerUnit() - 1);
}

void Boatman::execute(){
    setHealthPerSoldier((0.5/100)* getHealthPerSoldier() - getHealthPerSoldier()); 
}

void Boatman::displayState(){
    std::cout << "object type: Infantry"<< '\t' << "name: "<< getUnitName() << '\n';
    std::cout <<'\t'<< "health per soldier: " << getHealthPerSoldier() << '\n';
    std::cout <<'\t'<< "damage per soldier: " << getDamagePerSoldier() << '\n';
    std::cout <<'\t'<< "defence per soldier: " << getDefencePerSoldier() << '\n';
    std::cout <<'\t'<< "amount of soldiers: " << getAmountOfSoldiersPerUnit() << '\n';
}