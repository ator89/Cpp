#include "Persona.h"
#include "Menu.h"
#include "Usuario.h"
#include "AdminPersona.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void login();
void signup();

int main(){
    
    int opcionMenu = -1;
    bool menu1 = true;

    while(menu1){
        do{
            menu->menuPrincipal();
            cin >> opcionMenu;
            switch(opcionMenu){
                case 1://Login
                    break;

                case 2://Registro
                    break;
                case 3://Info
                    break;
                case 0:
                    cout << "Saliendo..." << endl;
                    break;
                default:
                    cout << "Opción inválida" << endl; 
                    break;
            }
        }while(opcionMenu != 0);
        menu1 = false;
    }
    
    return 0;
}

void signup(){
    string us, pwd;
    AdminPersona* ap;
    Persona* u = new Usuario();
    cout << "Usuario: " << endl;
    cin >> us;
    cout << "Password: " << endl;
    cin >> pwd;
    //ap->addUsuario();
     
}
