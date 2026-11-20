#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter the size of the array :- ");
    scanf("%d %d", &r, &c);
    int arr[r][c];
    int arr2[r][c];
    int sum[r][c];
    printf("Enter the element of 1st arrays :-\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Enter the element of 2nd arrays :-\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr2[i][j]);
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
    printf("Elemnt of the 2nd array are :-\n");
    for (int l = 0; l < r; l++)
    {
        for (int k = 0; k < c; k++)
        {
            printf("%d\t", arr2[l][k]);
        }
        printf("\n");
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum[i][j] = arr[i][j] + arr2[i][j];
        }
    }
    printf("The Sum of matrix are :- \n");
    for (int l = 0; l < r; l++)
    {
        for (int k = 0; k < c; k++)
        {
            printf("%d\t", sum[l][k]);
        }
        printf("\n");
    }
    return 0;
}
