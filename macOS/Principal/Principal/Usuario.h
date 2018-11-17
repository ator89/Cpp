//
//  Usuario.h
//  Principal
//
//  Created by Angel Torres on 11/17/18.
//  Copyright © 2018 Angel Torres. All rights reserved.
//

#ifndef Usuario_h
#define Usuario_h

#include <string>
using std::string;

class Usuario{
private:
    string usuario;
    string password;
public:
    Usuario();
    Usuario(string, string);
    ~Usuario();
    
    string getUsuario();
    string getPassword();
    
    void setUsuario(string);
    void setPassword();
};

#endif /* Usuario_h */
