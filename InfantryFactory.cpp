#include <iostream>
#include "SoldierFactory.h"
#include "InfantryFactory.h"
#include "Infantry.h"
using namespace std;

Soldiers* InfantryFactory::createUnit() {
    return new Infantry();
}