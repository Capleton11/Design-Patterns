#include "Boatman.h"

Boatman::Boatman(int health, int damage, int defence, int soldiersNO, std::string unitName):Soldiers(health, damage, defence, soldiersNO, unitName){}

void Boatman::prepare(){
    std::cout << "Execution: Boatman -> Prepare \n " << std::endl;
}

void Boatman::rest(){
    std::cout << "Execution: Boatman -> Rest \n " << std::endl;
}

void Boatman::retreat(){
    std::cout << "Execution: Boatman -> Retreat \n " << std::endl;
}

void Boatman::execute(){
    std::cout << "Execution: Boatman -> Execute \n " << std::endl;
}