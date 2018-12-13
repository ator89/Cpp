#include "AdminUsuario.h"
#include "Usuario.h"
#include <iostream>
#include <string>
using std::string;

AdminUsuario::AdminUsuario(){
    //this->lista;
}

int AdminUsuario::posUser(Usuario* user){
    int pos = -1;
    for(int i = 0; i < lista.size(); i++){
        if(lista.at(i)->getUsuario().compare(user->getUsuario())==0)
            //pos = lista.at(i);
            
            return pos;
    }
    return pos;
}

bool AdminUsuario::login(string user, string passw){
    for(int i = 0; i < lista.size(); i++){
        if(lista.at(i)->getUsuario().compare(user) == 0 
                && lista.at(i)->getPassword().compare(passw)==0){
            return true;
        }
    }
    return false;
}

void AdminUsuario::addUsuario(Usuario* u){
   lista.push_back(u); 
}

void AdminUsuario::mostrarUsuarios(){
    for(int i = 0; i< lista.size(); i++){
        std::cout << i << " - " << lista.at(i)->getNombre() << std::endl;
        
    }
}

AdminUsuario::~AdminUsuario(){

}
