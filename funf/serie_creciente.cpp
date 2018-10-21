#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(){
   int n, last;
   cin >> n;

   while( n! = 0){
      cout << last << ' ' << n << endl;
      last = n;
      cin >> n;
   }

   return 0;
}
