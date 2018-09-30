#include <iostream>

using namespace std;

class Grupo{
   public:
          void setNombre(string n){
            nombre = n;
          }
          string getNombre() const{
             return nombre;
          }
          
          void mensaje() const
          {
               cout << "El nombre es: " << getNombre() <<endl; 
          }
          
   private:
           string nombre;

};

int main()
{
  Grupo g;
  
  g.setNombre("hjjh");
  
  g.mensaje();
  
    
  system("pause");
  return 0;
}
