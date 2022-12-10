//
//  Robot.hpp
//  TP-robots
//
//  Created by egrislin on 13/10/2022.
//

#ifndef Robot_hpp
#define Robot_hpp

#include "Position.hpp"
#include "Environnement.hpp"
#include "Occupant.hpp"

class Robot : public Occupant{
    int vitesse;
    char direction;//"N", "S", "E", "O"
public:
    Robot(char,int, int,int,char, Environnement &);
    void setDirection(char);
    bool deplacer(int,int, Environnement &);
    bool avancer(Environnement &); // avancer d'un nombre de cases = la vitesse dans la direction courante
    void operator+(int);//augmenter la vitesse
    void operator-(int);//diminuer la vitesse
};

#endif /* Robot_hpp */


