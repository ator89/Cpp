#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(){
    char palabra[5] = {'h','o','l','a',char(0)};
    char *pc;
    pc = "adios";
    cout << int(&palabra[0]) << endl;
    cout << int(&palabra[1]) << endl;


    for( int i = 0; i < 6; i ++ ){
        cout << int(pc[i]) << endl;
    }
    return 0;
}
