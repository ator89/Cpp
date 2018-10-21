#include <iostream>
using std::cin;
using std::endl;
using std::cout;

int main(){
   int n, i, j;
   cin >> n;
   for (i = 0; i < n; i++ ){
      for(j = 0; j < (n - 1 - i); j++){
         cout << ' ';
      }
      cout << '/';
      for(j = 0; j < i*2; j++){
         cout << ' ';
      }
      cout << '\\' << endl;
   }
   for (i = 0; i < n; i++ ){
      for(j = 0; j < i; j++){
         cout << ' ';
      }
      cout << '\\';
      for(j = 0; j < (n-1-i)*2; j++){
         cout << ' ';
      }
      cout << '/' << endl;
   }

}

