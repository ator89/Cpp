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

        int posUser(Usuario*);
        bool login(string,string);
        void mostrarUsuarios(); 
        void addUsuario(Usuario*);
};


#endif


