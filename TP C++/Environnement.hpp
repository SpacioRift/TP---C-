#ifndef Environnement_hpp
#define Environnement_hpp

#include "Position.hpp"
#include <vector>
using namespace std;

class Environnement {
protected:
    int tailleGrille; // nombre de lignes et de colonnes de la grille
    Position ** grille; // grille carree
    int nbLibres; // nombre courant de positions libres
public:
    Environnement(int);
    bool occuper(int,int, char);// essaie d'occuper une position
    bool liberer(int,int); // essaie de liberer une position
    bool estLibre(int,int); // indique si la position est libre
    char getOccupant(int,int); // renvoie l'occupant d'une position
    void afficher(); // affiche l'état de la grille
    int getTailleGrille();
};

#endif /* Environnement_hpp */
