#include "Memento.h"

Memento::Memento(int healthPerSoldier, int damagePerSoldier, int defencePerSoldier, int amountOfSoldiersPerUnit, std::string unitName){
    this->healthPerSoldier = healthPerSoldier;
    this->damagePerSoldier = damagePerSoldier;
    this->defencePerSoldier = defencePerSoldier;
    this->amountOfSoldiersPerUnit = amountOfSoldiersPerUnit;
    this->unitName = unitName;

    // this->ct->memento.push_back(this);
}

