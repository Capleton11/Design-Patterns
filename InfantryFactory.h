#ifndef INFANTRYFACTORY_H
#define INFANTRYFACTORY_H

#include "Infantry.h"
#include "SoldierFactory.h"

class InfantryFactory : public SoldierFactory{
 public:
    virtual Soldiers* createUnit();

};

#endif