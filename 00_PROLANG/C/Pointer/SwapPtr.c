#include<stdio.h>
int main(){
    int x;
    int y;
    int temp;
    int *ptr,*ptrr;
    printf("Enter the two number :- \n");
    scanf("%d %d",&x, &y);
    ptr=&x;
    ptrr=&y;
    printf("The value befor swap %d  and %d \n",*ptr,*ptrr);
    temp = *ptr;
    *ptr = *ptrr;
    *ptrr = temp;
    printf("The value after swap %d  and %d  ",*ptr,*ptrr);
}