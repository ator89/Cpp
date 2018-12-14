#include "Persona.h"

#include <iostream>

Persona::Persona(){
    this->edad = 0;
    this->nombre = "";
    this->apellido = "";
    this->id = 0;
}

int Persona::getId(){
    return this->id;
}

int Persona::getEdad(){
    return this->edad;
}

string Persona::getNombre(){
    return this->nombre;
}

string Persona::getApellido(){
    return this->apellido;
}

void Persona::setId(int _id){
    id = _id;
}

void Persona::setEdad(int _edad){
    edad = _edad;
}

void Persona::setNombre(string _nombre){
    nombre = _nombre;
}

void Persona::setApellido(string _apellido){
    apellido = _apellido;
}

Persona::~Persona(){
    std::cout<< "Liberando persona" << std::endl; 
}
