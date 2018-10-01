#include <iostream>
#include <string>
using namespace std;

class Persona
{
   public:
          explicit Persona(sintr nombre) : nombreP(nombre)
          {
          }
          
          void setNombreP(string nombre)
          {
               nombreP = nombre;
          }
          
          string getNombreP() cons
          {
             return nombreP;
          }
          
          void showMessage() const
          {
             cout << "Wilkommen Sie! "<< getNombreP() << "!" <<endl;
          }
          
   private:
           string nombreP;
}

int main()
{
  return 0;
}
