#include<stdio.h>
int main(){
    char c;
    printf("Enter your char :-\n");
    scanf("%c",&c);
    int n = c;
    if(n>=65 && n<= 89)
    {
        printf("Upper case");
    }
    else if ( n>=90 && n<97)
    {
        printf("Symboll");        /* code */
    }
    else if (n>97)
    {
        printf("Lowercase");
    }
    else
    {
        printf("Number");
    }
}