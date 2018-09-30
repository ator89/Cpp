#include <iostream>

using namespace std;

int main()
{
  int a[] = {3,4,2,1,5};
  char b[] = {'a','b','c','d','e'}, dat;
  int i=0,dato;
  char flag = 'f';  
  
  dat='c';
  dato = 5;
  
  while((flag == 'f') && (i<5)){
     if(b[i]== dat){
        flag = 'v';
     }
     i++;
  }
  
  if(flag == 'f'){
     cout << "El número no existe" <<endl;
  }else if(flag == 'v'){
     cout << "Encontrado en pos: " << i-1 << endl;    
  }
  
  system("pause");
  return 0;
}
