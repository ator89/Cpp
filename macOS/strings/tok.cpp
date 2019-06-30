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

    char str[] ="EMP0001|Mr. A|A Address";
    char* id = strtok(str,"|");
    char* name = strtok(NULL,"|");
    char* address = strtok(NULL,"|");

    cout << "id is: " << id << endl;
    cout << "Name is: " << name << endl;
    cout << "Address is: " << address << endl;

    return 0;
}