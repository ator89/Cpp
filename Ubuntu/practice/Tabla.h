#ifndef TABLA_H
#define TABLA_H

#include <string>
using std::string;

class Tabla{
    private:
        string** matriz;
    public:
        Tabla();
        ~Tabla();

        string** crearTabla();
        void llenarTabla();
        void imprimirTabla();
        void limpiarTabla();
       
        void mover(int,int,int,int); 
};

#endif
