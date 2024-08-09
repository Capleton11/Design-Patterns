#include <iostream>
#include "SoldierFactory.h"
#include "InfantryFactory.h"
#include "Infantry.h"
#include "Soldiers.h"
using namespace std;

Soldiers* InfantryFactory::createUnit() {
    Soldiers* infant = new Infantry();
    return infant;
}