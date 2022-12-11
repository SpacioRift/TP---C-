#include "Environnement.hpp"
#include <iostream>

/*
 constructeur
 taille : nombre de lignes et de colonnes de la grille
 */
Environnement::Environnement(int taille) {
    // construit une grille taille x taille
    this->tailleGrille = taille;
    this->grille = new Position * [taille];

    for (int i=0; i < taille; i++)
        this->grille[i] = new Position[ taille ];

    this->nbLibres = taille * taille;
}

/*
 renvoie true s'il a ete possible d'occuper la position (x,y)
 false sinon
 */
bool Environnement::occuper(int x,int y, char _occupant){
    if ((x >=0) && (x < this->tailleGrille) && (y>=0) && (y< this->tailleGrille)) {
        this->nbLibres--;
        return this->grille[x][y].occuper(_occupant);
    } else return false;
}
/*
 renvoie true si la position etait occupee et a ete liberee
 false sinon
 */
bool Environnement::liberer(int x,int y){
    if ((x >=0) && (x < this->tailleGrille) && (y>=0) && (y< this->tailleGrille)) {
        this->nbLibres++;
        return this->grille[x][y].liberer();
    } else return false;
}
/*
 renvoie true si la position est libre
 false sinon
 */
bool Environnement::estLibre(int x,int y){
    if ((x >=0) && (x < this->tailleGrille) && (y>=0) && (y< this->tailleGrille))
        return this->grille[x][y].getEstLibre();
    else return false;
}
/*
 affiche la grille et ses occupants
 */
void Environnement::afficher(){
    std::cout<<"\nSituation de l'environnement :\n";
    std::cout<<" ";
    for (int j=0; j < this->tailleGrille; j++)
        std::cout<<"_ ";
    std::cout<<endl;

    for (int i=0; i < this->tailleGrille; i++){
        std::cout<<"|";
        for (int j=0; j < this->tailleGrille; j++){
            if (this->estLibre(i, j))
                std::cout<<"_|";
            else
                std::cout<< this->grille[i][j].getOccupant() << "|";
        }
        std::cout<<endl;
    }
}

int Environnement::getTailleGrille(){
    return tailleGrille;
}
