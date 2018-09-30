#include <iostream>
#include <string.h>

using namespace std;

int main()
{
  char palabra[] = "hola2";
  char palabra2[] = "hola";
  
  if(strcmp(palabra,palabra2)==0){
     cout << "Palabras iguales"<<endl;
  }
                                    
    
  system("pause");
  return 0;
}
