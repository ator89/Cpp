#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(){
   int n, m=0;
   cin >> n;

   while (n > 0 ){
      m = m * 10 + (n % 10);
      n = n / 10;
      //cout << m << endl;
   }
   cout << m << endl;
}
