#include<stdio.h>
#include<math.h>
int main(){
    int m,r;
    int sum=0;
    printf("Enter the number :- ");
    scanf("%d",&m);
    int digit=log10(m)+1;
    int temp=m;
    while (m!=0)
    {
        r=m%10;
        sum = sum+pow(r,digit);
        m=m/10;
    }
    if(sum == temp)
    {
        printf("Number is Ampstrong...");
    }
    else
    {
        printf("Number is not Amstrong...");
    }
    
}