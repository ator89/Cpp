




#include <iostream>
#include <string>
using namespace std;

//
class Persona
{
   public:
          void showMessage(string nombre)const
          {
               cout << "Ich heisse " << nombre << endl; 
          }
};
int main()
{
  string nombre;
  Persona p;
  
  cout << "Wie heissen Sie?" << endl;
  getline(cin,nombre);
  
  p.showMessage(nombre);
  
  system("pause");
  return 0;
}
