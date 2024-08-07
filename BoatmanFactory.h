#ifndef BOATMANFACTORY_H
#define BOATMANFACTORY_H

#include <iostream>
#include "SoldierFactory.h"
using namespace std;
class BoatmanFactory : public SoldierFactory{
 public:
    virtual Soldiers* createUnit();

};
#endif