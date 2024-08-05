#ifndef SOLDIERS_H
#define SOLDIERS_H

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <map>

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

public:
    virtual void engage();
    virtual void disengage();
    Soldiers* clonis();
};

#endif