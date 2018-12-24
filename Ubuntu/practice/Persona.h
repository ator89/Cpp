#ifndef PERSONA_H
#define PERSONA_H

#include <string>

class Persona{
    private:
        int id;
        std::string nombre, apellido, email;
    public:
        Persona();
        ~Persona();

        //Getters
        virtual std::string getNombre();
        virtual std::string getApellido();
        virtual std::string getEmail();
        virtual int getId();

        //Setters
        virtual void setNombre(std::string);
        virtual void setApellido(std::string);
        virtual void setEmail(std::string); 
        virtual void setId(int);
};

#endif
