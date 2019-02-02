#ifndef ADMINPERSONA_H
#define ADMINPERSONA_H

#include "Usuario.h"
#include <vector>
using std::vector;
#include <string>
using std::string;

class AdminPersona{
    private:
        vector<Usuario*> listaUsuarios;
    public:
        //AdminPersona();
        ~AdminPersona();

        bool login(string,string);
        //int posUsuario(std::string);
        void addUsuario(Usuario*);
        //void setListaUsuarios(std::vector<Usuario*>);
        //std::vector<Usuario*> getListaUsuarios();
        
};

#endif
