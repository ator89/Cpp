#ifndef PERSONA_H
#define PERSONA_H

#include "Hobbie.h"
#include <string>
using std::string;

#include <vector>
using std::vector;

class Persona{

    private:
        string user, password, nombre, apellido, direccion;
        int edad, telefono;
        vector<Hobbie*> listaHobbies;
    public:
        //Constructores y destructor
        Persona();
        Persona(string,string,int,int,string);
        Persona(string,string);
        ~Persona();

        //Mutadores y accesores
        void setUser(string);
        string getUser();

        void setPassword(string);
        string getPassword();

        void setNombre(string);
        string getNombre();

        void setApellido(string);
        string getApellido();

        void setEdad(int);
        int getEdad();

        void setTelefono(int);
        int getTelefono();

        void setDireccion(string);
        string getDireccion();

        void setListaHobbies(vector<Hobbie*>);
        vector<Hobbie*> getListaHobbies();
        void setHobbie(Hobbie*);
};

#endif
