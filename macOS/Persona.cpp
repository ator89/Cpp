#include "Persona.h"
#include "Hobbie.h"

#include <string>
using std::string;

#include <vector>
using std::vector;

//Constructor por defecto
Persona::Persona(){
    this->user = "";
    this->password = "";
    this->nombre = "";
    this->apellido = "";
    this->direccion = "";
    this->edad = 0;
    this->telefono = 0;
    this->listaHobbies;
}

//Constructor sobrecargado usuario y password
Persona::Persona(string user, string password){
    this->user = user;
    this->password = password;
}

//Constructor de contacto y perfil
Persona::Persona(string nombre, string apellido, int edad, int telefono, string direccion){
    this->nombre = nombre;
    this->apellido = apellido;
    this->edad = edad;
    this->telefono = telefono;
    this->direccion = direccion;
}

//Destructor
Persona::~Persona(){
}

void Persona::setUser(string user){
    this->user = user;
}

string Persona::getUser(){
    return this->user;
}

void Persona::setPassword(string password){
    this->password = password;
}

string Persona::getPassword(){
    return this->password;
}

void Persona::setNombre(string nombre){
    this->nombre = nombre;
}

string Persona::getNombre(){
    return this->nombre;
}

void Persona::setApellido(string apellido){
    this->apellido = apellido;
}

string Persona::getApellido(){
    return this->apellido;
}

void Persona::setEdad(int edad){
    this->edad = edad;
}

int Persona::getEdad(){
    return this->edad;
}

void Persona::setTelefono(int telefono){
    this->telefono = telefono;
}

int Persona::getTelefono(){
    return this -> telefono;
}

void Persona::setDireccion(string direccion){
    this -> direccion = direccion;
}

string Persona::getDireccion(){
    return this -> direccion;
}


void Persona::setListaHobbies(vector<Hobbie*> listaHobbies){
    this-> listaHobbies = listaHobbies;
}

vector<Hobbie*> Persona::getListaHobbies(){
    return this -> listaHobbies;
}

void Persona::setHobbie(Hobbie* hobbie){
    this-> listaHobbies.push_back(hobbie);
}
