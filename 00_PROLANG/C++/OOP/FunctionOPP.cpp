#include <iostream>
using namespace std;
class Demo
{
public:
    int a;
    char x;
    float f;

    void Display()
    {
        cout << "The integer is :- " << a << endl;
        cout << "The float is :- " << f << endl;
        cout << "The char is :- " << x;
    }
};
int main()
{
    Demo d1;
    cout << "Enter the integer :- " << endl;
    cin >> d1.a;
    cout << "Enter the float :- " << endl;
    cin >> d1.f;
    cout << "Enter the char :- " << endl;
    cin >> d1.x;
    d1.Display();
}