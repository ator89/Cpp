#include "Persona.h"

Persona::Persona(){
    this->nombre = "";
    this->apellido = "";
    this->edad = 0;
}

Persona::Persona(string nombre, string apellido, int edad){
    this->nombre = nombre;
    this->apellido = apellido;
    this->edad = edad;
}

Persona::~Persona(){

}
