#include<stdio.h>
int main(){
    int side;
    int area;
    printf("Enter the side of Square:-\n");
    scanf("%d",&side);
    area = side*side;
    printf("Area of Square of side %d is :- %d",side,area);
}