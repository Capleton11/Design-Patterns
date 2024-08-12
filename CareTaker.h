#ifndef CARETAKER_H
#define CARETAKER_H

#include <list>
#include <iostream>
#include "Memento.h"
class CareTaker
{
private:
        std::list<Memento *> memento;
public:

    CareTaker();
    void save(Memento*);
    Memento* restore();
    ~CareTaker();
};

#endif