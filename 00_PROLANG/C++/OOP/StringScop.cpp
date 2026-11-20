#include <iostream>
#include <string>
using namespace std;
class Demo
{
public:
    char a;
    string b;

    void GetValu()
    {
        cout << "Enter the String :- " << endl;
        cin >> b;
        cout << "Enter the char :- " << endl;
        cin >> a;
    }
};

int main()
{
    Demo d1;
    d1.GetValu();

    cout << "The String is :- " << d1.b << endl;
    cout << "The char is :- " << d1.a << endl;
}