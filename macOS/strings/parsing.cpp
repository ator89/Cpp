#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

#include <fstream>
using std::ifstream;

int main(){

    string fileName = "stats.txt";
    ifstream input;

    input.open(fileName);

    if(!input.is_open()){
        return 1;
    }

    while(input){
        string line;

        getline(input,line, ':');

        int population;
        input >> population;

        input.get();
        if(!input){
            break;
        }

        cout << "'" << line << "'"<<" -- " << population << endl;
    }

    input.close();

    return 0;
}