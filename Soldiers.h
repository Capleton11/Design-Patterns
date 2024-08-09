#ifndef SOLDIERS_H
#define SOLDIERS_H

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <map>


class Infantry;    // Forward declaration
class Shieldbearer; // Forward declaration
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
    virtual void engage();
    virtual void disengage();
     virtual Soldiers* clonis()=0;
     virtual int getHealthPerSoldier();
     virtual int getDamagePerSoldier();
     virtual int getDefencePerSoldier();
     virtual int getAmountOfSoldiersPerUnit();
     virtual std::string getUnitName();
     virtual ~Soldiers();
     
};

#endif