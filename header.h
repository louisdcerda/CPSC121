/// This is a header file for Programming Assignment 6: MVP
/// You will need to ADD to this file.

#ifndef MVP_H
#define MVP_H

#include <iostream>
#include <array>
using namespace std;


/// function prototypes
void loadTeam(int, double curr[]);   /// makes a decision about which team to "setCurrent"
void setCurrent(const double arr[], double curr[]);   /// called inside the loadTeam() function, assigns the specified team array to the "current" array
double computeAvgScore (double inputArray[]); // calculates the average of each array
double determineHighScore (double inputArray[]); // determines the highest score
void readElements (double arr[]);
void computeHighest (double &currMax, double localMax);

#endif

