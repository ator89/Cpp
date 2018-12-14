#include "AdminUsuario.h"
#include "Usuario.h"

AdminUsuario::AdminUsuario(){
   
}

void AdminUsuario::agregarUsuario(string usuario, string password){
    Usuario* u = new Usuario(usuario, password);
    listaUsuario.push_back(u);
}

AdminUsuario::~AdminUsuario(){
    
}
