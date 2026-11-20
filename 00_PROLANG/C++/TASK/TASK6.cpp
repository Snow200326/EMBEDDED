#include <iostream>
using namespace std;
int isPrime(int);
int main()
{
    int num;
    int sum = 0;
    cout << "Enter the number" << endl;
    cin >> num;
    int flag = isPrime(num);
    if (flag == 1)
    {
        cout << "Prime";
    }
    else
    {
        cout << "not prime";
    }
}
int isPrime(int a)
{
    int i, j;
    int flag = 0;
    for (int i = 2; i <= a; i++)
    {
        if (a % i == 0)
        {
            flag++;
        }
    }
    return flag;
}