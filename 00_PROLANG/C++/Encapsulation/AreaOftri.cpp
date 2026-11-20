#include<iostream>
using namespace std;
class Triangle{
    private:
        int length,breadth;
        float area;
    public:
        void setVal(int l, int b){
            length = l;
            breadth = b;
        }

        void getLength(){
            cout<<"The length of Triangle is :- "<< length <<endl;

        }
        void getBreadth(){
            cout<<"The breadth of Triangle is :- "<< breadth <<endl;

        }
        float AreaOftriangle(){
            area = 0.5*length*breadth;
            return area;
        }

};
int main(){
    Triangle t1;
    t1.setVal(4,5);
    t1.getLength();
    t1.getBreadth();
    float area = t1.AreaOftriangle();
    cout<<"Area of Triangle is :- "<<area<<"sq.m";

    return 0;
}