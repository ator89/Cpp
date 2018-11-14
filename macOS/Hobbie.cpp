#include "Hobbie.h"

#include <iostream>
using std::endl;
using std::cout;

#include <string>
using std::string;

//Constructor por defecto
Hobbie::Hobbie(){
    this -> hobbie = "";
    this -> horas = 0;
}
//Constructor sobrecargado
Hobbie::Hobbie(string hobbie, int horas){
    this -> hobbie = hobbie;
    this -> horas = horas;
}
//Destructor
Hobbie::~Hobbie(){}

//Mutadores y Accesores
void Hobbie::setHobbie(string hobbie){
    this->hobbie = hobbie;
}

string Hobbie::getHobbie(){
    return this -> hobbie;
}

void Hobbie::setHoras(int horas){
    this -> horas = horas;
}

int Hobbie::getHoras(){
    return this -> horas;
}
