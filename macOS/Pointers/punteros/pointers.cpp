#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){

    int a;
    int *p;
    a = 10;
    p = &a;

    cout << "Address of P is: " << p<<endl;
    cout << "Value at p is: " << *p << endl;

    int b = 20;

    *p = b;

    cout << "Address of P is: "<<p << endl;
    cout << "Value at p is: "<< *p<<endl;

    return 0;
}
