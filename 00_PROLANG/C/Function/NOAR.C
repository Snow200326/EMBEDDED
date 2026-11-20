#include<stdio.h>
int add();
int main(){
    int num1=10,num2=20;
    int sum = add();
   printf("%d",sum);
}
int add (){
    int a=10;
    int b=20;
    return a+b;
}
