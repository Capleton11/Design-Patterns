#ifndef MEMENTO_H
#define MEMENTO_H

#include <iostream>

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
    Memento(int healthPerSoldier, int damagePerSoldier, int defencePerSoldier, int amountOfSoldiersPerUnit, std::string unitName);
    ~Memento();
};

#endif