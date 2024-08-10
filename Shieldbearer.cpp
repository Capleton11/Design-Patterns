#include "Shieldbearer.h"

// Shieldbearer::Shieldbearer(int health, int damage, int defence, int soldiersNO, std::string unitName):Soldiers(health, damage, defence, soldiersNO, unitName){}

Shieldbearer::Shieldbearer() {
    healthPerSoldier = 120;
    damagePerSoldier = 40;
    defencePerSoldier = 90;
    amountOfSoldiersPerUnit = 8;
    unitName = "ShieldBearer";
}

Shieldbearer::Shieldbearer(const Shieldbearer &other) {
    healthPerSoldier = other.healthPerSoldier;
    damagePerSoldier = other.damagePerSoldier;
    defencePerSoldier = other.defencePerSoldier;
    amountOfSoldiersPerUnit = other.amountOfSoldiersPerUnit;
    unitName = other.unitName;
}

Soldiers* Shieldbearer::clonis() {
    return new Shieldbearer(*this);
}

void Shieldbearer::prepare(){
    std::cout << "Execution: Shieldbearer -> Prepare \n " << std::endl;
}

void Shieldbearer::rest(){
    std::cout << "Execution: Shieldbearer -> Rest \n " << std::endl;
}

void Shieldbearer::retreat(){
    std::cout << "Execution: Shieldbearer -> Retreat \n " << std::endl;
}

void Shieldbearer::execute(){
    std::cout << "Execution: Shieldbearer -> Execute \n " << std::endl;
}