////
////  Position.cpp
////  TP-robots
////
////  Created by egrislin on 13/10/2022.
////
//
//#include "Position.hpp"
//#include <iostream>
//
///*
// constructeur
// */
//Position::Position() {
//    this->estLibre = true;
//}
//
///*
// renvoie true si la position etait libre et l'occupation a ete realisee
// false sinon
// */
//bool Position::occuper(char _occupant){
//    if (this->estLibre){
//        this->estLibre = false;
//        this->occupant = _occupant;
//        return true;
//    } else {
//        std::cout<<" La position " << this->x<< ","
//        << this->y <<" est d�j� occup�e\n";
//        return false;
//    }
//}
//
///* renvoie true si la position etait occupee et a ete liberee
// */
//bool Position::liberer(){
//    // A FAIRE
//}
//
//int Position::getX(){ return this->x;}
//int Position::getY(){ return this->y;}
//bool Position::getEstLibre(){
//    // A FAIRE
//}
//char Position::getOccupant(){
//    // A FAIRE
//}
//

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
        << this->y <<" est d�j� occup�e\n";
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
        << this->y << " est d�j� occup�e \n";
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

