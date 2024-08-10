#include "Infantry.h"

// Infantry::Infantry(int health, int damage, int defence, int soldiersNO, std::string unitName):Soldiers(health, damage, defence, soldiersNO, unitName){}

Infantry::Infantry() {
    healthPerSoldier = 100;
    damagePerSoldier = 50;
    defencePerSoldier = 75;
    amountOfSoldiersPerUnit = 10;
    unitName = "Infantry";
}

Infantry::Infantry(const Infantry &other) {
    healthPerSoldier = other.healthPerSoldier;
    damagePerSoldier = other.damagePerSoldier;
    defencePerSoldier = other.defencePerSoldier;
    amountOfSoldiersPerUnit = other.amountOfSoldiersPerUnit;
    unitName = other.unitName;
}

Soldiers* Infantry::clonis() {
    return new Infantry(*this);
}

void Infantry::prepare(){
    std::cout << "Execution: Infantry -> Prepare \n " << std::endl;
}

void Infantry::rest(){
    std::cout << "Execution: Infantry -> Rest \n " << std::endl;
}

void Infantry::retreat(){
    std::cout << "Execution: Infantry -> Retreat \n " << std::endl;
}

void Infantry::execute(){
    std::cout << "Execution: Infantry -> Execute \n " << std::endl;
}