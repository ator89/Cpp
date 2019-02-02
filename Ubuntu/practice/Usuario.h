#ifndef USUARIO_H
#define USUARIO_H

#include "Persona.h"
#include <string>
using std::string;

class Usuario : public Persona{

    private:
        string user, password;
    public:
        Usuario();
        Usuario(string,string);
        ~Usuario();
    
        //Setters
        void setUsuario(string);
        void setPassword(string);

        //Getters
        string getUsuario();
        string getPassword();
};

#endif
