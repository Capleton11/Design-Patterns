#ifndef INFANTRY_H
#define INFANTRY_H

#include "Soldiers.h"

class Infantry : public Soldiers
{
private:
    void prepare();
    void execute();
    void retreat();
    void rest();

public:
    Infantry(int health, int damage, int defence, int soldiersNO, std::string unitName);
};

#endif