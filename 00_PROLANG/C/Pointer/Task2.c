#include<stdio.h>
void Swap(int *ptr, int *ptrr){
    printf("The value befor swap %d  and %d \n",*ptr,*ptrr);
    *ptr = *ptr + *ptrr ;
    *ptrr = *ptr - *ptrr;
    *ptr = *ptr - *ptrr;
    printf("The value after swap %d  and %d  ",*ptr,*ptrr);
}
int main(){
    int x;
    int y;
    int *ptr,*ptrr;
    printf("Enter the two number :- \n");
    scanf("%d %d",&x, &y);
    ptr=&x;
    ptrr=&y;
    Swap(ptr,ptrr);
}

