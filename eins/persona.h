#include <iostream>

using namespace std;

class Persona
{
   public:
          void setUsuario(string u);
          string getUsuario();
          void setPassword(string p);
          string getPassword();
          Persona(){};
   private:
           string usuario;
           string password;
      
};

string Persona::getUsuario()
{
   return usuario;     
}

void Persona::setUsuario(string u)
{
   usuario = u;
}

string Persona::getPassword()
{
   return password;
}

void Persona::setPassword(string p)
{
   password = p;     
}
