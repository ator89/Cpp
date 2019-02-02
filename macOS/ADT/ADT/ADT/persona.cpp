//
//  persona.cpp
//  ADT
//
//  Created by Angel Torres on 1/26/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#include "persona.h"

Persona::Persona(){
    id = 0;
    edad = 0;
    usuario = "";
    password = "";
}
Persona::~Persona(){}

//Getters
int Persona::getId(){
    return id;
}

int Persona::getEdad(){
    return edad;
}

std::string Persona::getUsuario(){
    return usuario;
}

std::string Persona::getPassword(){
    return password;
}

//setters
void Persona::setID(int _id){
    id = _id;
}

void Persona::setEdad(int _edad){
    edad = _edad;
}

void Persona::setUsuario(std::string _usuario){
    usuario = _usuario;
}

void Persona::setPassword(std::string _password){
    password = _password;
}

