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

protected:
    int getHealthPerSoldier() const { return healthPerSoldier; }
    int getDamagePerSoldier() const { return damagePerSoldier; }
    int getDefencePerSoldier() const { return defencePerSoldier; }
    int getAmountOfSoldiersPerUnit() const { return amountOfSoldiersPerUnit; }
    std::string getUnitName() const { return unitName; }

    void setHealthPerSoldier(int health) { healthPerSoldier = health; }
    void setDamagePerSoldier(int damage) { damagePerSoldier = damage; }
    void setDefencePerSoldier(int defence) { defencePerSoldier = defence; }
    void setAmountOfSoldiersPerUnit(int amount) { amountOfSoldiersPerUnit = amount; }
    void setUnitName(const std::string &name) { unitName = name; }

public:
    Soldiers(int health, int damage, int defence, int soldiersNO, std::string unitName);
    /* friend Infantry;
    friend Boatman;
    friend Shieldbearer; */
    virtual void displayState();
    virtual void engage();
    virtual void disengage();
};

#endif