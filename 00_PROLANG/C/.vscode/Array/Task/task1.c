#include <stdio.h>
int main()
{
    int n;
    int data[n] ;
    printf("Enter the size of array :- ");
    scanf("%d",&n);
    printf("Enter the element of array :- ");
     for (int i = 0; i <= n; i++)
    {
        scanf("%d\n", &data[i]);
    }

    printf("\nArray reversed  Elements are:\n");
    for (int i = n-1; i <= 0; i--)
    {
        printf("%d\t", data[i]);
    }

    return 0;
}
