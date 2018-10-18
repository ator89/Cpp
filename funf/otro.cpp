#include <iostream>

using namespace std;

void valoresNuevos(int&,int&);

int main()
{
  int num1, num2;
  
  cout << "Dos numeros: ";
  cin >> num1 >> num2;
  
  valoresNuevos(num1,num2);
  cout << num1 << ' ' << num2;
  system("pause");
  return 0;
}


void valoresNuevos(int& a, int& b){
   a=40;
   b=50;
}
