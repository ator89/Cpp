#include "Usuario.h"
<<<<<<< HEAD
#include <iostream>
using std::cout;
using std::endl;
=======

#include <iostream>
>>>>>>> 2001381f6d3db4695fcff1502e346c6fc18c9450
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
<<<<<<< HEAD
void Usuario::setUsuario(string usuario){
    this->user = usuario;
}

void Usuario::setPassword(string password){
=======
void Usuario::setUsuario(std::string usuario){
    this->usuario = usuario;
}

void Usuario::setPassword(std::string password){
>>>>>>> 2001381f6d3db4695fcff1502e346c6fc18c9450
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
<<<<<<< HEAD
    cout << "Destruyendo usuario..." << endl;
=======
    std::cout << "Destruyendo usuario..." << std::endl;
>>>>>>> 2001381f6d3db4695fcff1502e346c6fc18c9450
}
