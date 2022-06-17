//Main file for PA7 Battleship!

#include "battleship.h"

int main(){

    extern char field[10][10];  //extern means this variable has been declared in another .cpp file and the compiler should proceed
    extern char attempts[10][10];
    
    vector<int> coords;

    //introductory message
    system("clear");
    cout << endl << endl << "    Battleship!" << endl << endl << endl;
    displayMenu(); //displays menu
    printGrid(attempts, 10, 10); // displays player grid

    cout << "What field would you like to choose? 1, 2, or 3./n";
    int fieldChoice;
    cin >> fieldChoice;
    switch (fieldChoice){
        case 2: battleShipGame1(); break;
        case 3: battleShipGame2(); break;
        case 1: battleShipGame3(); break;
    }


    // // gives 50 turns to win the game
    // for (int i = 0; i <= 50; i++) {
    //     getCoordinates(coords);
    //     checkFields(coords);
    //     cout << "This is your attempt field" << endl;
    //     printGrid(attempts, 10, 10);
    //     if (checkHits()){
    //         cout << "You have won the game/n";
    //         exit(0);
    //     }
    // }
    // //checks if all the ships are hit and if so the game is over
    // cout << "You did not win." << endl;
   
    // return 0;
}