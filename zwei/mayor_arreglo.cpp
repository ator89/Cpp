#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
  int num[100],n,mayor=0;
  
  cout << "Num de elementos";
  cin >> n;
  
  for(int i=0; i< n;i++)
  {
     cout << i+1 << "Digitar un numero: ";
     cin >> num[i];
     
     if(num[i]>mayor)
     {
        mayor = num[i];
     }
  }
  
  cout << "El mayor es: "<< mayor << endl; 
  
  system("pause");
  return 0;
}
