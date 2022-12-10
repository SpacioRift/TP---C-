#ifndef Box_hpp
#define Box_hpp
#include "Environnement.hpp"
#include "Occupant.hpp"

class Box : public Occupant{
    bool tenir;
    bool lacher;
public:
    Box(char,int,int,bool,bool, Environnement & e);
    bool tenue();
    bool lachee();
};

#endif // Box_hpp
