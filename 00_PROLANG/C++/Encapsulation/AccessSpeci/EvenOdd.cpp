#include <iostream>
using namespace std;
class EvenOdd
{
private:
    int a;
public:
    int EvenOddd(int x);
};
int EvenOdd ::EvenOddd(int x)
{
    a = x;
    if (a % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    EvenOdd num1;
    int n;
    cout << "Enter the number to check:- " << endl;
    cin >> n;
    int ans = num1.EvenOddd(n);
    (ans == 1) ? cout << "Even" : cout << "Odd";
}