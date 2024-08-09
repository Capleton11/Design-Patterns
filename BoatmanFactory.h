#ifndef BOATMANFACTORY_H
#define BOATMANFACTORY_H

#include <iostream>
#include "SoldierFactory.h"
#include "Soldiers.h"
using namespace std;
class BoatmanFactory : public SoldierFactory{
 public:
    virtual Soldiers* createUnit();

};
#endif