#include<iostream>
using namespace std;
int Operation(int ,int);
double Operation(double,double);
int main(){
    int num,num1;
    cout<<"Enter the number"<<endl;
    cin>>num;
    cout<<"Enter the number"<<endl;
    cin>>num1;
    int add = Operation(num,num1);
    double num2,num3;
    cout<<"Enter the dividend"<<endl;
    cin>>num2;
    cout<<"Enter the divisor"<<endl;
    cin>>num3;
    double div = Operation(num2,num3);
    cout<<"The addition of int " << num << " and "<< num1 << " is :- "<<add<<endl;
    cout<<"The division of double " << num2 << " and "<< num3 << " is :- "<<div<<endl;

}
int Operation(int a ,int b ){
    return a+b;
}
double Operation(double a ,double b){
    return a/b;
}