#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;


int main(){

   int n1, n2;
   string nombre;

   cout << "Digite un número: " << endl; cin >> n1;
   cout << "Digite otro número: " << endl; cin >> n2;

   int suma =0;

   suma = n1 + n2;

   cout << "La suma de n1["<<n1<<"] + n2["<<n2<<"] es "<< suma << endl;

   if(n1>n2){
      cout << "N1 es mayor"<<endl;
   }else{cout << "N2 es mayor"<<endl;}
}
