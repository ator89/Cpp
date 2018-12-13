#ifndef PERSONA_H
#define PERSONA_H

#include <string>
using std::string;

class Persona{

    protected:
        string nombre;
        string apellido;
        int edad;

    public:
        Persona();
        Persona(string, string, int);
        ~Persona();



};

#endif
