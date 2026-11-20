#include <iostream>
#include <string>
using namespace std;
class StudentMarks
{
public:
    string name;
    int roll;
     StudentMarks(string s, int r)
    {
       name =s ;
       roll = r;ṇ
    }

    
};
int main()
{
    // StudentMarks s1("Dnyanesh Dahiwadkar" , 10);
    StudentMarks s2;
    cout<<"IN THE MAIN ... "<<endl;
    cout<<"Enter name of Students "<<endl;
    cin>>s2.name;
    cout<<"Enter roll of Students "<<endl;
    cin>>s2.roll;
    cout<<"Name of students is " << s2.name << endl;
    cout<<"roll of students is " << s2.roll;
}
