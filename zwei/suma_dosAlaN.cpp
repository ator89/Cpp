#include <iostream>
#include <math.h>

using namespace std;


int main()
{
  int suma = 0, potencia = 0,n;
  
  cout << "N elementos ";
  cin >> n;
  
  for (int i=1; i <=n; i++)
  {
      potencia = pow(2,i); 
      suma +=potencia;
  }
  
  cout << "Suma " << potencia << endl;
  
  system("pause");
  return 0;
}
