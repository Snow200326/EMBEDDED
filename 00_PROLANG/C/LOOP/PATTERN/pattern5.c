#include<stdio.h>
int main(){

    for(int i=1;i<=5;i++)
    {
        for (int  s = 1; s<6-i; s++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <=(i*2)-1; j++)
        {
            printf("*");
        }
        //   for (int k = 1; k <=i-1; k++)
        // {
        //     printf("*");
        // }
        printf("\n");
    }
}