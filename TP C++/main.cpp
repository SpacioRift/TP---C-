#include <iostream>
#include "Environnement.hpp"
#include "Position.hpp"
#include "Robot.hpp"
#include "Box.hpp"
using namespace std;

void menuIndicator(int i, Robot robR, Robot rob1, Environnement entrepot){
     while(i > 0 && i < 10){
        switch (i > 0 && i < 10){
        char rob;
        char speed;
        char dir;
        int speedValue;
        int x;
        int y;

        case 1: // MOOVE
            cout << "\n CHOOSE YOUR ROBOT (R OR 1 IN CAPS) : " << endl;
            cin >> rob;
                if(rob = 'R'){
                    robR.avancer(entrepot);
                }else if(rob = '1'){
                    rob1.avancer(entrepot);
                }else{
                    cout << "\n THIS ROBOT DOESN'T EXIST !" << endl;
                }
            cout << "\n CHOOSE A NUMBER : " << endl;
            cin >> i;
            menuIndicator(i, robR, rob1, entrepot);
            break;
        
        case 2: // SPEED
            cout << "\n CHOOSE YOUR ROBOT (R OR 1 IN CAPS) : " << endl;
            cin >> rob;
                if(rob = 'R'){
                    cout << "\n DO YOU WANT TO DECREASE OR INCREASE SPEED ? (D OR I IN CAPS) : " << endl;
                    cin  >> speed;
                        if(speed = 'D'){
                            cout << "\n CHOOSE YOUR DECREASE VALUE : " << endl;
                            cin >> speedValue;
                            robR.operator-(speedValue);
                        }else if(speed = 'I'){
                            cout << "\n CHOOSE YOUR INCREASE VALUE : " << endl;
                            cin >> speedValue;
                            robR.operator+(speedValue);
                        }else{
                            cout << "\n YOU MUST BE CHOOSE D OR I (IN CAPS) !" << endl;
                        }
                }else if(rob = '1'){
                    cout << "\n DO YOU WANT TO DECREASE OR INCREASE SPEED ? (D OR I IN CAPS) : " << endl;
                    cin  >> speed;
                        if(speed = 'D'){
                            cout << "\n CHOOSE YOUR DECREASE VALUE : " << endl;
                            cin >> speedValue;
                            rob1.operator-(speedValue);
                        }else if(speed = 'I'){
                            cout << "\n CHOOSE YOUR INCREASE VALUE : " << endl;
                            cin >> speedValue;
                            rob1.operator+(speedValue);
                        }else{
                            cout << "\n YOU MUST BE CHOOSE D OR I (IN CAPS) !" << endl;
                        }
                }else{
                    cout << "\n THIS ROBOT DOESN'T EXIST !" << endl;
                }
            cout << "\n CHOOSE A NUMBER : " << endl;
            cin >> i;
            menuIndicator(i, robR, rob1, entrepot);
            break;

        case 3: // DIRECTION
            cout << "\n CHOOSE YOUR ROBOT (R OR 1 IN CAPS) : " << endl;
            cin >> rob;
                if(rob = 'R'){
                    cout << "\n CHOOSE YOUR DIRECTION (N, S, E OR O IN CAPS) : " << endl;
                    cin >> dir;
                        if(dir = 'N'){
                            robR.setDirection(dir);
                        }else if(dir = 'S'){
                            robR.setDirection(dir);
                        }else if(dir = 'E'){
                            robR.setDirection(dir);
                        }else if(dir = 'O'){
                            robR.setDirection(dir);
                        }else{
                            cout << "\n HOUSTON, I BELIEVE WE'VE HAD A PROBLEM HERE " << endl;
                        }
                }else if(rob = '1'){
                    cout << "\n CHOOE YOUR DIRECTION (N, S, E OR O IN CAPS) : " << endl;
                    cin >> dir;
                        if(dir = 'N'){
                            rob1.setDirection(dir);
                        }else if(dir = 'S'){
                            rob1.setDirection(dir);
                        }else if(dir = 'E'){
                            rob1.setDirection(dir);
                        }else if(dir = 'O'){
                            rob1.setDirection(dir);
                        }else{
                            cout << "\n HOUSTON, I BELIEVE WE'VE HAD A PROBLEM HERE " << endl;
                        }
                }else{
                    cout << "\n THIS ROBOT DOESN'T EXIST !" << endl;
                }
            cout << "\n CHOOSE A NUMBER : " << endl;
            cin >> i;
            menuIndicator(i, robR, rob1, entrepot);
            break;

        case 4: // OCCUPY
            cout << "\n CHOOSE A ROBOT (R OR 1 IN CAPS) : " << endl;
            cin >> rob;
                if(rob = 'R'){
                    cout << "\n CHOOSE YOUR X/Y VALUE " << endl;
                    cout << "\n X : " << endl;
                    cin >> x;
                    cout << "\n Y : " << endl;
                    cin >> y;
                    entrepot.occuper(x, y, rob);
                }else if(rob = '1'){
                    cout << "CHOOSE YOUR X/Y VALUE " << endl;
                    cout << " X : " << endl;
                    cin >> x;
                    cout << " Y : " << endl;
                    cin >> y;
                    entrepot.occuper(x, y, rob);
                }else{
                    cout << "\n THIS ROBOT DOESN'T EXIST !" << endl;
                }
            cout << "\n CHOOSE A NUMBER : " << endl;
            cin >> i;
            menuIndicator(i, robR, rob1, entrepot);
            break;

        case 5: // GRAB
            cout << "\n CHOOSE A NUMBER : " << endl;
            cin >> i;
            menuIndicator(i, robR, rob1, entrepot);
            break;

        case 6: // DROP
            cout << "\n CHOOSE A NUMBER : " << endl;
            cin >> i;
            menuIndicator(i, robR, rob1, entrepot);
            break;

        case 7: // FREE
            cout << "\n CHOOSE YOUR ROBOT (R OR 1 IN CAPS) : " << endl;
            cin >> rob;
                if(rob = 'R'){
                    cout << "\n CHOOSE YOUR X/Y VALUE " << endl;
                    cout << "\n X : " << endl;
                    cin >> x;
                    cout << "\n Y : " << endl;
                    cin >> y;
                    entrepot.liberer(x, y);
                }else if(rob = '1'){
                    cout << "\n CHOOSE YOUR X/Y VALUE " << endl;
                    cout << "\n X : " << endl;
                    cin >> x;
                    cout << "\n Y : " << endl;
                    cin >> y;
                    entrepot.liberer(x, y);
                }else{
                    cout << "\n THIS ROBOT DOESN'T EXIST !" << endl;
                }
            cout << "\n CHOOSE A NUMBER : " << endl;
            cin >> i;
            menuIndicator(i, robR, rob1, entrepot);
            break;

        case 8: // SKIP
            cout << "\n MERCI D'AVOIR JOUÉ !" << endl;
            break;

        case 9: // SHOW MAP
            entrepot.afficher();
            cout << "\n CHOOSE A NUMBER : " << endl;
            cin >> i;
            menuIndicator(i, robR, rob1, entrepot);
            break;
        
        default:
            break;
        }
    }
}




int main(int argc, const char * argv[])
{
    int i = 0;
    Environnement entrepot(15);

    Robot rob1('1', 8, 8, 1, 'E', entrepot);
    Robot robR('R', 8, 7, 1, 'E', entrepot);
    entrepot.afficher();


cout 
<< "    ---------------------------------------------------------------------------------------------- \n" 
<< "    |                                                                                            | \n"     
<< "    |                                             MENU                                           | \n" 
<< "    |                               PRESS NUMBER 9 FOR SHOW THE MAP!                             | \n"
<< "    |                                                                                            | \n"
<< "    |                                                                                            | \n"
<< "    |                                                                                            | \n"
<< "    |           1 : MOOVE                                         5 : GRAB                       | \n"
<< "    |                                                                                            | \n"
<< "    |                                                                                            | \n"
<< "    |           2 : SPEED                                         6 : DROP                       | \n"
<< "    |                                                                                            | \n"
<< "    |                                                                                            | \n"
<< "    |           3 : DIRECTION                                     7 : FREE                       | \n"
<< "    |                                                                                            | \n"
<< "    |                                                                                            | \n"
<< "    |           4 : OCCUPY                                        8 : SKIP                       | \n"
<< "    |                                                                                            | \n"
<< "    |                                                                                            | \n"
<< "    |                                                                                            | \n"
<< "    ---------------------------------------------------------------------------------------------- \n"
<< "\n CHOOSE A NUMBER : " << endl;
        cin >> i;
        menuIndicator(i, robR, rob1, entrepot);
    return 0;
}