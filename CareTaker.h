#ifndef CARETAKER_H
#define CARETAKER_H

#include <list>

class Memento;
class CareTaker
{
    std::list<Memento*> memento;

public:
    friend Memento;
};

#endif