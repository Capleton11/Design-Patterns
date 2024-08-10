#include "SoldierFactory.h"


int SoldierFactory::calculateTotalHealthPerUnit( Soldiers* soldiers)  {
return soldiers->getHealthPerSoldier() * soldiers->getAmountOfSoldiersPerUnit();
}

 int SoldierFactory::calculateTotalDamagePerUnit( Soldiers* soldiers)  {
return soldiers->getDamagePerSoldier() * soldiers->getAmountOfSoldiersPerUnit();
}

 int SoldierFactory::calculateTotalDefencePerUnit( Soldiers* soldiers)  {
return soldiers->getDefencePerSoldier() * soldiers->getAmountOfSoldiersPerUnit();
}

SoldierFactory::~SoldierFactory(){}