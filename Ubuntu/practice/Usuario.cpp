#include "Usuario.h"
#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;

//Constructor 
Usuario::Usuario(){
    this->user = "";
    this->password = "";    
}

//Constructor sobrecargado
Usuario::Usuario(string usuario, string password){
    this->user = usuario;
    this->password = password;
}

//Setters
void Usuario::setUsuario(string usuario){
    this->user = usuario;
}

void Usuario::setPassword(string password){
    this->password = password;
}

//Getters
string Usuario::getUsuario(){
    return this->user;
}

string Usuario::getPassword(){
    return this->password;
}

//Destructor
Usuario::~Usuario(){
    cout << "Destruyendo usuario..." << endl;
}
