#include<stdio.h>
int main(){
    int num;
    printf("Enter the value ;- ");
    scanf("%d",&num);
    for (int i = 1; i <=num; i++)
    {
        for (int s=num-i; s>0; s--)
        {
            printf(" ");
        }
        
        for (int j = 1; j<=i; j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    
}