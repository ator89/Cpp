#include <iostream>

using namespace std;

int sumar(int);

int main(){
   int n;
   cin >> n;
   cout << sumar(n);
   return 0;
}

int sumar(int n){
   int suma = 0;
   while(n>0){
      suma = suma + (n % 10);
      n = n / 10;
   }
   return suma;
}
