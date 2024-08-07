#include <iostream>
#include "SoldierFactory.h"
#include "BoatmanFactory.h"
#include "Boatman.h"
using namespace std;

Soldiers* BoatmanFactory::createUnit() {
    return new Boatman();
}