//
//  main.cpp
//  Punteros
//
//  Created by Angel Torres on 1/26/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#include <iostream>
using std::cout;
using std::endl;

int Add(int* a, int *b){
    cout << "Address of a in  Add = " << &a <<endl;
    cout << "Value in a of Add (address of a on main)= " << a <<endl;
    cout << "Value at address stored in a of Add = " << *a <<endl;
    int c = (*a) + (*b);
    return c;
}

int* Add2(int* a, int *b){
    cout << "Address of a in  Add = " << &a <<endl;
    cout << "Value in a of Add (address of a on main)= " << a <<endl;
    cout << "Value at address stored in a of Add = " << *a <<endl;
    int c2 = (*a) + (*b);
    return &c2;
}

int* Add3(int* a, int *b){
    int* c = new int();
    (*c) = (*a) + (*b);
    return c;
}

int main(int argc, const char * argv[]) {
    int a = 2, b = 4;
    cout << "Address of a in main = " << &a << endl;
    int c = Add(&a,&b);
    int* c2 = Add2(&a,&b);
    int* c3= Add2(&a,&b);

    cout << "Suma = " << c << endl;
    cout << "Suma = " << *c2 << endl;
    cout << "Suma = " << *c3 << endl;
    
    return 0;
}
