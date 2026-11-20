#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter the size of the array :- ");
    scanf("%d %d", &r, &c);
    int arr[r][c];
    int sum = 0;

    printf("Enter the element of  arrays :-\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Elemnt of the 1st array are :-\n");
    for (int l = 0; l < r; l++)
    {
        for (int k = 0; k < c; k++)
        {
            printf("%d\t", arr[l][k]);
        }
        printf("\n");
    }
    printf("The element of matrix are :- \n");
    for (int l = 0; l < r; l++)
    {
        for (int k = 0; k < c; k++)
        {
            printf("%d\t", arr[l][k]);
        }
        printf("\n");
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == j)
            {
                sum = sum + arr[i][j];
            }
        }
    }
    printf("Sum of digonal is :- %d", sum);

    return 0;
}
