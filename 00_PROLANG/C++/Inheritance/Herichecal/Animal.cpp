#include<iostream>
using namespace std;
class Animal{
    public:
        void pet(){
            cout<<"The Animal Category is :- "<<endl;
        }
};
class Cat :  public Animal {
    public:
        void bread(){
            cout<<"The Cat Bread is : Persian"<<endl;
        }
};
class Dog :  public Animal {
    public:
        void type(){
            cout<<"The Dog Type is : Pomarian"<<endl;
        }
};


int main(){
    Cat c1;
    Dog d1;
    c1.pet();
    c1.bread();
    d1.pet();
    d1.type();
    return 0
    ;
}