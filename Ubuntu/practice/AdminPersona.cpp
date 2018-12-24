#include "Usuario.h"
#include "AdminPersona.h"
#include <string>
using std::string;

#include <vector>
using std::vector;

//AdminPersona::AdminPersona(){
   //this->listaUsuarios = 0; 
//}

//agregar usuario a la lista
void AdminPersona::addUsuario(Usuario* usuario){
    this->listaUsuarios.push_back(usuario);
}

//Función para log in
bool AdminPersona::login(string _usuario, string password){
   for(int i = 0; i < listaUsuarios.size(); i++){
        if(listaUsuarios.at(i)->getUsuario().compare(_usuario) == 0){
            return true;
        }
        
    } 
    return false;
}

//Destructor
AdminPersona::~AdminPersona(){
}
