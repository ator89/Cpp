#include <iostream>

using namespace std;

int main(){

    int t[5];

    for( int i = 0; i < 5; i++ ){
        cout << int(&t[i]) << endl;
    }

    cout << endl << endl;

    double T[5] = {1.0,2.0,3.0,4.0,5.0};
    double *p;
    p = &T[0];
    //*(p+2) = -5.0;
    //T[2]
    p = p +1;
    cout << *(p+1) << endl;

    cout << endl << endl;

    int h[3] = { -1, 7, 4};
    int *pp;
    pp = h; // &h[0] => h
    *pp = 3;
    *(pp+1) = -299;
    h[2] = 15;

    for (int j = 0; j < 3; j++ ){
        cout << h[j] << " " << endl;
    }

    return 0;
}
