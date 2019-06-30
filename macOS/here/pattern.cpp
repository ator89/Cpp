#include <iostream>
using std::cout;
using std::cin;
using std::endl;


void print1(int);
void print2(int);
void print3(int);
void print4(int);

int main(){

    int n = 5;
    print1(n);

    cout << endl;
    print2(n);

    cout << endl;
    print3(n);

    cout << endl;
    print4(n);
    return 0;
}

void print1(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void print2(int n){
    for(int i = 0; i < n; i++){
        for( int j = 2*(n-i); j>=0; j--){
            cout << " ";
        }
        for( int j = 0; j <= i; j++ ){
            cout << "* ";
        }
        cout << endl;
    }
}

void print3(int n){
    for(int i = 0; i < n; i++){
        for(int j = n-i; j>1; j--){
            cout << "* ";
        }
        cout << "\n";
    }
}

void print4(int n){
   for(int i = 0; i < n; i++){
       for(int j = n-i; j>1; j--){
           cout << " ";
       }
       for(int j = 0; j <=i; j++){
            cout << "* ";
       }
       cout << "\n";
    }
}
