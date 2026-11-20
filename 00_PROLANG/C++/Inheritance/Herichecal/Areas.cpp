#include<iostream>
using namespace std;
class Param {
    protected:
        double len,bre;
    public:
        void setValue(double x, double y){
            len=x;
            bre=y;
        }
        double getValueLen(){
            return len;
        }
        double getValuebre(){
            return bre;
        }
};
class Rect : public Param{
    public:
        double Area(){
           return getValueLen()*getValuebre();
        }
};
class Tri : public Param{
    public:
        double Area(){
            return (0.5 * getValueLen()*getValuebre());
        }
};
int main(){
    Rect s1;
    int x,y;
    cout<<"Enter the value of leng and bre :- "<<endl;
    cin>>x>>y;
    s1.setValue(x,y);
    cout<<"Area of the rect :- "<<s1.Area()<<endl;
    Tri T1;
    cout<<"Enter the value of leng and bre of tria :- "<<endl;
    cin>>x>>y;
    T1.setValue(x,y);
    cout<<"Area of the tri :- "<<T1.Area()<<endl;
}