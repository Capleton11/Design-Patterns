#include "CareTaker.h"

CareTaker::CareTaker(){}

void CareTaker::save(Memento* memento){
    this->memento.push_front(memento);
}

Memento* CareTaker::restore(){
    if (memento.empty()) {
        return nullptr; 
    }
    Memento* IDX = memento.front();
    memento.pop_front();

    return IDX;
}

CareTaker::~CareTaker() {
    for (Memento* mem : memento) {
        delete mem;
    }
}