#include <iostream>

using namespace std;

int main()
{
  int num[] = {1,2,3,4,5};
  int primero,ultimo,medio,dato;
  char flag = 'f';
  
  dato = 7;
  primero = 0;
  ultimo = 5;
  
  while(primero <= ultimo ){
     medio = (primero+ultimo)/2;
     
     if(num[medio]==dato){
        flag = 'v';
        break;
     }
     if(num[medio]>dato){
        ultimo = medio;
        medio = (primero+ultimo)/2;
     }
     if(num[medio]<dato){
        primero = medio;
        medio = (primero+ultimo)/2;
     }
  }
  
  if( flag == 'v'){
     cout << "Num encontrado en pos: " << medio << endl;
  }else{
     cout << "No encontrado"<<endl;
  }
    
  system("pause");
  return 0;
}
