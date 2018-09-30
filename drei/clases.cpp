#include <iostream>

using namespace std;

class Grupo{
   public:
          explicit Grupo(string n) : nombre(n)
          {
          }
          
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
  Grupo g1("df");
  //Grupo g;
  //g.setNombre("hjjh");
  
  g1.mensaje();
  //g.mensaje();
    
  system("pause");
  return 0;
}
