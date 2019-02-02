#ifndef NODO_H
#define NODO_H

#include "Persona.h"

class Nodo{
    private:
        Persona data;        
        Nodo* link;
    public:
        Nodo();
        ~Nodo();

        //Setters
        void setData(Persona);
        void setLink(Nodo*);
        
        //Getters
        Persona getData();
        Nodo* getLink();
};

#endif
