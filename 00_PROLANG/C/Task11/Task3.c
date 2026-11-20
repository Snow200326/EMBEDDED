#include<stdio.h>
void main(){
    char c;
    printf("Enter the Char:-\n");
    scanf("%c",&c);
    if(c>='A'&& c<='Z' ){
        printf("char is Uppercase");
    }
    else if (c>='a' && c<='z')
    {
        printf("Char is Lowercase");
    }
    else
    {
        printf("PLZ ENTER PROPER CHAR....");
    }
    
    
}