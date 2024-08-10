#include "BoatmanFactory.h"

Soldiers* BoatmanFactory::createUnit() {
    Soldiers* boatMan= new Boatman();
    return boatMan;
}