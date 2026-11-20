#include <stdio.h>

int main() {
    int age;
    char ch;
    printf("Enter your age:- \n");
    scanf("%d", &age);
    printf("Do you have the voting card yes(y) or no(n) :- ");
    scanf(" %c", &ch);   
    (age >= 18 && ch == 'y') ? 
        printf("You are able to vote\n") : 
        printf("You are not able to vote\n");

    return 0;
}
