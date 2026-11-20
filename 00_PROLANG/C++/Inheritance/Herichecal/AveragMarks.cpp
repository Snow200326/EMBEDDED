#include <iostream>
#include <string>
using namespace std;
class Students
{
protected:
    int roll;
    string name;
    int marks[5];

public:
    void setVal(int r, string n, int m[])
    {
        roll = r;
        name = n;
        for (int i = 0; i < 5; i++)
        {
            marks[i] = m[i];
        }
    }
    int getValRoll()
    {
        return roll;
    }
    string getvalStr()
    {
        return name;
    }

    int *getvaluOfmarks()
    {
        return marks;
    }
};
class Sports
{
protected:
    int sport_marks;

public:
    void setValOfSports(int s)
    {
        sport_marks = s;
    }
    int getValofSports()
    {
        return sport_marks;
    }
};
class Result : public Students, public Sports
{
private:
    int total = 0;
    double avg;

public:
    void Totalmarks()
    {
        int *a = getvaluOfmarks();
        for (int i = 0; i < 5; i++)
        {
            total += *(a + i);
            cout << total << endl;
        }
        total += sport_marks;
    }
    void Average()
    {
        avg = total / 6;
    }
    void ResultOfStudents()
    {
        cout << "The Students Detais are :- " << endl;
        cout << "The Total Marks of Students :- " << total << endl;
        cout << "The Average Mark of studetns is :-" << avg << endl;
    }
};
int main()
{

    Result r1;
    int arr[5];
    int roll, s_m;
    string name;
    cout << "Enter the Roll no of students :- " << endl;
    cin >> roll;
    cout << "Enter the name of students :-  " << endl;
    cin >> name;
    cout << "Enter the subject marks :- " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the marks obtained in sports :- " << endl;
    cin >> s_m;
    r1.setVal(roll, name, arr);
    r1.setValOfSports(s_m);
    r1.Totalmarks();
    r1.Average();
    r1.ResultOfStudents();
    return 0;
}