#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

#include "Usuario.h"
#include "AdminUsuario.h"

//menu principal
void menu();
void menu2();
void menu3();

int main(){
    
    AdminUsuario* control;
    string user, pass;
    int menu1 = -1;
    int menu2 = -1;
    int menu3 = -1;
    bool men1 = true;
    bool men2 = true;
    bool men3 = true;

    while(men1){
        do{
            menu();
            cin >> menu1;
            switch(menu1){
                case 1://Ingresar
                    cout << "Usuario" << endl;
                    cin >> user;
                    cout << "Password" << endl;
                    cin >> pass;
                    
                    control->agregarUsuario(user,pass);    
                    cout << "Agregado con éxito"; 
                    break;
                case 2://Registar
                    break;
                case 3://Info
                    break;
                case 4://Test
                    break;
                case 0:
                    cout << "Saliendo..." << endl << endl;
                    break;


            }
        }while(menu1 != 0);
        men1 = false;
    }

    return 0;
}

void menu(){
    cout << "Ingresar" << endl
        << "Registrar" << endl
        << "Info" << endl
        << "Salir" << endl;
}


void menu2(){
    cout << "1 - Crear" << endl
        << "2 - Listar Objetos" << endl
        << "3 - Modificar Objetos" << endl
        << "4 - Eliminar Objetos" << endl
        << "0 - Sign Out" << endl
        << "Seleccione una opción: "<< endl;
}

void menu3(){
    cout << "1 - Usuario" << endl
        << "2 - Animal" << endl
        << "3 - Cosa" << endl
        << "0 - Regresar" << endl
        << "Selccione una opción: " << endl;

}
