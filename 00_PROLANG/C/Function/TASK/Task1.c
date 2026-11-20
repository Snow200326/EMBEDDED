#include<stdio.h>
// void add();
void sub(int ,int);
int mul(int ,int);

int main(){
    int num,num1;
    printf("Enter the value for the number :- ");
    scanf("%d %d",num,num1);
    // add();
    sub(num,num1);
   int mux = mul(num,num1);
   printf("Mul of number is :- %d",mux);
}
void sub(int a,int b){

    printf("%d",a+b);
}
int mul(int a,int b){
    return a+b;
}