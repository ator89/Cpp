#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

#include<limits>

int main(){

    bool active = true;
    string opcion = "";

    while(active){
        do{
            cout << "Desea continuar?" << endl;
            cin >> opcion;

        }while(opcion != "n");
        active = false;
    }

    return 0;
}
