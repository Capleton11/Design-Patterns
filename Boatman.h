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
    Soldiers* clonis();
    Boatman();
    Boatman(const Boatman &other);
};

#endif