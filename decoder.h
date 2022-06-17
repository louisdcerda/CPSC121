

#include <vector>
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

vector<vector<string> > encryptVec {{'a','z'},{'b','y'},{'c','x'},{'d','w'},{'e','v'},
                                    {'f','u'},{'g','t'},{'h','s'},{'i','r'},{'j','q'},
                                    {'k','p'},{'l','o'},{'m','n'},{'n','m'},{'o','l'},
                                    {'p','k'},{'q','j'},{'r','i'},{'s','h'},{'t','g'},
                                    {'u','f'},{'v','e'},{'w','d'},{'x','c'},{'y','b'},
                                    {'z','a'}};

vector<vector<string> > decryptVec {{'a','z'},{'b','y'},{'c','x'},{'d','w'},{'e','v'},
                                    {'f','u'},{'g','t'},{'h','s'},{'i','r'},{'j','q'},
                                    {'k','p'},{'l','o'},{'m','n'},{'n','m'},{'o','l'},
                                    {'p','k'},{'q','j'},{'r','i'},{'s','h'},{'t','g'},
                                    {'u','f'},{'v','e'},{'w','d'},{'x','c'},{'y','b'},
                                    {'z','a'}};;

char encryptText(char charInFile);





