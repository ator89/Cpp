#include <iostream>

using namespace std;

int main(){
    int n, i, suma = 0;
    cin >> n;

    for( i = 1; i <=n; i++){
        suma += i;
    }
    cout << suma << endl;

    return 0;
}
