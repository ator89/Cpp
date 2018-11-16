//
//  Hobbie.cpp
//  Principal
//
//  Created by Angel Torres on 11/14/18.
//  Copyright © 2018 Angel Torres. All rights reserved.
//

#include "Hobbie.h"
#include <stdio.h>

#include <string>
using std::string;

Hobbie::Hobbie(){
    this->horas = 0;
    this->hobbie = "";
}

Hobbie::Hobbie(string hobbie, int horas){
    this->horas = 0;
    this->hobbie = "";
}

Hobbie::~Hobbie(){
    //delete horas;
    //delete hobbie;
}

//Getters
int Hobbie::getHoras(){
    return this->horas;
}

string Hobbie::getHobbie(){
    return this->hobbie;
}

//Setters
void Hobbie::setHoras(int horas){
    this->horas = horas;
}

void Hobbie::setHobbie(string hobbie){
    this->hobbie = hobbie;
}
