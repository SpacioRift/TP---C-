#include "Position.hpp"
#include <iostream>

/*
 constructeur
 */
Position::Position() {
    this->estLibre = true;
}

/*
 renvoie true si la position etait libre et l'occupation a ete realisee
 false sinon
 */
bool Position::occuper(char _occupant){
    if (this->estLibre){
        this->estLibre = false;
        this->occupant = _occupant;
        return true;
    } else {
        std::cout<<" La position " << this->x<< ","
        << this->y <<" est déjà occupée\n";
        return false;
    }
}

/* renvoie true si la position etait occupee et a ete liberee
 */
bool Position::liberer(){
    if(this->occupant){
        this->occupant = false;
        this->estLibre = true;
        return true;
    }else {
        std::cout<<"La position " << this->x << ","
        << this->y << " est déjà occupée \n";
        return false;
    }
}

int Position::getX(){
    return this->x;
}

int Position::getY(){
    return this->y;
}

bool Position::getEstLibre(){
    return this->estLibre;
}
char Position::getOccupant(){
    return this->occupant;
}
