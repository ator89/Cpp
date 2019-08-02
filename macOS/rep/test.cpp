#include <iostream>
using std::cout;

int main(){

    int f = 1, i = 2;
    while(++i<5){
        f*=i;
    }
    cout << f;
    return 0;
}
