#include "AdminMenu.h"

#include <iostream>
using std::cout;
using std::endl;

//Destructor
AdminMenu::~AdminMenu(){

}


void AdminMenu::menu(){
    cout << "\tMENU" << endl 
    	<< "1 - Login" << endl 
    	<< "2 - Registar" << endl
        << "3 - Info" << endl 
        << "0 - Salir" << endl
        << "Seleccione una opción: ";
}

void AdminMenu::menuUsuario(){
    cout << "\tUsuario "<< endl
        << "1 - Perfil" << endl 
        << "2 - Contactos" << endl 
        << "3 - Opcion" << endl
        << "4 - Opcion" << endl 
        << "0 - Salir" << endl 
        << "Seleccione una opcion: "<< endl;
}

void AdminMenu::menuPerfil(){
    cout << "\tPerfil de Usuario" << endl
        << "1 - Ver Datos de Usuario" << endl 
        << "2 - Modificar Datos" << endl 
        << "Seleccionar una opción: " << endl;
}

void AdminMenu::menuContacto(){
    cout << "\tContactos" << endl
        << "1 - Agregar " << endl 
        << "2 - Listar" << endl 
        << "3 - Modificar" << endl 
        << "4 - Eliminar" << endl 
        << "Seleccionar una opción: " << endl;
}