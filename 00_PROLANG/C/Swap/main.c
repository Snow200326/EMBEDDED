#include<stdio.h>

int main(){
    int n=1;
    int m=3;
     printf("Value of n is %d and m is %d\n",n,m);
    // int temp;
    // n=n+m;
    // m=n-m;
    // n=n-m;
    // n=n+m-(m=n);//// extra way to solve swap
    n=n^m;
    m=n^m;
    n=n^m;
    printf("Value after swap  of n is %d and m is %d",n,m);
}