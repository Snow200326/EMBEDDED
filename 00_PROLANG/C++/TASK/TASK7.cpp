#include <iostream>
using namespace std;
#define pie 3.142
int ParametesOfCircle(int);
int main()
{
    int r;
    cout << "Enter the Radius of circle" << endl;
    cin >> r;
    ParametesOfCircle(r);
}
int ParametesOfCircle(int a)
{
    int diameter, area, circum;
    cout << "The Diameter of circle is " << 2 * a << endl;
    cout << "The Area of Circle is " << a * a << endl;
    cout << "The Cricumference of Circle is " << 2 * pie * a << endl;
    return 0;
}