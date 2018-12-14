#include "Usuario.h"

#include <iostream>

Usuario::Usuario(){
    this->usuario = "";
    this->password = "";
}

Usuario::Usuario(string _usuario, string _password){
    usuario = _usuario;
    password = _password;
}

string Usuario::getUsuario(){
    return usuario;
}

string Usuario::getPassword(){
    return password;
}

int Usuario::getId(){
    return id;
}

void Usuario::setId(int _id){
    id = _id;
}

void Usuario::setUsuario(string _usuario){
    usuario = _usuario;
}

void Usuario::setPassword(string _password){
    password = _password;
}

Usuario::~Usuario(){
    std::cout << "Liberando usuario.." << std::endl;
}
