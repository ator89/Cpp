#include "Menu.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

//Menu::Menu(){}

void Menu::menuPrincipal(){
    cout << "\nMenu" << endl
        << "1 - Sign In" << endl
        << "2 - Register" << endl
        << "3 - Info" << endl
        << "0 - Exit" << endl
        << "Select an option: ";
}

void Menu::menuUsuario(){
    cout << "\nMenu Usuario" << endl
        << "1 - CRUD" << endl
        << "2 - Thing #2"<< endl
        << "0 - Sign Out" << endl
        << "Select an option: ";
}

void Menu::menuCRUD(){
    cout << "\nCRUD" << endl
        << "1 - Create" << endl
        << "2 - Read" << endl
        << "3 - Update" << endl
        << "4 - Remove" << endl
        << "0 - Go back" << endl
        << "Select an option: ";
}
Menu::~Menu(){}
