#ifndef PERSONA_H
#define PERSONA_H

#include <string>
using std::string;

class Persona{

    protected:
        int id, edad;
        string nombre, apellido;
    
    public:
        Persona();
        Persona(int, int, string, string);
        ~Persona();

        virtual int getEdad();
        virtual void setEdad(int);

        virtual int getId() = 0;
        virtual void setId(int) = 0;

        virtual string getNombre();
        virtual void setNombre(string);

        virtual string getApellido();
        virtual void setApellido(string);

};

#endif
