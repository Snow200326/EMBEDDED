#include <iostream>
using namespace std;
void func();
void func(int);
void func(double);
void func(float);
void func(char);
int main()
{
    func();
    func(1);
    func(2.22);
    func(2.2);
    func('A');
}
void func()
{
    cout << "The value of a is :- 124 "<< endl;
}
void func(double a)
{
    cout << "The value of a is :- " << a << endl;
}
void func(float a)
{
    cout << "The value of a is :- " << a << endl;
}
void func(char a)
{
    cout << "The value of a is :- " << a << endl;
}
void func(int a)
{
    cout << "The value of a is :- " << a << endl;
}