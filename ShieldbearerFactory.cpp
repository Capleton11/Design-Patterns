#include "ShieldbearerFactory.h"

Soldiers* ShieldBearerFactory::createUnit() {
    Soldiers* shieldguy = new Shieldbearer();
    return shieldguy;
}