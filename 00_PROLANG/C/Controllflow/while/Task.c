#include<stdio.h>
int main(){
    int n;
    printf("Enter the numbser :-\n");
    scanf("%d",&n);
    int i=1;
    int flag=0;
    while (i<n)
    {
        if(n%i==0){
           flag=0;
        }
        else
        {
            flag=1;
        }
        i++;
    }
    if(flag==1){
        printf("no is prime");
    }
    else
    {
         printf("no not is prime");
    }
    
}