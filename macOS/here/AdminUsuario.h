#ifndef ADMINUSUARIO_H
#define ADMINUSUARIO_H

#include <string>
using std::string;

#include <vector>
using std::vector;

#include <iostream>
using std::endl;
using std::cout;

#include "Usuario.h"

class AdminUsuario{

    private:
        vector<Usuario*> listaUsuario;

    public:
        AdminUsuario();
        ~AdminUsuario();

        void setListaUsuario(vector<Usuario*>);
        string getListaUsuario();

        void agregarUsuario(string,string);
        bool validarUsuario(string, string);
        string buscarUsuario(string);

};

#endif
