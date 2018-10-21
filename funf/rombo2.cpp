#include <iostream>
using std::cin;
using std::endl;
using std::cout;

void linea(int espacio, int pos, char c);

int main(){
   int n, i;
   cin >> n;

   for( i= 0; i < n; i++){
      linea(n,n-1-i,'/');
      linea(n, i, '\\');
      cout << endl;
   }
   for( i= 0; i < n; i++){
      linea(n,i,'\\');
      linea(n, n-1-i, '/');
      cout << endl;
   }

   /*
   linea(3,2,'/');
   linea(3,0,'\\');
   cout << endl;
   linea(3,1,'/');
   linea(3,1,'\\');
   cout << endl;
   linea(3,0,'/');
   linea(3,2,'\\');
   cout << endl;
   //cout << '.' << endl;*/
   return 0;
}

void linea(int espacio, int pos, char c){
   int i,j;
   for(i = 0; i < espacio; i++ ){
      if(i == pos) cout << c;
      else cout << ' ';
   }
}
