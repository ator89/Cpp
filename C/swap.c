#include <stdio.h>

void swap1(int,int);
void swap2(int*,int*);

int main(){
    int x, y;
    x = 5;
    y = 11;

    swap2(&x, &y);

    printf("x->%i y y->%i",x,y);    
    
    return 0;
}

void swap1(int a, int b){
    int c;
    c = a;
    a = b;
    b = c;
}

void swap2(int* a, int* b){
    int c;
    c = *a;
    *a = *b;
    *b = c;
}
