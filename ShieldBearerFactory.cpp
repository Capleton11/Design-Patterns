#include <iostream>
#include "SoldierFactory.h"
#include "ShieldBearerFactory.h"
#include "ShieldBearer.h"
using namespace std;

Soldiers* ShieldBearerFactory::createUnit() {
    return new Shieldbearer();
}