#include<stdio.h>
int add(int a,int b){
    return a+b;

}
int calculate(int a,int b , int (*operation)(int ,int)){
    return operation(a,b);
}
int main(){
    int a,b,result;
    printf("Enter two number :- ");
    scanf("%d %d", &a , &b);
    result = calculate(a,b,add);
    printf("Addition is %d", result);
}