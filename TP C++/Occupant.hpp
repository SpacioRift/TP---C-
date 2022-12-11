#ifndef Occupant_hpp
#define Occupant_hpp

class Occupant{
    protected:
        char id;
        int x;
        int y;
    public:
        Occupant();
        char getId();
        int getX();
        int getY();
        void setX(int);
        void setY(int);
};

#endif /* Occupant_hpp */
