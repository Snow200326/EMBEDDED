#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter CHAR to check :-"<<endl;
    cin>>ch;
    if(ch>='A' && ch <= 'Z' || ch>='a' && ch<='z'){
        if(ch>='a' && ch<='z')
        {
            cout<<"LOWERCASE"<<endl;

        }
        else
        {

            cout<<"UPPERCASE"<<endl;
        }
    }
    else if(ch>='1' && ch <='9'){
        cout<<"Number"<<endl;
    }
    else
    {
        cout<<"Symbol"<<endl;
    }
}
