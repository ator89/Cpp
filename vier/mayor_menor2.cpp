#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
  int num, mayor, menor;
  
  for (int i=0; i<=4;i++){
     cout << "numero: ";
     cin >> num; 
     
     if(i==0){
        mayor=num;
        menor=num;
     }
     else{
          if (num > mayor ) mayor = num;
          if (num < menor ) menor = num;
     }
  }
  
  cout << mayor << endl;
  cout << menor << endl;
  
  getch();
  return 0;
}
