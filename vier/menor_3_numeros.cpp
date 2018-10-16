#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
  int a, b, c, d, menor=0;
  
     cout << "A: "<< endl;
     cin >> a;
     cout << "B: "<< endl;
     cin >> b;
     cout << "B: "<< endl;
     cin >> c;
     
     if(a < b && a<c){
        menor = a;
     }else if(b<a && b<c){
        menor = b;
     }else{
        menor = c;
     }
  
  d = menor;
  cout << d<< endl;
  
  getch();
  return 0;
}
