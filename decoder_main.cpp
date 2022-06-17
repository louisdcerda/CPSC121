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



int main(){

fstream infile;
infile.open("pa8text.txt", ios::in);
fstream outfile;
outfile.open("pa8encryptedtext.txt", ios::out);


char inChar;
infile.get(inChar);
encryptText(inChar);

// while 
// decryptText(newChar);


    return 0;
}


//functions

char encryptText(char charInFile){

for (vecotr<char> vec : encryptVec){
    if (charInFile == vec[0]){
        charInFile = vec[1];
        cout << charInFile;
    }

}
return charInFile;


}