#ifndef USUARIO_H
#define USUARIO_H

#include "Persona.h"
#include "Contacto.h"

#include <string>
using std::string;

#include <vector>
using std::vector;


class Usuario : public Persona{
    private:
        string usuario, password;
        vector<Contacto*> listaContactos;
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

        void addContact(Contacto*);
        void setContactList(vector<Contacto*>);
        vector<Contacto*> getContactList();
};

#endif
