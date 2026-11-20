#include <iostream>
using namespace std;
int fact(int);
int main()
{
    int num;
    int sum = 0;
    cout << "Enter the number" << endl;
    cin >> num;
    sum = fact(num);
    cout << sum;
}
int fact(int num)
{
    if (num == 1 || num == 0)
        return 1;
    else
        return num * fact(num - 1);
}
