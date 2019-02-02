//
//  persona.hpp
//  ADT
//
//  Created by Angel Torres on 1/26/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#ifndef PERSONA_H
#define PERSONA_H

#include <string>

class Persona{
    
private:
    int id, edad;
    std::string usuario, password;
    
public:
    Persona();
    ~Persona();
    //Getters
    int getId();
    int getEdad();
    std::string getUsuario();
    std::string getPassword();
    //setters
    void setID(int);
    void setEdad(int);
    void setUsuario(std::string);
    void setPassword(std::string);
    
};

#endif /* persona_hpp */
