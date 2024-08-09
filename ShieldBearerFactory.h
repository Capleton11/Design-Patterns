#ifndef SHIELDBEARERFACTORY_H
#define SHIELDBEARERFACTORY_H

#include <iostream>
#include "SoldierFactory.h"
#include "Soldiers.h"
using namespace std;
class ShieldBearerFactory : public SoldierFactory{
 public:
    virtual Soldiers* createUnit();
  

};
#endif