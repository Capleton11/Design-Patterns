#ifndef SOLDIERFACTORY_H
#define SOLDIERFACTORY_H

#include <iostream>
#include "Soldiers.h"
using namespace std;
class SoldierFactory{
 protected:
    virtual Soldiers* createUnit() =0;
    virtual int calculateTotalHealthPerUnit( Soldiers* soldiers) ;
    virtual int calculateToatalDamagePerUnit( Soldiers* soldiers);
    virtual int calculateTotalDefensePerUnit(Soldiers* soldiers);

 private:
    Soldiers* soldiers;
   

};
#endif