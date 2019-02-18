//
//  Libro.h
//  EstructurasDeDatos
//
//  Created by Angel Torres on 2/14/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#ifndef Libro_h
#define Libro_h

class Libro{
    
private:
    char titulo[50];
    char autor[50];
    char isbn[13];
    
public:
    Libro();
    ~Libro();
    
    //Setters
    void setTitulo(char*);
    void setAutor(char*);
    void setIsbn(char*);
    
    //Getters
    char* getTitulo();
    char* getAutor();
    char* getIsbn();
    
};

#endif /* Libro_h */
