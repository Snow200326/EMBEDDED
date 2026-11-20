#include<stdio.h>
int main(){
    int num;
    printf("Enter the value :- ");
    scanf("%d",&num);
    for (int i = 1; i <=num; i++)
    {
        for ( int s = 1; s<=i-1; s++)
        {
           printf(" ");
        }
        
        for (int j =1 ; j <=num; j++)
        {
           printf("*");
        }
        printf("\n");   
    }
}