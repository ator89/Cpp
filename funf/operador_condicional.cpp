#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(){
    int a, b, c;

    cin >> a >> b >> c;

    a > b ? cout << a << " > " << b : cout << b << " > " << a << endl;

    return 0;
}
