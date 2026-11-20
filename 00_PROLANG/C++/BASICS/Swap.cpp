#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the first number :- " << endl;
    cin >> a;
    cout << "Enter the second number :- " << endl;
    cin >> b;

    cout << "Number befor sweep :- " << endl;
    cout << "Value of a is " << a << endl;
    cout << "Value of b is " << b << endl;

    // swap fuction
    // c = a;
    // a = b;
    // b = c;

    // without third variable

    a= a+b;
    b=a-b;
    a=a-b;

    cout << "Number after sweep :- " << endl;
    cout << "Value of a is " << a << endl;
    cout << "Value of b is " << b << endl;
}