#include "Infantry.h"


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
    // prepare prepare ...
}

void Infantry::rest(){
    // rest rest ...
}

void Infantry::retreat(){
    // retreat retreat ...
}

void Infantry::execute(){
    // execute execute ...
}

Infantry::~Infantry() {}