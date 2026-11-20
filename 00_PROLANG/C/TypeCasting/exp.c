#include<stdio.h>
int main(){

    //1.convert float to int ;
    float val = 3.3;
    int res = (int)val;
    printf("%d\n",res);

    //2.convert int to char ;
    int a = 65;
    int ch = (char)a;
    printf("%d\n",a);

    //3.Convert double to int;
    double ax= 97897.22;
    int b = (int)ax;
    printf("%d\n",b);

    //4. convert int to double
    int x =40 , y =9;
    double div;
    div = (double)x/y;
    printf("%.10f",div);

}