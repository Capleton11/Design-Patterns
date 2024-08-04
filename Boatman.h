#ifndef BOATMAN_H
#define BOATMAN_H

#include "Soldiers.h"

class BoatMan : public Soldiers
{
private:
    void prepare();
    void execute();
    void retreat();
    void rest();

public:
    void engage();
    void disengage();
};

#endif