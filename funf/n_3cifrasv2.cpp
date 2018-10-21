#include <iostream>

using namespace std;

int main(){
   int i,j;
   for ( i = 0; i <= 9; i++ ){
       //cout << "xx" << i << ' ';
       for ( j = 0; j <= i; j++ ){
           if ( i -j > 0 ) cout << (i - j) << j << i << ' ';
       }
   }
   cout << endl;

   return 0;
}
