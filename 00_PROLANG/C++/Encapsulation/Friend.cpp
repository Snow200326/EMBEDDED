#include<iostream>
using namespace std;

class Employee{
    private:
        int salary;
    public:
        Employee(int x){
            salary=x;
        }
        friend void Display(Employee obj);
};

  void Display(Employee obj){

    cout<<"Your Salary :- "<<obj.salary<<endl;
}
int main(){
    Employee s1(9000000);
    Display(s1);
}