#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter something to check :-"<<endl;
    cin>>ch;
    if(ch>='A' && ch <= 'Z' || ch>='a' && ch<='z'){
        cout<<"Alphabet"<<endl;
    }
    else if(ch>='1' && ch <='9'){
        cout<<"Number"<<endl;
    }
    else
    {
        cout<<"SYmbol"<<endl;
    }
}
