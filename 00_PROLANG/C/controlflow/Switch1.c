#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number :-\n");
    scanf("%d", &n);
    switch ( n%2 == 0)
    {
    case 1:
        printf("Numbser is even");
        break;
    case 0:
        printf("Numbser is odd");
        break;
    default:
        break;
    }
}