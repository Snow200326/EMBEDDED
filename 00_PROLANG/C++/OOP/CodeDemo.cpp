#include<iostream>
using namespace std;
class Demo{
    public:
        int a;
        char x;
        float f;

};
int main(){
    Demo d1;
    cout<<"Enter the integer :- "<<endl;
    cin>>d1.a;
    cout<<"Enter the float :- "<<endl;
    cin>>d1.f;
    cout<<"Enter the char :- "<<endl;
    cin>>d1.x;

    cout<<"The integer is :- "<<d1.a <<endl;
    cout<<"The float is :- "<<d1.f <<endl;
    cout<<"The char is :- " << d1.x;

}