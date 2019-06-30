#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <stdio.h>

int main(){

    int c;
    puts(". to exit:");
    do{
        c = getchar();
        putchar(c);
    }while(c != '.');
    return 0;
}
