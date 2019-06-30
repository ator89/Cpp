#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <cstring>

#include <string>
using std::string;

#include <sstream>
using std::istringstream;


int main(){

    char str[] ="Hi, I am learning about strings, in C++,";
    char* ptr;

    ptr = strtok(str, ",");
    cout << ptr << endl;

    while(ptr != NULL){
        cout << ptr << endl;
        ptr = strtok(NULL, ",");
        
    }
    return 0;
}