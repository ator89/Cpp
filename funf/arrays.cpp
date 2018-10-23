#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <cstdlib>


int main(){
   int tam;
   cin >> tam;

   int arr[]= {1,2,3,4,5,6,7,8};

   for(int i = 0; i < tam;i++){
       cout << arr[i] <<" " << i<< endl ;
   }
   return 0;
}
