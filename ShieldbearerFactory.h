#ifndef SHIELDBEARERFACTORY_H
#define SHIELDBEARERFACTORY_H

#include "SoldierFactory.h"
#include "Shieldbearer.h"

class ShieldBearerFactory : public SoldierFactory
{
public:
    virtual Soldiers *createUnit();
};

#endif