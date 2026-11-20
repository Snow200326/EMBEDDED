#include<iostream>
using namespace std;
class Demo{
    public:
        void funcc(){
            cout<<"Inside class method ....."<<endl;
        }
        void func2();
};
void Demo :: func2(){
    cout<<"These is outside class method ..."<<endl;
}
int main(){
    Demo s1;
    s1.funcc();
    s1.func2();

}