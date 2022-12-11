#ifndef Box_hpp
#define Box_hpp
#include "Environnement.hpp"
#include "Occupant.hpp"

class Box : public Occupant{
protected:
    bool tenir;
    bool lacher;
public:
    Box(char,int,int, Environnement & e);
    void setTenir(bool);
    bool Tenir(char);
    bool Lacher();
};

#endif // Box_hpp
