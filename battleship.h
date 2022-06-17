// Header file for PA7 Battleship!

#ifndef BATTLESHIP_H
#define BATTLESHIP_H

#include <iostream>
#include <string>
#include <vector>
#include <unistd.h>  
using namespace std;

int displayMenu(void);
void printGrid(char inArray[10][10], int rows, int cols);
void getCoordinates(vector<int> &inVec);
void checkFields1(vector<int> inVec);
void checkFields2(vector<int> inVec);
void checkFields3(vector<int> inVec);
bool checkHits(void);
void battleShipGame1 (void);
void battleShipGame2 (void);
void battleShipGame3 (void);

#endif