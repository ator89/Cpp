#include <iostream>

using namespace std;

class Grupo{
   public:
          void setNombre(string n){
            nombre = n;
          }
          string getNombre(){
             return nombre;
          }
          
   private:
           string nombre;

};

int main()
{
  return 0;
}
