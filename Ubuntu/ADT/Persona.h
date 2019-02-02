#ifndef PERSONA_H
#define PERSONA_H
#include <string>

class Persona{
    private:
        int id;
        std::string nombre, apellido;
    public:
        Persona();
        ~Persona();

        void setId(int);
        void setNombre(std::string);
        void setApellido(std::string);

        int getId();
        std::string getNombre();
        std::string getApellido();
};

#endif
