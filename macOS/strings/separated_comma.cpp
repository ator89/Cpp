#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

#include <sstream>
using std::stringstream;

#include <fstream>
using std::ifstream;

int main(){

    ifstream myFileStream("SampleFile.txt");
    if(!myFileStream.is_open()){
        cout << "Failed to open." <<endl;
        return 0;
    }
    string firstName, lastName, tempString, DOB;
    int age;
    string myString;
    string line;

    while(getline(myFileStream,line)){
        stringstream ss(line);
        getline(ss,firstName,',');
        getline(ss,lastName,',');
        getline(ss,tempString,',');
        getline(ss,myString,',');
        age = stoi(myString);
        getline(ss,tempString,',');
        getline(ss,DOB,',');
        DOB = DOB.substr(0,2)+DOB.substr(3,2)+DOB.substr(6,2);
        cout << age << endl;
    }
    myFileStream.close();

    return 0;
}