#include <iostream>
#include "SoldierFactory.h"
#include "ShieldBearerFactory.h"
#include "ShieldBearer.h"
#include "Soldiers.h"
using namespace std;

Soldiers* ShieldBearerFactory::createUnit() {
    Soldiers* shieldguy = new Shieldbearer();
    return shieldguy;
}