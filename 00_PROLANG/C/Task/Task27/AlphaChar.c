#include<stdio.h>

int main(){
    char c;
    printf("Enter the Char: ");
    scanf("%c", &c);

    if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    {
        printf("The Char %c is an Alphabet", c);
    }
    else
    {
        printf("The Char %c is not an Alphabet", c);
    }

    return 0;
}
