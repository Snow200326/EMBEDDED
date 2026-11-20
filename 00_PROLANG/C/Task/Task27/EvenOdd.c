#include<stdio.h>
int main(){
    int num;
    printf("Enter the number :- \n");
    scanf("%d",&num);
    if(num%2==0){
        printf("Number %d is Even",num);
    }else
    {
        printf("Number %d is Odd",num);
    }
}