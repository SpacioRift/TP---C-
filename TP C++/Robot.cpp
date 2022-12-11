#include "Robot.hpp"
#include <iostream>

bool searchBox(Robot & r, Environnement & e, Box & b){
    int b_x = b.getX();
    int b_y = b.getY();
    int r_x = r.getX();
    int r_xM = r.getX() - 1; // r_x - 1
    int r_xP = r.getX() + 1; // r_x + 1
    int r_y = r.getY();
    int r_yM = r.getY() - 1; // r_y - 1
    int r_yP = r.getY() + 1; // r_y + 1
    int tailleGrille = e.getTailleGrille();
    
        if((r_xM = b_x) && (r_y = b_y)){ // Robot position : X = x - 1 & Y = y
            std::cout << "YOU CATCH HIM ! " << endl;
            b.setTenir(true);
            return true;
        }else if((r_xM = b_x) && (r_yM = b_y)){ // Robot position : X = x - 1 & Y = y - 1
            std::cout << "YOU CATCH HIM ! " << endl;
            b.setTenir(true);
            return true;
        }else if((r_xM = b_x) && (r_yP = b_y)){ // Robot position : X = x - 1 & Y = y + 1
            std::cout << "YOU CATCH HIM ! " << endl;
            b.setTenir(true);
            return true;
        }else if((r_x = b_x) && (r_y = b_y)){ // Robot position : X = x & Y = y
            std::cout << "YOU CATCH HIM ! " << endl;
            b.setTenir(true);
            return true;
        }else if((r_x = b_x) && (r_yM = b_y)){ // Robot position : X = x & Y = y - 1
            std::cout << "YOU CATCH HIM ! " << endl;
            b.setTenir(true);
            return true;
        }else if((r_x = b_x) && (r_yP = b_y)){ // Robot position : X = x & Y = y + 1
            std::cout << "YOU CATCH HIM ! " << endl;
            b.setTenir(true);
            return true;
        }else if((r_xP = b_x) && (r_y = b_y)){ // Robot position : X = x + 1 & Y = y 
            std::cout << "YOU CATCH HIM ! " << endl;
            b.setTenir(true);
            return true;
        }else if((r_xP = b_x) && (r_yM = b_y)){ // Robot position : X = x + 1 & Y = y - 1
            std::cout << "YOU CATCH HIM ! " << endl;
            b.setTenir(true);
            return true;
        }else if((r_xP = b_x) && (r_yP = b_y)){ // Robot position : X = x + 1 & Y = y + 1
            std::cout << "YOU CATCH HIM ! " << endl;
            b.setTenir(true);
            return true;
        }else{
            std::cout << "NO BOX IN YOUR AREA !" << endl;
            b.setTenir(false);
            return false;
        }
}

Robot::Robot(char _id,int _x, int _y,int _vitesse,char _direction, Environnement & e){
    this->id = _id;
    // si la position n'est pas libre mettre le robot en -1 -1 et avertir l'utilisateur
    if (! (e.estLibre(_x, _y))){
        std::cout<< "position " << _x <<","<< _y << " déjà occupée. ";
        this->x = -1;
        this->y = -1;
    }
    else { // si la position est libre mettre � jour les coordonnees du robot
        // et demander a l'entrepot d'occuper cet emplacement avec l'id du robot
        this->x = _x;
        this->y = _y;
        e.occuper(this->x, this->y, this->id);
    }

    this->vitesse = _vitesse;
    this->direction = _direction;
}
/*
 modifie la direction du robot si la direction en entree est possible
 */
void Robot::setDirection(char _direction){
    direction = _direction;
}

// renvoie true si le deplacement etait possible et a ete realise
// false sinon
bool Robot::deplacer(int newX, int newY, Environnement & e){
    if (e.estLibre(newX, newY)){
        e.occuper(newX, newY,this->id);
        e.liberer(this->x, this->y);
        this->x = newX;
        this->y = newY;
        return true;
    }
    else return false;
}

// avancer du nombre de cases = la vitesse dans la direction courante
bool Robot::avancer(Environnement & e){
    int newX = this->x;
    int newY = this->y;

    switch (this->direction) {
        case 'N':
            newX = newX - this->vitesse;
            break;
        case 'E':
            newY = newY + this->vitesse;
            break;
        case 'S':
            newX = newX + this->vitesse;
            break;
        case 'O':
            newY = newY - this->vitesse;
            break;
        default:;
    }
    // on utiliser la fonction deplacer qui renvoie un booleen
    return deplacer(newX,newY,e);
}

/*
 augmente la vitesse de add
 */
void Robot::operator+(int add) {
    vitesse += add;
}
/*
 diminue la vitesse de sub
 sans passer sous 0
 */
void Robot::operator-(int sub){
        vitesse -= sub;
    if(sub < 0){
        vitesse = 0;
    }
}

bool Robot::tenir(Robot & r, Environnement & e, Box & b){
    searchBox(r, e, b);
}

bool Robot::lacher(Robot & r, Environnement & e, Box & b){
    searchBox(r, e, b);
}
