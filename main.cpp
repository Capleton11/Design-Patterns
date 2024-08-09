#include <iostream>
#include "SoldierFactory.h"
#include "ShieldbearerFactory.h"
#include "InfantryFactory.h"
#include "BoatmanFactory.h"
#include "Soldiers.h"


void displayUnitStats(SoldierFactory* factory) {
    Soldiers* unit = factory->createUnit();
    Soldiers* clonedUnit = unit->clonis();

    std::cout << "Original Unit: " << unit->getUnitName() << std::endl;
    std::cout << "Total Health: " << factory->calculateTotalHealthPerUnit(unit) << std::endl;
    std::cout << "Total Damage: " << factory->calculateTotalDamagePerUnit(unit) << std::endl;
    std::cout << "Total Defence: " << factory->calculateTotalDefencePerUnit(unit) << std::endl;

    std::cout << "Cloned Unit: " << clonedUnit->getUnitName() << std::endl;
    std::cout << "Total Health: " << factory->calculateTotalHealthPerUnit(clonedUnit) << std::endl;
    std::cout << "Total Damage: " << factory->calculateTotalDamagePerUnit(clonedUnit) << std::endl;
    std::cout << "Total Defence: " << factory->calculateTotalDefencePerUnit(clonedUnit) << std::endl;

    delete unit;
    delete clonedUnit;
}

int main() {
    SoldierFactory* infantryFactory = new InfantryFactory();
    SoldierFactory* shieldBearerFactory = new ShieldBearerFactory();
    SoldierFactory* boatmanFactory = new BoatmanFactory();

    displayUnitStats(infantryFactory);
    displayUnitStats(shieldBearerFactory);
    displayUnitStats(boatmanFactory);

    delete infantryFactory;
    infantryFactory =nullptr;
    delete shieldBearerFactory;
    shieldBearerFactory = nullptr;
    delete boatmanFactory;
    boatmanFactory = nullptr;

    return 0;
}