#include<stdio.h>
void add();
int main(){
    int num=10;
    int num1=20;
    add();
}
void add(){
    int num1=100;
    int num=200;
    int sum = num1+num;
    printf("%d",sum);
}