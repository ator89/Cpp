//
//  Persona.h
//  Principal
//
//  Created by Angel Torres on 11/14/18.
//  Copyright © 2018 Angel Torres. All rights reserved.
//

#ifndef Persona_h
#define Persona_h

#include "Hobbie.h"
#include <string>
using std::string;

#include <vector>
using std::vector;

class Persona{
private:
    int userid;
    string username, password;
    string name, lastname;
    vector<Hobbie*> listaHobbies;
    
public:
    //Constructores
    Persona();
    Persona(string,string,int);
    Persona(string,string);
    //Destructor
    ~Persona();
    
    //Getters
    string getUsername();
    string getPassword();
    string getName();
    string getLastName();
    int getUserId();
    vector<Hobbie*> getListaHobbies();
    
    //Setters
    void setUsername(string);
    void setPassword(string);
    void setName(string);
    void setLastName(string);
    void setUserId(int);
    void setHobbie(Hobbie*);
    
};


#endif /* Persona_h */
