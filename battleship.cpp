// Implementation file for PA7 Battleship!

#include "battleship.h"

    
    vector<char> CarrierHits {'x','x','x','x','x'};
    vector<char> battleshipHits {'x','x','x','x'};
    vector<char> destroyerHits {'x','x'};
    vector<char> cruiserHits {'x','x','x'};
    vector<char> submarineHits {'x','x','x'};

// The ships are deployed as shown. (You may create additional ship deployments if you wish.)
// This 2D array is NOT shown to the user.
char field1[10][10] = {{'d','-','-','-','-','-','-','-','-','-'},
                      {'d','-','C','-','-','-','-','-','-','-'},
                      {'-','-','C','-','-','-','-','-','-','-'},
                      {'-','-','C','-','-','b','b','b','b','-'},
                      {'-','-','-','-','c','-','-','-','-','-'},
                      {'-','-','-','-','c','-','-','s','s','s'},
                      {'-','-','-','-','c','-','-','-','-','-'},
                      {'-','-','-','-','c','-','-','-','-','-'},
                      {'-','-','-','-','c','-','-','-','-','-'},
                      {'-','-','-','-','-','-','-','-','-','-'}};




char field2[10][10] = {{'','-','-','-','-','-','-','s','s','s'},
                      {'-','-','-','-','-','-','-','-','-','-'},
                      {'-','-','-','-','-','-','-','-','-','-'},
                      {'-','-','c','-','-','-','-','-','-','-'},
                      {'-','-','c','-','-','-','-','-','-','-'},
                      {'-','-','c','-','-','-','-','-','-','-'},
                      {'-','-','c','-','-','-','-','-','-','-'},
                      {'-','-','c','-','-','-','d','d','-','-'},
                      {'-','-','-','-','-','-','-','-','-','-'},
                      {'C','C','C','-','-','-','b','b','b','b'}};

char field3[10][10] = {{'-','-','-','-','-','-','-','-','-','-'},
                      {'-','-','C','-','-','-','-','-','-','-'},
                      {'-','-','C','-','-','-','-','-','-','-'},
                      {'-','-','C','-','-','-','-','-','-','-'},
                      {'b','-','-','-','c','c','c','c','c','-'},
                      {'b','-','-','-','-','-','-','-','-','-'},
                      {'b','-','-','-','-','-','-','-','-','-'},
                      {'b','-','-','s','s','s','-','-','-','-'},
                      {'-','-','-','-','-','-','-','-','-','-'},
                      {'d','d','-','-','-','-','-','-','-','-'}};


// This is the 2D array of attempts that will be updated and shown to the user after each turn.    
char attempts[10][10] = {{'-','-','-','-','-','-','-','-','-','-'},
                         {'-','-','-','-','-','-','-','-','-','-'},
                         {'-','-','-','-','-','-','-','-','-','-'},
                         {'-','-','-','-','-','-','-','-','-','-'},
                         {'-','-','-','-','-','-','-','-','-','-'},
                         {'-','-','-','-','-','-','-','-','-','-'},
                         {'-','-','-','-','-','-','-','-','-','-'},
                         {'-','-','-','-','-','-','-','-','-','-'},
                         {'-','-','-','-','-','-','-','-','-','-'},
                         {'-','-','-','-','-','-','-','-','-','-'}};

//displays menu
int displayMenu(void){
    int option;
   cout << "Would you like to make an attempt?" << endl << "Press 1 for yes."<< endl << "Press 2 for no." << endl;
    cin >> option;
    switch (option){
        case 1: cout << "Please make an attempt. You have 50 tries to win." << endl; break;
        case 2: cout << "You have left the game." << endl; exit(0);
     
 }
 return option;
}

//prints grid of player
void printGrid(char inArray[10][10],int rows, int cols){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            cout << inArray[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;
}     

//gets the coords from the user
void getCoordinates(vector<int> &inVec){
    int cordsRow;
    int cordsCol;
    cout << "What row would you want to hit?" << endl;
    cin >> cordsRow;
    inVec.push_back(cordsRow);
    cout << "What column would you want to hit?" << endl;
    cin >> cordsCol;
    inVec.push_back(cordsCol);
}

//checks if the coords given are a hit on the fields array
void checkFields1(vector<int> inVec){
    int attempt1 = 0;
    int attempt2 = 0;
    char attemptArr[10][10];
    attempt1 = inVec[inVec.size() - 1] -1;
    inVec.pop_back();
    attempt2 = inVec[inVec.size() - 1] -1;
    inVec.pop_back();
    attempts[attempt2][attempt1] = 'x';
    
    if (field1[attempt2][attempt1] == 'c'){
        cout << "You have hit!" << endl;
        CarrierHits.pop_back();

    } else if (field1[attempt2][attempt1] == 'b'){
        cout << "You have hit!" << endl;
        battleshipHits.pop_back();
        
    } else if (field1[attempt2][attempt1] == 'd'){
        cout << "You have hit!" << endl;
        destroyerHits.pop_back();
    } else if (field1[attempt2][attempt1] == 'C'){
        cout << "You have hit!" << endl;
        cruiserHits.pop_back();
    } else if (field1[attempt2][attempt1] == 's'){
        cout << "You have hit!" << endl;
        submarineHits.pop_back();
    }
    else {
        cout << "You have missed the target." << endl;
    }
}

void checkFields2(vector<int> inVec){
    int attempt1 = 0;
    int attempt2 = 0;
    char attemptArr[10][10];
    attempt1 = inVec[inVec.size() - 1] -1;
    inVec.pop_back();
    attempt2 = inVec[inVec.size() - 1] -1;
    inVec.pop_back();
    attempts[attempt2][attempt1] = 'x';
    
    if (field2[attempt2][attempt1] == 'c'){
        cout << "You have hit!" << endl;
        CarrierHits.pop_back();

    } else if (field2[attempt2][attempt1] == 'b'){
        cout << "You have hit!" << endl;
        battleshipHits.pop_back();
        
    } else if (field2[attempt2][attempt1] == 'd'){
        cout << "You have hit!" << endl;
        destroyerHits.pop_back();
    } else if (field2[attempt2][attempt1] == 'C'){
        cout << "You have hit!" << endl;
        cruiserHits.pop_back();
    } else if (field2[attempt2][attempt1] == 's'){
        cout << "You have hit!" << endl;
        submarineHits.pop_back();
    }
    else {
        cout << "You have missed the target." << endl;
    }
}

void checkFields3(vector<int> inVec){
    int attempt1 = 0;
    int attempt2 = 0;
    char attemptArr[10][10];
    attempt1 = inVec[inVec.size() - 1] -1;
    inVec.pop_back();
    attempt2 = inVec[inVec.size() - 1] -1;
    inVec.pop_back();
    attempts[attempt2][attempt1] = 'x';
    
    if (field3[attempt2][attempt1] == 'c'){
        cout << "You have hit!" << endl;
        CarrierHits.pop_back();

    } else if (field3[attempt2][attempt1] == 'b'){
        cout << "You have hit!" << endl;
        battleshipHits.pop_back();
        
    } else if (field3[attempt2][attempt1] == 'd'){
        cout << "You have hit!" << endl;
        destroyerHits.pop_back();
    } else if (field3[attempt2][attempt1] == 'C'){
        cout << "You have hit!" << endl;
        cruiserHits.pop_back();
    } else if (field3[attempt2][attempt1] == 's'){
        cout << "You have hit!" << endl;
        submarineHits.pop_back();
    }
    else {
        cout << "You have missed the target." << endl;
    }
}

//checks if all the ships are hit and returns true or false
bool checkHits(void){
    if (CarrierHits.empty()){
        if (battleshipHits.empty()){
            if (destroyerHits.empty()){
                if (cruiserHits.empty()){
                    if (submarineHits.empty()){
                        return true;
                    }
                }
            }
        }
    }
    return false;
}


// battleship option 1
void battleShipGame1 (void){
     for (int i = 0; i <= 50; i++) {
        getCoordinates(coords);
        checkFields1(coords);
        cout << "This is your attempt field" << endl;
        printGrid(attempts, 10, 10);
        if (checkHits()){
            cout << "You have won the game/n";
            exit(0);
        }
    }
    //checks if all the ships are hit and if so the game is over
    cout << "You did not win." << endl;
}


// battleship option 2
void battleShipGame2 (void){
     for (int i = 0; i <= 50; i++) {
        getCoordinates(coords);
        checkFields2(coords);
        cout << "This is your attempt field" << endl;
        printGrid(attempts, 10, 10);
        if (checkHits()){
            cout << "You have won the game/n";
            exit(0);
        }
    }
    //checks if all the ships are hit and if so the game is over
    cout << "You did not win." << endl;
}


// battleship option 3
void battleShipGame3 (void){
     for (int i = 0; i <= 50; i++) {
        getCoordinates(coords);
        checkFields3(coords);
        cout << "This is your attempt field" << endl;
        printGrid(attempts, 10, 10);
        if (checkHits()){
            cout << "You have won the game/n";
            exit(0);
        }
    }
    //checks if all the ships are hit and if so the game is over
    cout << "You did not win." << endl;
}