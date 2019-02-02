#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head;

void insert(int x){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = NULL;
    if(head != NULL) temp->next = head;
    head = temp;
}

void printa(){
    struct Node* temp = head;
    printf("List is: ");
    while (temp != NULL){
        printf(" %d", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main(){

    head = NULL;
    printf("How many numbers?\n");
    int n,i, x;
    scanf("%d",&n);

    for(i = 0; i < n; i++){
        printf("Enter the number \n");
        scanf("%d", &x);
        insert(x);
        printa();
    }




    int a;
    int *p;
    a = 10;
    p = &a;

    *p = 12;
    printf("%d\n",*p);
    printf("%d\n", a);

    //int C[3][2][2]={{{2,5},{7,9}},
       //             {{3,4},{6,1}},
     //               {{0,8},{11,13}}};
   // printf("%d %d %d %d", C, *C, C[0], &C[0][0] );
}
