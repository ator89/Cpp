#include "Persona.h"

//Default constructor
Persona::Persona(){
    id = 0;
    nombre = "";
    apellido = "";
}

//Destructor
Persona::~Persona(){
}

//Setters
void Persona::setId(int _id){
    id = _id;
}

void Persona::setNombre(std::string _nombre){
    nombre = _nombre;
}

void Persona::setApellido(std::string _apellido){
    apellido = _apellido;
}

//Getters
int Persona::getId(){
    return id;
}

std::string Persona::getNombre(){
    return nombre;
}

std::string Persona::getApellido(){
    return apellido;
}
