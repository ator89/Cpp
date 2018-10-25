#include <iostream>

using namespace std;

int main(){

    int t[5];

    for( int i = 0; i < 5; i++ ){
        cout << &t[i] << endl;
    }

    return 0;
}
