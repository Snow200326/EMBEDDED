#include<iostream>
using namespace std;
class CarDetails{
    public:
        string car_brand;
        string car_model;
        int year;

        CarDetails(string brand , string model, int y)
        {
            car_brand = brand;
            car_model = model;
            year = y;
        }
};
int main(){
    CarDetails c1("BMW","M3",2023);
    CarDetails c2("BMW","M5",2026);

    cout<<"first Car Details :- "<<endl;
    cout<<"Car Brand :- "<<c1.car_brand<<endl;
    cout<<"Car Model :- "<<c1.car_model<<endl;
    cout<<"Car year :- "<<c1.year<<endl;

    cout<<"Second Car Details :- "<<endl;
    cout<<"Car Brand :- "<<c2.car_brand<<endl;
    cout<<"Car Model :- "<<c2.car_model<<endl;
    cout<<"Car year :- "<<c2.year<<endl;

}