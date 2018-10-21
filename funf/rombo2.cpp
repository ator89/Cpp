#include <iostream>
using std::cin;
using std::endl;
using std::cout;

void linea(int espacio, int pos, char c);

int main(){
   linea(3,2,'/');
   linea(3,0,'\\');
   linea(3,1,'/');
   linea(3,2,'\\');
   //cout << '.' << endl;
   return 0;
}

void linea(int espacio, int pos, char c){
   int i,j;
   for(i = 0; i < espacio; i++ ){
      if(i == pos) cout << c;
      else cout << ' ';
   }
}
