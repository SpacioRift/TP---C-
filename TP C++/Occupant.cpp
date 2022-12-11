#include <iostream>
#include "Occupant.hpp"

/*
 renvoie l'id du robot
 */
char Occupant::getId(){
     return this->id;
}

int Occupant::getX(){
     return x;
}

int Occupant::getY(){
     return y;
}

void Occupant::setX(int _x){
     x = _x;
}

void Occupant::setY(int _y){
     y = _y;
}
