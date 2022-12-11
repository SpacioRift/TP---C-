#ifndef Robot_hpp
#define Robot_hpp

#include "Position.hpp"
#include "Environnement.hpp"
#include "Occupant.hpp"
#include "Box.hpp"

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
    bool tenir(Robot &, Environnement &, Box &);
    bool lacher(Robot &, Environnement &, Box &);
};

#endif /* Robot_hpp */
