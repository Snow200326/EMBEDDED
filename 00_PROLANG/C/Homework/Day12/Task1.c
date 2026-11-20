#include <stdio.h>
int main()
{
    int num1, num2;
    char opr;
    printf("Enter your number:-\n");
    scanf("%d\n", &num1);
    scanf("%d", &num2);
    printf("Enter the operation u want to perform:-\n");
    scanf(" %c", &opr);
    switch (opr)
    {
    case '+':
        printf("Add of numbers are :- %d", num1 + num2);
        break;
    case '-':
        printf("Sub of numbers are :- %d", num1 - num2);
        break;
    case '*':
        printf("Mult of numbers are :- %d", num1 * num2);
        break;
    case '/':
        printf("Div of numbers are :- %d", num1 / num2);
        break;

    default:
        printf("Select the proper oper.....");
        break;
    }
}