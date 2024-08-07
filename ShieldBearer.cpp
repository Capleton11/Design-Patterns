#include "ShieldBearer.h"

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
 

}

void Shieldbearer::rest(){
    // rest rest ...
}

void Shieldbearer::retreat(){
    // retreat retreat ...
}

void Shieldbearer::execute(){
    // execute execute ...
}