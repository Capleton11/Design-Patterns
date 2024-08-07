#ifndef SOLDIERS_H
#define SOLDIERS_H

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <map>
#include "ShieldBearer.h"
#include "BoatMan.h"
#include "Infantry.h"


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
    virtual void engage();
    virtual void disengage();
    Soldiers* clonis();
     virtual int getHealthPerSoldier();
     virtual int getDamagePerSoldier();
     virtual int getDefencePerSoldier();
     virtual int getAmountOfSoldiersPerUnit();
     virtual std::string getUnitName();
     virtual ~Soldiers();
     
};

#endif