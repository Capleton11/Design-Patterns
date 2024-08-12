#include "InfantryFactory.h"
#include "BoatmanFactory.h"
#include "ShieldbearerFactory.h"
#include "CareTaker.h"

void displayUnitStats(SoldierFactory* factory) {
    Soldiers* unit = factory->createUnit();
    Soldiers* clonedUnit = unit->clonis();

    unit->engage();
    unit->disengage();

    // Memento* mem = unit->militusMemento();
    // mem->ct->save(mem);
    CareTaker* one = new CareTaker();
    one->save(unit->militusMemento());
    unit->vivificaMemento(one->restore());

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
   delete one;
   one = nullptr;
}

int main()
{
    // // testing the template method:

    SoldierFactory* infantryFactory = new InfantryFactory();
    SoldierFactory* shieldBearerFactory = new ShieldBearerFactory();
    SoldierFactory* boatmanFactory = new BoatmanFactory();

    displayUnitStats(infantryFactory);
    displayUnitStats(shieldBearerFactory);
    displayUnitStats(boatmanFactory);

    delete infantryFactory; delete shieldBearerFactory; delete boatmanFactory;

    // std::list<Soldiers *> n;

    // Infantry *IN = new Infantry(100, 50, 60, 400, "Concaras");
    // IN->engage();
    // IN->disengage();

    // n.push_front(IN);

    // Boatman *BO = new Boatman(100, 50, 60, 400, "Eugene");
    // BO->engage();
    // BO->disengage();

    // Shieldbearer *SH = new Shieldbearer(100, 50, 60, 400, "Benfleur");
    // SH->engage();
    // SH->disengage();

    // // testing the memento (using the Infantry):

    // Memento *INmem = IN->militusMemento();
    // INmem->ct->memento.push_front(INmem);
    // IN->vivificaMemento(INmem->ct->memento.front());

    // // testing the memento (using the Boatman):

    // Memento *BOmem = BO->militusMemento();
    // BOmem->ct->memento.push_front(BOmem);
    // BO->vivificaMemento(BOmem->ct->memento.front());

    // // testing the memento (using the Shield):

    // Memento *SHmem = SH->militusMemento();
    // SHmem->ct->memento.push_front(SHmem);
    // SH->vivificaMemento(SHmem->ct->memento.front());

    // delete INmem; delete BOmem; delete SHmem;
    // delete IN; delete BO; delete SH;

    return 0;
}