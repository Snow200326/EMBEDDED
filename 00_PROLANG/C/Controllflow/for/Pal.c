#include<stdio.h>
int main(){
    int n,m=0;
    printf("Enter number:-\n");
    scanf("%d",&n);
    int k=0;
    int j=n;
   while (n!=0)
   {
    k=n%10;
    m=(m*10)+k;
    n=n/10;
   }
   printf(" Sum of numbser is :- %d\n",m);
   if(j==m)
   {
    printf("Numberi %d is pailendrome",j);
   }
   else
   {
    printf("Number %d is not pailendrome",j);
   }
}