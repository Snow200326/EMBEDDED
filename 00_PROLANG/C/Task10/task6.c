#include<stdio.h>
int main(){
    int x;
    printf("Enter the number :-\n");
    scanf("%d",&x);
    int square = x*x;
    int cube=square*x;
    printf("Square of number is :- %d\n",square);
    printf("Cube of number is :- %d",cube);

}