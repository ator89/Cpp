#include "Persona.h"

#include <string>

//Constructor
Persona::Persona(){
    this->id = 0;
    this->nombre = "";
    this->apellido = "";
    this->email = "";
}

//Setters
void  Persona::setNombre(std::string nombre){
    this->nombre = nombre;
}

void Persona::setApellido(std::string apellido){
    this->apellido = apellido;
}

void Persona::setEmail(std::string email){
    this->email = email;
}

void Persona::setId(int id){
    this->id = id;
}

//Getters
std::string Persona::getNombre(){
    return nombre;
}

std::string Persona::getApellido(){
    return apellido;
}

std::string Persona::getEmail(){
    return email;
}

int Persona::getId(){
    return id;
}

Persona::~Persona(){

}
