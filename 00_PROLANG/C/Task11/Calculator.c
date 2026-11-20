#include<stdio.h>
void main(){
    int n,m;
    char c;
    printf("Enter the numbers:-\n");
    scanf("%d %d",&n,&m);
    printf("Enter the operation u man to perform:-\n");
    scanf(" %c",&c);
    if(c=='+'){
        printf("Addition of numbser %d and %d is :- %d",n,m,n+m);
    }
    else if (c=='-')
    {
          printf("Subtraction of numbser %d and %d is :- %d",n,m,n-m);
    }
    else if (c=='*')
    {
          printf("Multiplication of numbser %d and %d is :- %d",n,m,n*m);
    }
    else if (c=='/')
    {
          printf("division of numbser %d and %d is :- %d",n,m,n/m);
    }
    else
    {
        printf("PLZ ENTER PROPER Option....");
    }
    
    
}