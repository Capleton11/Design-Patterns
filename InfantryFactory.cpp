#include "InfantryFactory.h"

Soldiers* InfantryFactory::createUnit() {
    Soldiers* infant = new Infantry();
    return infant;
}