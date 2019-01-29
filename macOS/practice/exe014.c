#include <stdio.h>
#include <stdlib.h>

int Add(int* a, int* b){
    //a y b son punteros a integer locales de Add
    //printf("Addres of a in Add = %d\n", &a);
    //printf("Value in a of Add(address of a main) = %d\n",a);
    //printf("Value at address stored in a of Add = %d\n",*a);
    int c = (*a) + (*b);
    return c;
}

int main(){
    int a = 2, b = 5;
    int* ptrA;
    ptrA = &a;
    printf("Address of a in main = %d \n", &a);
    //int c = Add(a,b);//valor en x de main es copiado en Add
                    //valor en y de main es copiuado en Add
                    //pasar la dirección (&a,&b) y la función Add(int*,int^)
    int c = Add(&a,&b);
    printf("Sum = %d\n", c);
}
