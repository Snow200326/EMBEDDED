#include<iostream>
using namespace std;
class parents{
    public:
        int a;
        void Display(){
           std::cout<<"These is the parent class"<<endl;
        }
};
class child : public parents
{
    public:
        int b;
        void Display_b(){
            cout<<"These is the child class...";
        }
};
int main(){
    child s1;
    s1.Display();
    s1.Display_b
    ();
}