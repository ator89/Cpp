#include "Persona.h"

#include <string>
using std::string;

//Constructor
Persona::Persona(){
    this->id = 0;
    this->nombre = "";
    this->apellido = "";
    this->email = "";
}

//Setters
void  Persona::setNombre(string nombre){
    this->nombre = nombre;
}

void Persona::setApellido(string apellido){
    this->apellido = apellido;
}

void Persona::setEmail(string email){
    this->email = email;
}

void Persona::setId(int id){
    this->id = id;
}

//Getters
string Persona::getNombre(){
    return nombre;
}

string Persona::getApellido(){
    return apellido;
}

string Persona::getEmail(){
    return email;
}

int Persona::getId(){
    return id;
}

Persona::~Persona(){

}
