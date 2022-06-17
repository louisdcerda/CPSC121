/*
louis cerda
cpsc 121 sec 3
11/3/2021
pa 6
*/

#include "header.h"
#include <string>
#include <cmath>

int main(){

    extern double currentTeam[12]; /// 'extern' tells the compiler that this array has been declared in another .cpp file, and to go look for it.

    double score;
    double highestscore = 0.0;
    double avg1, highestavg;
// only are 10 arrays so 11 is upard bounds
    for (int i = 1; i < 11; i++) {
        /*
            1. load team into current team 
            2. read out elemts of array
            3. determine highest score for that team 
            4. determine avg 
            5. compare it to the highest avg 
        */
        loadTeam(i, currentTeam); // loads team that is current
        readElements(currentTeam);
        score = determineHighScore(currentTeam);
        computeHighest(highestscore, score);
        avg1 = computeAvgScore(currentTeam);
        computeHighest(highestavg, avg1);
        cout << endl; 
    }
    
    cout << "this score was the mvp: " << highestscore << endl;
    cout << "this was the highest average of a team: " << highestavg << endl;
    
    return 0;

}