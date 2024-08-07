#include "Boatman.h"

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
    // prepare prepare ...
}

void Boatman::rest(){
    // rest rest ...
}

void Boatman::retreat(){
    // retreat retreat ...
}

void Boatman::execute(){
    // execute execute ...
}