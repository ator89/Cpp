//
//  Persona.cpp
//  Principal
//
//  Created by Angel Torres on 11/14/18.
//  Copyright © 2018 Angel Torres. All rights reserved.
//

#include "Persona.h"
#include <stdio.h>
#include <string>
using std::string;

//Constructor por defecto
Persona::Persona(){
    this->username = "";
    this->password = "";
    this->name = "";
    this->lastname = "";
    this->userid = 0;
    this->listaHobbies;
}
//Constructor sobrecargado para perfil
Persona::Persona(string name, string lastname, int userid){
    this->name = name;
    this->lastname = lastname;
    this->userid = userid;
}

//Constructor sobrecargado para usuario
Persona::Persona(string username, string password){
    this->username = username;
    this->password = password;
}

//Destructor
Persona::~Persona(){
    //delete username;
    //delete password;
    //delete name;
    //delete lastname;
    //delete userid;
}

//Getters
string Persona::getUsername(){
    return this->username;
}

string Persona::getPassword(){
    return this->password;
}

string Persona::getName(){
    return this->name;
}

string Persona::getLastName(){
    return this->lastname;
}

int Persona::getUserId(){
    return this->userid;
}

vector<Hobbie*> Persona::getListaHobbies(){
    return this->listaHobbies;
}

//Setters
void Persona::setUsername(string username){
    this->username = username;
}

void Persona::setPassword(string password){
    this->password = password;
}

void Persona::setName(string name){
    this->name = name;
}

void Persona::setLastName(string lastname){
    this->lastname = lastname;
}

void Persona::setUserId(int userid){
    this->userid = userid;
}

void Persona::setHobbie(Hobbie* hobbie){
    this->listaHobbies.push_back(hobbie);
}
