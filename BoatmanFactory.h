#ifndef BOATMANFACTORY_H
#define BOATMANFACTORY_H

#include "SoldierFactory.h"
#include "Boatman.h"

class BoatmanFactory : public SoldierFactory
{
public:
    virtual Soldiers *createUnit();
};
#endif