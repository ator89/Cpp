#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

#include <sstream>
using std::istringstream;


int main(){

    string userArrayInput;
    int userInput;
    cout << "Ingresar lista separada por comas,: ";
    cin >> userArrayInput;

    istringstream iss(userArrayInput);
    string item;
    //string delimiter = ",";
    while(getline(iss,item,',')){
        userInput = stoi(item,nullptr,10);
        cout << userInput << endl;
    }

    return 0;
}