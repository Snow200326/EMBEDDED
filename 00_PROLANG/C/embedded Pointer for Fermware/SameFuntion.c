#include<stdio.h>
int add(int a,int b){return a+b;}
int sub(int a,int b){return a-b;}
int Div(int a,int b){return a/b;}
int mul(int a,int b){return a*b;}
int calculate(int a,int b , int(*operation)(int,int))
int main(){
    int a,b,result;
    result= calculate(10,20,add);
    
    
}