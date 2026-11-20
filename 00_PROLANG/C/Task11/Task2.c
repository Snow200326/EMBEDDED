#include<stdio.h>
void main(){
    char c;
    printf("Enter the Char:-\n");
    scanf("%c",&c);
    if(c>='A'&& c<='Z' || c>='a' && c<='z'){
        printf("char is Alphabet");
    }
    else if (c>='0' && c<='9')
    {
        printf("Char is Digit");
    }
    else
    {
        printf("PLZ ENTER PROPER CHAR....");
    }
    
    
}