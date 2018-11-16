//
//  Hobbie.h
//  Principal
//
//  Created by Angel Torres on 11/14/18.
//  Copyright © 2018 Angel Torres. All rights reserved.
//

#ifndef Hobbie_h
#define Hobbie_h

#include <string>
using std::string;

class Hobbie{
private:
    int horas;
    string hobbie;
public:
    //Constructores
    Hobbie();
    Hobbie(string,int);
    
    //Destructor
    ~Hobbie();
    
    //Setters
    void setHoras(int);
    void setHobbie(string);
    
    //Getters
    int getHoras();
    string getHobbie();
};

#endif /* Hobbie_h */
