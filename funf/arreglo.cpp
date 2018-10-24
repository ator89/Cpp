#include <iostream>

using std::cin;
using std::cout;
using std::endl;

#define SIZE 20

char* createCharArray(int);
void freeCharArray(char*);
void initCharArray(char*, int);
void printCharArray(char*, int);

int main(){

   char* array = NULL;
   cout << "Apuntador antes de instanciar: " << &array << endl;
   array = createCharArray(SIZE);

   initCharArray(array, SIZE);
   printCharArray(array,SIZE);
   freeCharArray(array);
   cout << &array << endl;

   return 0;
}

void printCharArray(char* arreglo, int size){
   if(arreglo != NULL){
       cout << "El arreglo es: " << endl;
       for( int i = 0; i < size; i++ ){
           cout << " " << arreglo[i];
       }
       cout << endl;
   }
}

void initCharArray(char* arreglo, int size){
   if(arreglo != NULL ){
      for( int i = 0; i < size; i++)
        arreglo[i]='.';
   }
}

void freeCharArray(char* arreglo){
   if(arreglo != NULL ){
      delete[] arreglo;
   }
}

char* createCharArray(int size){
   return new char[size];
}
