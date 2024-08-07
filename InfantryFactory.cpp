#include <iostream>
#include "SoldierFactory.h"
#include "InfantryFactory.h"
using namespace std;

Soldiers* InfantryFactory::createUnit() {
    return new Infantry();
}