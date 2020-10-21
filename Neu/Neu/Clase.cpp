//
//  Clase.cpp
//  Neu
//
//  Created by Angel Torres on 2/18/20.
//  Copyright © 2020 Angel Torres. All rights reserved.
//

#include "Clase.h"

Clase::Clase(){
    num = 0;
    nombre = "";
    arregloPuntero = NULL;
    apuntadorDeApuntadores = NULL;
    
}
Clase::~Clase(){}
    
    //Setters
void Clase::setNum(int){
    
}

void Clase::setNombre(std::string){}

void Clase::setArregloPuntero(int pos){
    arregloPuntero = arregloPuntero[pos];
}

void Clase::setApuntadorDeApuntadores(int**){
    
}
    
    //Getters
int Clase::getNum(){
    return num;
}

std::string Clase::getNombre(){
    return nombre;
}

int* Clase::getArregloPuntero(){
    return arregloPuntero;
}

int** Clase::getApuntadorDeApuntadores(){}
void Clase::sumar(){}
