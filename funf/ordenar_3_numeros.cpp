#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(){
   int a,b,c,t;
   cin >> a >> b >> c;

   if(a > b && b > c){
      cout << a << ' ' << b << ' ' << c  << endl;
   }else if (a>c && c > b){
      cout << a << ' ' << c << ' ' << b << endl;
   }

   //system("pause");
   return 0;
}
