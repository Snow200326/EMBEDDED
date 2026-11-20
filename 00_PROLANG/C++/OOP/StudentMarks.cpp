#include <iostream>
#include <string>
using namespace std;
class StudentMarks
{
public:
    string name;
    int roll;
    int sub1, sub2, sub3, sub4;
    int total;
    float per;
    string Grade;

    void StudentsDetail()
    {
        cout << "Enter your name " << endl;
        cin >> name;
        cout << "Enter your roll no :- " << endl;
        cin >> roll;

        cout << "Enter marks of sub 1" << endl;
        cin >> sub1;
        cout << "Enter marks of sub 2" << endl;
        cin >> sub2;
        cout << "Enter marks of sub 3" << endl;
        cin >> sub3;
        cout << "Enter marks of sub 4" << endl;
        cin >> sub4;
    }

    void TotalMarks()
    {
        total = sub1 + sub2 + sub3 + sub4;
    }

    void PerOfStud()
    {
        per = (total / 400) * 100;
    }
    char GradeOfstudent()
    {
        TotalMarks();
        PerOfStud();
        cout<< per;
        if (100 >= per || per > 90)
        {
            Grade = "A";
        }
        else if (90 >= per || per > 80)
        {
            Grade = "B";
        }
        else if (80 >= per || per > 70)
        {
            Grade = "C";
        }
        else
        {
            Grade = "your are fail";
        }
    }
    void Display()
    {
        cout << " Hi " << name << endl;
        cout << " your roll no is :- " << roll << endl;
        cout << "Your total marks " << total << " out of 400 " << endl;
        cout << "Your Grade is " << Grade << endl;
    }
};
int main()
{
    StudentMarks s1;
    s1.StudentsDetail();
    s1.GradeOfstudent();
    s1.Display();
}
