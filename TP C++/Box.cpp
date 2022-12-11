#include <iostream>
#include <cstdlib>
#include <ctime>

#include "Environnement.hpp"
#include "Occupant.hpp"
#include "Box.hpp"

Box::Box(char _i, int b_x, int b_y, Environnement & e){

};

bool Box::Tenir(char _tenir){
    if(this->lacher){
        this->lacher = false;
        this->tenir = _tenir;
        return true;
    }else{
        std::cout << " La position " << this->x << "," << this->y << " est déjà occupée \n";
    }

    if(this->tenir = true){
        setX(-1);
        setY(-1);
    }else{

    }
}

bool Box::Lacher(){
    if(this->tenir){
        this->tenir = false;
        this->lacher = true;
        return true;
    }else{
        return false;
    }

    if(this->lacher = true){
        srand((int)time(0));

        setX(rand()%15 + 1);
        setY(rand()%15 + 1);
    }
}

void Box::setTenir(bool _tenir){
    tenir = _tenir;
}
