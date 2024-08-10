#include "Boatman.h"

// Boatman::Boatman(int health, int damage, int defence, int soldiersNO, std::string unitName):Soldiers(health, damage, defence, soldiersNO, unitName){}

Boatman::Boatman() {
    healthPerSoldier = 80;
    damagePerSoldier = 70;
    defencePerSoldier = 60;
    amountOfSoldiersPerUnit = 12;
    unitName = "Boatman";
}

Boatman::Boatman(const Boatman &other) {
    healthPerSoldier = other.healthPerSoldier;
    damagePerSoldier = other.damagePerSoldier;
    defencePerSoldier = other.defencePerSoldier;
    amountOfSoldiersPerUnit = other.amountOfSoldiersPerUnit;
    unitName = other.unitName;
}

Soldiers* Boatman::clonis(){
    return new Boatman(*this);
}

void Boatman::prepare(){
    std::cout << "Execution: Boatman -> Prepare \n " << std::endl;
}

void Boatman::rest(){
    std::cout << "Execution: Boatman -> Rest \n " << std::endl;
}

void Boatman::retreat(){
    std::cout << "Execution: Boatman -> Retreat \n " << std::endl;
}

void Boatman::execute(){
    std::cout << "Execution: Boatman -> Execute \n " << std::endl;
}

Soldiers* Boatman::clonis(){
    return new Boatman(*this);
}