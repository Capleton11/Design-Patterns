#ifndef INFANTRYFACTORY_H
#define INFANTRYFACTORY_H

#include <iostream>
#include "SoldierFactory.h"
using namespace std;
class InfantryFactory : public SoldierFactory{
 public:
    virtual Soldiers* createUnit();

};
#endif