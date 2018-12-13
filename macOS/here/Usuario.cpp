#include "Usuario.h"

Usuario::Usuario(){
    this->username = "";
    this->password = "";
    this->id_usuario = 0;
}

Usuario::Usuario(string usuario, string password){
    this->username = usuario;
    this->password = password;
}

void Usuario::setUsername(string usuario){
    this->username = usuario;
}

void Usuario::setPassword(string password){
    this->password = password;
}

string Usuario::getPassword(){
    return password;
}

string Usuario::getUsername(){
    return username;
}

Usuario::~Usuario(){
}
