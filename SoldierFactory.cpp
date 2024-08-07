
#include "SoldierFactory.h"
#include <iostream>



int SoldierFactory::calculateTotalHealthPerUnit( Soldiers* soldiers)  {
return soldiers->getHealthPerSoldier() * soldiers->getAmountOfSoldiersPerUnit();
}

 int SoldierFactory::calculateToatalDamagePerUnit( Soldiers* soldiers)  {
return soldiers->getDamagePerSoldier() * soldiers->getAmountOfSoldiersPerUnit();
}

 int SoldierFactory::calculateTotalDefensePerUnit( Soldiers* soldiers)  {
return soldiers->getDefencePerSoldier() * soldiers->getAmountOfSoldiersPerUnit();
}