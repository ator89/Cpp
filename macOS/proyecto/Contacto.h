#ifndef CONTACTO_H
#define CONTACTO_H

#include "Persona.h"

class Contacto : public Persona{

    private:
        long int telefono;
    public:
        //Constructor
        Contacto();
        //Destructor
        ~Contacto();
        
        //Getters
        int getId();

        //Setters
        void setId(int);
};

#endif 
