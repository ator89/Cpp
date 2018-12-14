#ifndef ADMINUSUARIO_H
#define ADMINUSUARIO_H

#include "Usuario.h"

#include <vector>
using std::vector;

class AdminUsuario{
    private:
        vector<Usuario*> lista;
    public:
        AdminUsuario();
        ~AdminUsuario();

        int posUser(string);
        bool login(string,string);
        void mostrarUsuarios(); 
        void addUsuario(Usuario*);
        vector<Usuario*> getListaUsuarios();
        void setListaUsuarios(vector<Usuario*>);
        
};


#endif


