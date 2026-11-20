#include<stdio.h>
int main(){
    int n,m=0;
    printf("Enter number:-\n");
    scanf("%d",&n);
    int k=0;
   while (n!=0)
   {
    k=n%10;
    m+=k;
    n=n/10;
   }
    printf(" Sum of numbser is :- %d",m);
}