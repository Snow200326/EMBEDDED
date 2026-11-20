#include<iostream>
using namespace std;
class Value{
    public:
        double x;
};
class Square : public Value{
    public:
        double Area(){
            return x*x;
        }
};
int main()
{
    Square s1;
    s1.x=12.343434;
    cout<<"Area of square "<<s1.Area();
}