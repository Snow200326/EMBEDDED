#include<stdio.h>
int main(){
    int x=10;
    int y=20;
    int *ptr,*ptrr;
    ptr=&x;
    ptrr=&y;
    printf("The addition of two no is %d ",*ptr + *ptrr);
}