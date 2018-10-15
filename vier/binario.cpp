#include <iostream>
#include <conio.h>

using namespace std;


void binario(int n){
   if(n>1) binario (n/2);
   
   cout << n%2;
}

int main()
{
  int n;
  
  do{
     cout << "Ingrese un numbero";
     cin >> n;
     
     if(n<0){
        cout << "\nNUmero invalido...";
     }
  }while(n<0);  
    
  cout << "\n numero: "<<n;
  cout << "\n binario: ";
  binario(n);
  getch();
  return 0;
}
