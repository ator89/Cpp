#ifndef PERSONA_H
#define PERSONA_H

#include <string>
using std::string;

class Persona{
    private:
        int id;
        string nombre, apellido, email;
    public:
        Persona();
        ~Persona();

        //Getters
        virtual string getNombre();
        virtual string getApellido();
        virtual string getEmail();
        virtual int getId();

        //Setters
        virtual void setNombre(string);
        virtual void setApellido(string);
        virtual void setEmail(string); 
        virtual void setId(int);
};

#endif
