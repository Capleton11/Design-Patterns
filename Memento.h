#ifndef MEMENTO_H
#define MEMENTO_H

#include <iostream>

#include "CareTaker.h"
class Soldiers;
class Memento
{
    int healthPerSoldier;
    int damagePerSoldier;
    int defencePerSoldier;
    int amountOfSoldiersPerUnit;
    std::string unitName;

public:
    friend Soldiers;
    CareTaker* ct;
    Memento(int healthPerSoldier, int damagePerSoldier, int defencePerSoldier, int amountOfSoldiersPerUnit, std::string unitName);
};

#endif