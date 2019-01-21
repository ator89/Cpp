#include "Usuario.h"

#include <iostream>
#include <string>
using std::string;

//Constructor 
Usuario::Usuario(){
    this->usuario = "";
    this->password = "";    
}

//Constructor sobrecargado
Usuario::Usuario(std::string usuario, std::string password){
    this->usuario = usuario;
    this->password = password;
}

//Setters
void Usuario::setUsuario(std::string usuario){
    this->usuario = usuario;
}

void Usuario::setPassword(std::string password){
    this->password = password;
}

//Getters
std::string Usuario::getUsuario(){
    return usuario;
}

std::string Usuario::getPassword(){
    return password;
}

//Destructor
Usuario::~Usuario(){
    std::cout << "Destruyendo usuario..." << std::endl;
}
