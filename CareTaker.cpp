#include "CareTaker.h"

CareTaker::CareTaker(){}

void CareTaker::save(Memento* memento){
    this->memento.push_front(memento);
}

Memento* CareTaker::restore(){
    Memento* IDX = memento.front();
    memento.pop_front();
    return IDX;
}