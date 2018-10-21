#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int suma(int);

int main(){

   cout << suma(3)<< endl;

   return 0;
}

int suma(int n){
   if(n <= 0){
      return 0;
   }
   return n + suma(n-1);
}
