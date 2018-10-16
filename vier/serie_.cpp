#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
  float valor =2;
  float suma = 1;
  float i;
  
  for(i=2; suma< valor; i++){
      suma += 1/i;
      printf("%f + 1/%f\n",suma,i);        
  }
  printf("Hicieron falta %f elementos de la serie\n",i-2);
  
  system("pause");
  return 0;
}
