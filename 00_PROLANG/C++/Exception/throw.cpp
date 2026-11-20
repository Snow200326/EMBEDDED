#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter the age"<<endl;
    cin>>age;
    try{
        if(age>=18){
            cout<<"Access Granted: you are elegible for vote"<<endl;
    
        }
        else
        {
            throw age;
        }
    }
    catch(int x){
        int y  = 18 - x;
        cerr<<"Age is :-" << x <<endl;
        
            cout<<"Access Denied: you are not elegible for vote"<<endl;
            cout<<"you can vote after " << y << " year"<<endl;
    
    }
}