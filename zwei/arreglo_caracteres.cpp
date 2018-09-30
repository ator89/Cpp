#include <iostream>


using namespace std;

int main()
{
  char letras1[]={'1','2','3','4'};
  char letras2[]={'t','y','e','g'};
  char letras[8];
  
  for(int i=0; i<4;i++)
  {
     letras[i]=letras1[i];
  }
  
  for(int i=0; i<8;i++)
  {
     letras[i]=letras2[i-4];
  }
  
  for(int i=0;i<8;i++)
  {
     cout << letras[i] << endl;
  }

  system("pause");
  return 0;
}
