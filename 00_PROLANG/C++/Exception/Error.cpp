#include<iostream>
using namespace std;
int main(){
    int num,deno;
    float ans;
    cout<<"Enter the deno and numer :- "<<endl;
    cin>>num>>deno;
    try
    {
        if(deno!=0){
            ans= num/deno;
            cout<<"Ans is :- "<<ans<<endl;
        }
        else{
            throw "Divide by 0 error...";
        }
    }
    catch(const char *s)
    {
        cout<<s;
    }
    
}