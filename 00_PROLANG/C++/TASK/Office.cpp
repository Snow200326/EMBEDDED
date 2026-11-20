#include <iostream>
using namespace std;
class Employee
{
public:
    int Emp_id;
    string Emp_name;
    float Emp_sal;

    void getDetails()
    {
        cout << "Enter the Emp id :- " << endl;
        cin >> Emp_id;
        cout << "Enter the Emp name :- " << endl;
        cin >> Emp_name;
        cout << "Enter the Emp sal :- " << endl;
        cin >> Emp_sal;
    }
    void Display()
    {
        cout << "Emp Details is -->2 " << endl;
        cout << "Emp id  :- " << Emp_id << endl;
        cout << "Emp name  :- " << Emp_name << endl;
        cout << "Emp sal  :- " << Emp_sal << endl;
    }
};
int main()
{
    Employee s1;
    s1.getDetails();
    s1.Display();
}