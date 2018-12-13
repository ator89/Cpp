#ifndef USUARIO_H
#define USUARIO_H

#include "Persona.h"

#include <string>
using std::string;

class Usuario : public Persona{
    private:
        string usuario, password;
    public:
        Usuario();
        Usuario(string, string);
        ~Usuario();

        string getUsuario();
        void setUsuario(string);

        string getPassword();
        void setPassword(string); 
        
        int getId();
        void setId(int);
};

#endif
