#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the number " << endl;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a>b && a>c)
    {
        cout<<" LARGEST NO IS :- "<<a;
    }
    else if(b>a && b>c)
    {
        cout<<"Largest no is :- "<<b;
    }
    else{
        cout<<"Largest no is :- "<<c;
    }

}