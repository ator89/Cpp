#include <iostream>

using namespace std;

void swap(int,int);

void swapV(int&,int&);

int main()
{
  int a=20, b=99;
  cout << "Valores originales"<<endl;
  
  cout << a << " " << b << endl; 
  
  cout << "Intercambio por valor"<< endl;
  swap(a,b);
  
  cout << "Intercambio por referencia"<< endl;
  swapV(a,b);
  cout << a << " " << b << endl; 

  system("pause");
  return 0;
}

void swapV(int& a, int& b){
  int aux=a;
  aux = a;
  a = b;
  b = aux;     
}

void swap(int a, int b){
  cout << a << " " << b << endl;  
  int aux;
  aux = a;
  a=b;
  b=aux; 
  cout << a << " " << b << endl;  
}
