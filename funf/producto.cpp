#include <iostream>

using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

struct Numero{
   int cifras[30];
   int ncifras;
};

void leer_numero(Numero&);
void escribir_numero(const Numero&);

int main(){

   Numero N;

   leer_numero(N);
   escribir_numero(N);

   cout << endl;

   return 0;
}

void escribir_numero(const Numero& N){
   for(int i = N.ncifras - 1; i >= 0; i--){
      cout << N.cifras[i];
   }
}

void leer_numero(Numero& N){
   string s;
   int i, tam;
   cin >> s;
   tam = s.size();

   for( i = 0; i < tam ; i++){
      char digito = s[i];
      N.cifras[tam - 1 - i] = int(digito) - int('0');
   }
   N.ncifras = tam;
}
