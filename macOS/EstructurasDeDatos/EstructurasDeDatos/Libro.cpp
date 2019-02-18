//
//  Libro.cpp
//  EstructurasDeDatos
//
//  Created by Angel Torres on 2/14/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#include <stdio.h>
#include "Libro.h"

Libro::Libro(){
    titulo[49] = ' ';
    isbn[12] = ' ';
}

Libro::~Libro(){
    
}

//Setters
void Libro::setTitulo(char* _titulo){
    //titulo = _titulo;
}
void Libro::setAutor(char* _autor){
    //autor[] = _autor;
}
void Libro::setIsbn(char* _isbn){
    //isbn[] = _isbn;
}

//Getters
char* Libro::getTitulo(){
    return titulo;
}
char* Libro::getAutor(){
    return autor;
}
char* Libro::getIsbn(){
    return isbn;
}
