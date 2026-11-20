#include<iostream> 
using namespace std;
class Multipli{
    private:
        int num1;
    protected:
        int num2;

    public:
    
        Multipli(int x,int y){
            num1=x;
            num2=y;
        }
      
        friend void Multiplication(Multipli obj);
};
void Multiplication(Multipli obj){

    cout<<"Multiplication of private and protected are :- "<<obj.num1*obj.num2;
}
int main(){
    Multipli s1(20,30);
    Multiplication(s1);
    
}