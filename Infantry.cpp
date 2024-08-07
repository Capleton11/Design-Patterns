#include "Infantry.h"

Infantry::Infantry(int health, int damage, int defence, int soldiersNO, std::string unitName):Soldiers(health, damage, defence, soldiersNO, unitName){}

void Infantry::prepare(){
    std::cout << "Execution: Infantry -> Prepare \n " << std::endl;
}

void Infantry::rest(){
    std::cout << "Execution: Infantry -> Rest \n " << std::endl;
}

void Infantry::retreat(){
    std::cout << "Execution: Infantry -> Retreat \n " << std::endl;
}

void Infantry::execute(){
    std::cout << "Execution: Infantry -> Execute \n " << std::endl;
}