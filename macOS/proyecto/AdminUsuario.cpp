#include "AdminUsuario.h"
#include "Usuario.h"
#include <iostream>
#include <string>
using std::string;

#include <vector>
using std::vector;

AdminUsuario::AdminUsuario(){
    //this->lista = NULL;
}

//lista de usuarios
vector<Usuario*> AdminUsuario::getListaUsuarios(){
    return this->lista;
}

//Buscar la posición del usuario
int AdminUsuario::posUser(string user){
    int pos = -1;
    for(int i = 0; i < lista.size(); i++){
        if(lista.at(i)->getUsuario().compare(user)==0)      
            return i;
    }
    return pos;
}

//Validar si el usuario y la contraseña existen
bool AdminUsuario::login(string user, string passw){
    for(int i = 0; i < lista.size(); i++){
        if(lista.at(i)->getUsuario().compare(user) == 0 
                && lista.at(i)->getPassword().compare(passw)==0){
            return true;
        }
    }
    return false;
}

//Registrar un usuario
void AdminUsuario::addUsuario(Usuario* u){
   lista.push_back(u); 
}

//Mostrar lista de Usuarios registrados
void AdminUsuario::mostrarUsuarios(){
    for(int i = 0; i< lista.size(); i++){
        std::cout << i << " - " << lista.at(i)->getNombre() << std::endl;
    }
}

//Destructor
AdminUsuario::~AdminUsuario(){
    std::cout << "Liberando vector"<< std::endl;
}
