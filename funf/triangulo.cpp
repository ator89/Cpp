#include <iostream>
using std::cin;
using std::endl;
using std::cout;

bool esTriangulo(double, double, double);

int main(){

   int a,b,c;
   cin >> a >> b >> c;

   cout << esTriangulo(a, b, c) << endl;

   return 0;
}

bool esTriangulo(double a, double b, double c){
   int mayor;

   if ( a > b && a > c ){
       mayor = a;
   }else if ( b > a && b > c){
       mayor = b;
   }else{
       mayor = c;
   }

   //if ()

   return false;

}
