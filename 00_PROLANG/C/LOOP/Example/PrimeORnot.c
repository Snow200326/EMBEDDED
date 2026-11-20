#include<stdio.h>
int main(){
    int n,i=1,count=0;
    printf("Enter the number :- ");
    scanf("%d",&n);
    if(n==1){
        printf("Number %d is Prime",n);
    }
    else
    {
        while (i<=n)
        {
            if(n%i==0){
                count++;
            }
            i++;
        }   
    }
    if(count==2){
         printf("Number %d is Prime",n);
    }
    else
    {
         printf("Number %d is not Prime",n);
    }
}