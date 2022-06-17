/// This is an implementation file for Programming Assignment 6: MVP
/// You will need to ADD to this file.

#include "header.h"


/// the "current" array, or the one you are currently working on
double currentTeam[12];

/// the 10 teams   
const double arr1[] = {83.86, 77.15, 93.35, 86.92, 49.21, 62.27, 90.59, 63.26, 40.26, 72.36, 11.68, 67.29};
const double arr2[] = {53.65, 4.49, 53.98, 42.87, 89.92, 62.31, 16.79, 46.2, 38.31, 43.03, 62.1, 29.46};
const double arr3[] = {13.09, 51.73, 24.34, 19.62, 89.32, 21.73, 97.25, 24.81, 54.96, 22.03, 23.82, 84.34};
const double arr4[] = {92.31, 69.32, 3.25, 65.3, 37.7, 11.46, 44.32, 68.31, 72.79, 96.86, 90.14, 72.4};
const double arr5[] = {53.88, 9.1, 95.74, 72.95, 6.54, 11.82, 79.67, 44.02, 48.13, 27.94, 45.99, 21.33};
const double arr6[] = {4.07, 8.36, 83.82, 23.07, 92.48, 57.6, 74.84, 35.22, 43.95, 3.6, 80.73, 6.7};
const double arr7[] = {30.4, 80.58, 8.67, 42.73, 87.94, 15.48, 66.84, 50.12, 90.55, 23.28, 9.36, 1.01};
const double arr8[] = {51.14, 32.9, 49.96, 89.42, 47.4, 64.78, 61.45, 28.21, 95.01, 54.37, 7.97, 68.46};
const double arr9[] = {77.27, 14, 82.53, 11.33, 36.02, 58.07, 49.7, 48.37, 28.57, 24.32, 7.08, 2.03};
const double arr10[] = {95.9, 2.59, 25.89, 4.13, 28.21, 2.88, 4.88, 85.01, 36.79, 39.55, 25.57, 8.98};


/*The loadTeam() function is used to "load up" the next array to work on.
* Argument: integer (the team number 1 - 10), reference to current array (which will be currentTeam)
* No return. The setCurrent() function is called internally.*/
void loadTeam(int teamNum, double curr[]){
    switch(teamNum){
        case 1: setCurrent(arr1, curr); break;
        case 2: setCurrent(arr2, curr); break;
        case 3: setCurrent(arr3, curr); break;
        case 4: setCurrent(arr4, curr); break;
        case 5: setCurrent(arr5, curr); break;
        case 6: setCurrent(arr6, curr); break;
        case 7: setCurrent(arr7, curr); break;
        case 8: setCurrent(arr8, curr); break;
        case 9: setCurrent(arr9, curr); break;
        case 10: setCurrent(arr10, curr); break;
        default: cout << "Error: " << teamNum << " is not a valid team number." << endl;
    }
}

/*The setCurrent() function assigns the specified team to the "current" array for processing.
* Argument: 12-element array of type double, reference to current array (which will be currentTeam)
* No return.*/
void setCurrent(const double arr[], double curr[]){
    /// you need to write the code that sets curr[] equal to arr[],
    /// (so that currentTeam will end up holding the contents of the team represented by arr)
    /// How do we assign one array to another?

    for (int i = 0; i < sizeof(arr); i++){
        currentTeam[i] = arr[i];
    }
}

// compute average score
double computeAvgScore (double inputArray[]){
    
    int length = sizeof(inputArray);
    double sum = 0;
    double average = 0.0;

    for( int i = 0; i < length; i++) {
        sum += inputArray[i];
    }
    average = sum / length;
    cout << average << endl;
    return average;
}
// determines the highest value in the function 

double determineHighScore (double inputArray[]){

int length = sizeof(inputArray);
double max = inputArray[0];

for (int i = 0; i < length; i++){
    if (inputArray[i] > max){
        max = inputArray[i];
    }
}
cout << max << endl;
return max;
}


void readElements (double arr[]){
    int length = sizeof(arr); //this is where the error occured
    cout << "Contents of CurrentTeam: ";
    for (int i = 0; i < length; i++){
        cout << arr[i] << ", "; 
    }
    cout << endl;
}

void computeHighest (double &currMax, double localMax) {
    if (localMax > currMax){
        currMax = localMax;
    }
}