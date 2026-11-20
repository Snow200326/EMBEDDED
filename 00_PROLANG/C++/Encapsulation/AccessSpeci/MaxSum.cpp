#include <iostream>
using namespace std;
class MaxSum
{
private:
    int a, b;

public:
    void MaxNumber(int x, int y);
};
void MaxSum ::MaxNumber(int x, int y)
{
    a = x;
    b = y;
    (a > b) ? cout << "a is greater" : cout << "b is greater";
}

int main()
{
    MaxSum m1;
    m1.MaxNumber(1, 2);
}