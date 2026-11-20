#include<stdio.h>
int main(){
    int x=10;
    int *ptr;
    ptr = &x;
    
    printf("The value of x is :- %d\n",x);
    printf("The address of x is :- %u\n",&x);

    printf("The value that stored in p is - %d\n",*ptr);
    printf("The value of x is :- %d\n",ptr);
    printf("The address of ptr is :- %u\n",&ptr);

    *ptr=20;
    printf("The updated value  in p is - %d\n",*ptr);
    printf("The address of updated ptr is :- %u\n",&ptr);


}