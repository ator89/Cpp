#ifndef USUARIO_H
#define USUARIO_H

#include "Persona.h"
#include <string>

class Usuario : public Persona{

    private:
        std::string usuario, password;
    public:
        Usuario();
        Usuario(std::string,std::string);
        ~Usuario();
    
        //Setters
        void setUsuario(std::string);
        void setPassword(std::string);

        //Getters
        std::string getUsuario();
        std::string getPassword();
};

#endif
