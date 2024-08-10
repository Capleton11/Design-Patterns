#ifndef SOLDIERS_H
#define SOLDIERS_H

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <map>

#include "Memento.h"

class Infantry;
class Shieldbearer;
class Boatman;
class Soldiers
{
private:
    int healthPerSoldier;
    int damagePerSoldier;
    int defencePerSoldier;
    int amountOfSoldiersPerUnit;
    std::string unitName;

    virtual void prepare() = 0;
    virtual void execute() = 0;
    virtual void retreat() = 0;
    virtual void rest() = 0;
    friend Infantry;
    friend Shieldbearer;
    friend Boatman;

public:
    // Soldiers(int health, int damage, int defence, int soldiersNO, std::string unitName);
    virtual void engage();
    virtual void disengage();
    Memento *militusMemento();
    virtual Soldiers *clonis() = 0;
    void vivificaMemento(Memento *);
    virtual ~Soldiers();
    virtual int getHealthPerSoldier();
    virtual int getDamagePerSoldier();
    virtual int getDefencePerSoldier();
    virtual int getAmountOfSoldiersPerUnit();
    virtual std::string getUnitName();
};

#endif