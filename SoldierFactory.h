#ifndef SOLDIERFACTORY_H
#define SOLDIERFACTORY_H

#include "Soldiers.h"

class SoldierFactory
{
private:
    Soldiers *soldiers;

public:
    virtual Soldiers *createUnit() = 0;
    virtual int calculateTotalHealthPerUnit(Soldiers *soldiers);
    virtual int calculateTotalDamagePerUnit(Soldiers *soldiers);
    virtual int calculateTotalDefencePerUnit(Soldiers *soldiers);
    virtual ~SoldierFactory();
};
#endif