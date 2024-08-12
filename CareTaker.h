#ifndef CARETAKER_H
#define CARETAKER_H

#include <list>
#include <iostream>
#include "Memento.h"
class CareTaker
{
public:
    std::list<Memento *> memento;
    CareTaker();
    void save(Memento*);
    Memento* restore();
};

#endif