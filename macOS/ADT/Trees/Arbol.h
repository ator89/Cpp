#ifndef ARBOL_H
#define ARBOL_H

#include "Nodo.h"

class Arbol{

    private:
        Nodo* root;
    public:
        //Constructor
        Arbol();
        //Destructor
        ~Arbol();

        Nodo* getRoot();
        void setRoot(Nodo*);
        //----<<<Functions>>-----//

        //Insert
        Nodo* insert(int);
        void search(int);
};

#endif
