#include<stdio.h>
void add(int ,int);
int main(){
    int num1=10,num2=20;
    add(num1,num2);
}
void add(int a,int b)
{
    int sum = a+b;
    printf("%d",sum);
}