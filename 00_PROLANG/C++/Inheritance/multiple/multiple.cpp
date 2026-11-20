#include<iostream>
using namespace std;
class Cat{
    public:
        void bread(){
            cout<<"The Cat Bread is : Persian"<<endl;
        }
};
class Dog{
    public:
        void type(){
            cout<<"The Dog Type is : Pomarian"<<endl;
        }
};

class Animal : public Cat, public Dog{
    public:
        void pet(){
            cout<<"The Animal Category is :- "<<endl;
        }
};

int main(){
    Animal A1;
    A1.pet();
    A1.bread();
    A1.type();
    return 0
    ;
}