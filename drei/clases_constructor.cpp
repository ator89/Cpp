#include <iostream>
#include <string>
using namespace std;

class Persona
{
   public:
          explicit Persona(string nombre) : nombreP(nombre)
          {
          }
          
          void setNombreP(string nombre)
          {
               nombreP = nombre;
          }
          
          string getNombreP() const
          {
             return nombreP;
          }
          
          void showMessage() const
          {
             cout << "Wilkommen Sie! "<< getNombreP() << "!" <<endl;
          }
          
   private:
           string nombreP;
};

int main()
{
  Persona p1("Erste Name");  
  Persona p2("Zweite Name");
  
  p1.showMessage();
  p2.showMessage();
  
  system("pause");
  return 0;
}
