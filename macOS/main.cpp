#include "Persona.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector;

//Menú principal
void menu();
void menuUsuario();//Menú de usuario ingresado


int main(){
    
    Persona p;
    vector<Persona> lista;

    bool m1 = false;
    int menu1 = -1;

    bool m2 = false;
    int menu2 = -1;
    
    return 0;
}

void menu(){
    cout << "\tMENU"<< endl
        << "1 - Login" << endl
        << "2 - Registro" << endl
        << "0 - Salir" << endl
        << "Ingrese una opción: ";
    cout << endl;
}
