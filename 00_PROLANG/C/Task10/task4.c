#include<stdio.h>
int main(){
    char c;
    int n;
    printf("Enter the char :-\n");
    scanf("%c",&c);
    n=c;
    (n>=49 && n<=57)?printf("Digits"):(n>=65 && n<=90)?printf("UpperCase Alphabeta"):(n>=97 && n<=112)?printf(" LowerCase Alphabet"):printf("Special Symbols");
}