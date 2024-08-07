#ifndef SHIELDBEARERFACTORY_H
#define SHIELDBEARERFACTORY_H

#include <iostream>
#include "SoldierFactory.h"
using namespace std;
class ShieldBearerFactory : public SoldierFactory{
 public:
    virtual Soldiers* createUnit();
  

};
#endif