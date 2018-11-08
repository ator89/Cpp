#include <iostream>
using std::cout;
using std::endl;

int main(){
   int a = 3, b = 2;
   b = a++;
   cout << b << endl;
   cout << ++b << endl;
   return 0;
}
