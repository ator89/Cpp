#ifndef PERSONA_H
#define PERSONA_H

#include <string>
using std::string;

#include <vector>
using std::vector;

class Persona{

    private:
        string user, password, nombre, apellido, direccion;
        int edad, telefono;
        //vector<string> listaHobbies;
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
};

#endif
