#include<stdio.h>
int main(){
    int num;
    printf("Enter the number:-\n");
    scanf("%d",&num);
    if(num%5==0 && num%11==0)
        printf("Numbre %d is divisble by 5 and 11",num);
    else 
        printf("Number %d is not divisble by 5 and 11",num);
    
}