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
    m+=k*k*k;
    n=n/10;
   }
   printf(" Sum of numbser is :- %d\n",m);
   if(j==m)
   {
    printf("Numberi %d is Amstrong",j);
   }
   else
   {
    printf("Number %d is not Amstrong",j);
   }
}