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
    cout<<"Enter the name of student ;- "<<endl;
    cin>>s1.name;
    cout<<"Enter the roll of student ;- "<<endl;
    cin>>s1.roll;
    cout<<"Enter the per of student ;- "<<endl;
    cin>>s1.per;
    cout<<"Students Details is :- "<<endl;
    cout<<"Student name :- "<<s1.name<<endl;
    cout<<"Students roll no :- "<<s1.roll<<endl;
    cout<<"Student Per :- "<<s1.per;

}