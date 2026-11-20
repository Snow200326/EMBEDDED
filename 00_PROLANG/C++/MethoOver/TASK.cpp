#include<iostream>
using namespace std;
int operation(int a, int b){
    return a + b;
}
double operation(double a , double b){
    return a/b;
}
int main(){
    int num,num1;
    cout<<"Enter the number :- "<<endl;
    cin>>num;
    cin>>num1;

    double a,b;
    cout<<"Enter the number (dividend first) :- "<<endl;
    cin>>a;
    cin>>b;
    int add = operation(num,num1);
    int div= operation(a,b);
    cout<<"Addition of int is :- "<<add<<endl;
    cout<<"Division of double is :- "<<div<<endl;
}