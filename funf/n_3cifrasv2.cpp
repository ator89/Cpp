#include <iostream>

using namespace std;

int main(){
   int i;
   for ( i = 100; i <= 999; i++ ){
       int c, d, u;

       c = i / 100;
       d = ( i / 10 ) % 10;
       u = i % 10;

       if(c + d == u){
           cout << i << ' ' ;
       }
   }

   return 0;
}
