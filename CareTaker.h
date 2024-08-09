#ifndef CARETAKER_H
#define CARETAKER_H

#include <list>
#include <iostream>

class Memento;
class CareTaker
{
public:
    std::list<Memento *> memento;
    CareTaker();
};

#endif