#ifndef Position_hpp
#define Position_hpp

class Position {
    int x;
    int y;
    bool estLibre;
    char occupant;
public:
    Position();
    bool occuper(char);
    bool liberer();
    int getX();
    int getY();
    bool getEstLibre();
    char getOccupant();
};

#endif /* Position_hpp */
