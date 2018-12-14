#ifndef USUARIO_H
#define USUARIO_H

#include "Persona.h"

class Usuario: public Persona{
   
    private:
        int id_usuario;

    protected:
       string username, password;

    public:
      Usuario();
      Usuario(string, string);
      ~Usuario();

      //setter
      void setUsername(string);
      void setPassword(string);
      void setID_usuario(int);
      
      //getter
      string getUsername();
      string getPassword();
      int getID_usuario();
    
      
   

};


#endif
