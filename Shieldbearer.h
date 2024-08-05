#ifndef SHIELDBEARER_H
#define SHIELDBEARER_H

#include "Soldiers.h"

class Shieldbearer : public Soldiers
{
private:
    void prepare();
    void execute();
    void retreat();
    void rest();

public:
    Shieldbearer(int health, int damage, int defence, int soldiersNO, std::string unitName);
    void displayState();
};

#endif