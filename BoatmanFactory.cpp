#include <iostream>
#include "SoldierFactory.h"
#include "BoatmanFactory.h"
#include "Boatman.h"
#include "Soldiers.h"
using namespace std;

Soldiers* BoatmanFactory::createUnit() {
    Soldiers* boatMan= new Boatman();
    return boatMan;
}