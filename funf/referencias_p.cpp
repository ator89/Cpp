#include <iostream>
using std::cin;
using std::cout;
using std::endl;


void masmas(int& i){
    i++;
}

int main(){
    int a = 1;
    masmas(a);
    cout << a << endl;

    int b = 1;
    int& i = b;
    cout << i << endl;

    return 0;
}
