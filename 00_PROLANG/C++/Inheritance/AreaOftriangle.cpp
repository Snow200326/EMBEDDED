#include <iostream>
using namespace std;
class TriLength
{
private:
    int length;
public:
    void SetValuelength(int l)
    {
        length = l;
     
    }
    int getValueLength()
    {
       return length;
     
    }
};
class TriBreadth : public TriLength
{
private:
    int breadth;

public:
    void SetValue(int b)
    {
        breadth = b;
    }

    int Area(){
        return getValueLength()*breadth;
    }
};
int main()
{
    TriBreadth t1;
    t1.SetValuelength(10);
    t1.SetValue(22);
    cout<<"Area of rectangle"<<t1.Area();
}