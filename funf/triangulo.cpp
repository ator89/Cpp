#include <iostream>
using std::cin;
using std::endl;
using std::cout;

bool esTriangulo(double, double, double);

int main(){

   int a,b,c;
   cin >> a >> b >> c;

   if(esTriangulo(a, b, c)){
      cout << "Es triángulo" << endl;
   }else{
      cout << "No es triángulo" << endl;
   }
   return 0;
}

bool esTriangulo(double a, double b, double c){
   double mayor;
   double x1, x2;

   if ( a > b && a > c ){
       mayor = a;
       x1 = b;
       x2 = c;
   }else if ( b > a && b > c){
       mayor = b;
       x1 = a;
       x2 = c;
   }else{
       mayor = c;
       x1 = a;
       x2 = b;
   }

   if( a==b && a==c && b==c ){
      return false;
   }else if ( mayor < (x1 + x2)){
      return true;
   }else{
      return false;
   }



}
