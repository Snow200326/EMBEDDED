#include <stdio.h>
int main()
{
    int n, i = 1;
    printf("Enter the numbser :- ");
    scanf("%d", &n);
    printf("Even number from 1 to %d are :-\n", n);
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
        i++;
    }
}