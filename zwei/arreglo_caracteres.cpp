#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
  char letras1[]={'p','f','m','b','j'};
  char letras2[]={'t','y','e','g','k'};
  char letras[10];
  
  for(int i=0; i<5;i++)
  {
     letras[i]=letras1[i];
  }
  
  for(int i=5; i<10;i++)
  {
     letras[i]=letras2[i-5];
  }
  
  for(int i=0;i<10;i++)
  {
     cout << letras[i] << endl;
  }

  system("pause");
  return 0;
}
