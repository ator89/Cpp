#include <iostream>
using std::endl;
using std::cout;
using std::cin;

#include <cstring>

int main(){

    char str[100];
    cout << "Enter a string: " << endl;
    cin.getline(str,100);

    char* point;

    point = strtok(str,".");

    while (point!=NULL){
        cout << point << endl;
        point = strtok(NULL, ".");
    }

    return 0;
}