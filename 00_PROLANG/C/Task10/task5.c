#include<stdio.h>
int main(){
    float n,m;
    char op;
    printf("Enter the value of number :-\n");
    scanf("%f %f",&n,&m);
    printf("Enter the operation u want to perform 1.Addition 2.Subtraction 3.Multiplication 4.Division \n");
    scanf(" %c",&op);
    (op =='+')?printf("Addition of no is :- %f",n+m):(op=='-')?printf("Subtraction of number is :-%f",n-m):(op=='*')?printf("Multiplication of number is :- %f",n*m):(op=='/')?printf("Division of number is :- %f",n/m):printf("Select the proper opt...");
    
}