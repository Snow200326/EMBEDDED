#include<stdio.h>
int add(int,int);
int main(){
    int num1=10,num2=20;
    int sum = add(num1,num2);
   printf("%d",sum);
}
int add (int a,int b){
    return a+b;
}
