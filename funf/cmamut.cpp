#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

//swap usando una variable temporal
void swap1(int&,int&);
//swap sin usar variable temporal
void swap2(int&,int&);

void bubble(int[],int);

int main(){

   int a = 10;
   int b = 15;
   cout << "Primeros valores" << endl;
   cout << a << " " << b << endl;

   //swap1(a,b);

   cout << "Nuevos valores" <<endl;
   cout << a << " " << b << endl;
   swap2(a,b);
   cout << "Nuevo valores" << endl;
   cout << a << " " << b << endl;
   


   return 0;
}

//Bubble Sort
void bubble(int arr[], int size){
   for( int i = 0; i < size; i++ ){
      for( int j = 0; j < size-1; j++ ){
         if( arr[i]>arr[j+1]){
	     swap1(arr[i],arr[j+1]);
	 }
      }
   }
}

//swap usuando una variable temporal
void swap1(int& a, int& b){
   int x;
   x=a;
   a=b;
   b=x;
}

//swap sin usar una variable temporal
void swap2(int& a, int& b){
   a = a + b;
   b = a - b;
   a = a - b;
}
