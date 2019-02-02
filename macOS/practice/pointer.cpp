#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <stdlib.h>
//using std::sran;
//using std::time;

int main(){

    int a, b;
    a = 10;
    b = 13;
    int *p, *p0;
    p = &a;
    *p = 20;
    p0 = &b;

    int **q;
    q = &p;
    //*(*q) = 1444;

    //p = &a;
    //p=88;
    cout << " a: " << a << endl 
        << "&a: " << &a << endl 
        << " p: " << p << endl
        << "&p: " << &p << endl 
        << "*p: " << *p << endl
        << " q: " << q << endl 
        <<  "**q: " << *(*q) << endl 
        << "&q: "  << &q << endl
        << "p0: " << p0 << endl
        << "&p0: " << &p0 << endl
        << "*p0: " << *p0 << endl;
        
    int B[2][3];
    //int **u =&B;
    int (*t)[3] = B;
    int i, j;
   
    for (i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            B[i][j]= i;
        
         cout << endl <<  *(B[i]+j);}
    } 
    cout << B[0][1];
    cout << B[1][2];
    return 0;
}
