#include <iostream>

using namespace std;

void arreglo(char[],int);

int main()
{
  char arr[] = {'a','r','n','m','k','h','f','d','r'};
  cout << "Algo" << endl;
  
  arreglo(arr,9);
  
  system("pause");
  return 0;
}

void arreglo(char arreglo[],int size){
   for (int i = 0; i <= size; i++){
      cout << " " << arreglo[i] << endl;
   }  
   
}
