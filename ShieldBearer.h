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
};

#endif