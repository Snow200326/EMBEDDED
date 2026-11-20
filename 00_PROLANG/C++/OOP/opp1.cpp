#include<iostream>
using namespace std;
class Students{
    public:
        int roll;
        string name;
        float per;

};
int main(){
    Students s1;
    s1.roll = 14;
    s1.name="Dnyanesh";
    s1.per = 81.80;

    cout<<"Students Details is :- "<<endl;
    cout<<"Student name :- "<<s1.name<<endl;
    cout<<"Students roll no :- "<<s1.roll<<endl;
    cout<<"Student Per :- "<<s1.per;

}