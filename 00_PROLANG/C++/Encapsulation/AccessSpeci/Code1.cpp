#include<iostream>
using namespace std;
class Addition{
    private :
        int x;
        int y;
    
    public:
        void add(int a, int b){
            x=a;
            y=b;
            cout<<x+y;
        }

};
 int main(){
    Addition a1;
    a1.add(4,5);
 }