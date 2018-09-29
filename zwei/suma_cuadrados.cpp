#include <iostream>

using namespace std;

int main()
{
  int suma = 0, cuadrado; 
  
  for (int i=1;i<=10;i++){
      cuadrado = i*i;
      suma += cuadrado;
      }
      
      cout << "Suma " << suma << endl;
  system("pause");
  return 0;
}
