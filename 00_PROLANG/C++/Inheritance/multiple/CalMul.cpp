#include <iostream>
using namespace std;
class Add
{
private:
    int num1, num2;

public:
    void setNums(int x, int y)
    {
        num1 = x;
        num2 = y;
    }
    int Addition()
    {
        return (num1 + num2);
    }
};
class Sub
{
private:
    int num1, num2;

public:
    void setNums1(int x, int y)
    {
        num1 = x;
        num2 = y;
    }
    int Subtraction()
    {
        return num1 - num2;
    }
};
class Div
{
private:
    int num1, num2;
    public:

    void setNums2(int x, int y)
    {
        num1 = x;
        num2 = y;
    }
    int Division()
    {
        if (num1 > num2)
        {
            return num1 / num2;
        }
        else
        {
            cout << "plz enter dividend first.." << endl;
        }
    }
};
class Mul
{
private:
    int num1, num2;

public:
    void setNums3(int x, int y)
    {
        num1 = x;
        num2 = y;
    }
    int Multiplication()
    {
        return num1 * num2;
    }
};
class Details : public Add, public Mul, public Div, public Sub
{
public:
    void DetOfCal()
    {
        cout << "Addition of nums are :- " << Addition()<<endl;
        cout << "Subtraction of nums are :- " << Subtraction()<<endl;
        cout << "Multiplication of nums are :- " << Multiplication()<<endl;
        cout << "Division of nums are :- " << Division()<<endl;
    }
};
int main()
{
    Details d1;
    d1.setNums(10,5);
    d1.setNums1(10,5);
    d1.setNums2(10,5);
    d1.setNums3(10,5);
    d1.DetOfCal();
    

    return 0;
}