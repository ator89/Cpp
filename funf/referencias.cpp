#include <iostream>

using namespace std;

int suma1(int n){
  return n+1;     
}

void incrementa1(int &n){
   n=n+1;
}

int main()
{
  int a=1, b=2, c;
  
  c=suma1(4);
  incrementa1(b);
  incrementa1(c);
  
  cout << c << ' ' << b << endl;
  
  system("pause");
  return 0;
}
