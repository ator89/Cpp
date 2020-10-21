//
//  Clase.hpp
//  Neu
//
//  Created by Angel Torres on 2/18/20.
//  Copyright © 2020 Angel Torres. All rights reserved.
//

#ifndef Clase_h
#define Clase_h

#include <stdio.h>
#include <string>

class Clase{
    
private:
    int num;
    std::string nombre;
    int* arregloPuntero;
    int** apuntadorDeApuntadores;
    
public:
    Clase();
    ~Clase();
    
    //Setters
    void setNum(int);
    void setNombre(std::string);
    void setArregloPuntero(int);
    void setApuntadorDeApuntadores(int**);
    
    //Getters
    int getNum();
    std::string getNombre();
    int* getArregloPuntero();
    int** getApuntadorDeApuntadores();
    
    void sumar();
};

#endif /* Clase_hpp */
