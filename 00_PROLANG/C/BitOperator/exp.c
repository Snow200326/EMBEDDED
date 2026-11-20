#include<stdio.h>
int main(){
    int num;
    int bit;

    printf("Enter your number :- ");
    scanf("%d",&num);

    printf("Enter the bit :- ");
    scanf("%d",&bit);

    int ans = (num >> bit) &1 ;
    printf("The bit is :- %d",ans);
}