#ifndef BOATMAN_H
#define BOATMAN_H

#include "Soldiers.h"

class Boatman : public Soldiers
{
private:
    void prepare();
    void execute();
    void retreat();
    void rest();

public:
    Boatman(int health, int damage, int defence, int soldiersNO, std::string unitName);
    void displayState();
};

#endif