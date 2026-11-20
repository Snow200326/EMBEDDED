#include<iostream>
using namespace std;
class Employee{
    private:
        int salary;
    public:
        void setSal(){
            salary = 10;
            cout<<"Salary is :- "<<salary;
        }
        void getSal(){
            cout<<"Salary is :- "<<salary;
        }

};
int main(){
    Employee s1;
    s1.setSal();
    s1.getSal();
}