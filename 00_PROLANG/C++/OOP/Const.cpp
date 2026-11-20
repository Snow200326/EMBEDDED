#include<iostream>
using namespace std;
class Demo{
    public:
        Demo(){
            cout<<"These is the Inside Constructor...."<<endl;
        }
        Demo( int x );
};
Demo :: Demo(int x ){
    cout<<"These is outside const ....."<<x<<endl;
}
int main(){
    Demo s1(20);
}