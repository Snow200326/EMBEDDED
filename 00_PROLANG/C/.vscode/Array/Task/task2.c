#include <stdio.h>
void Display(int arr[], int);
int DeleteElement(int arr[], int, int);
int main()
{
    int n;
    printf("Enter the size of the array:- ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the element of array:- ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    Display(arr, n);
    int pos;
    printf("Enter the elment pos to delete :-");
    scanf("%d", &pos);
    DeleteElement(arr, pos, n);
}
void Display(int arr[], int n)
{
    printf("The element of array :-");
    for (int j = 0; j < n; j++)
    {
        printf("%d\n", arr[j]);
    }
}
int DeleteElement(int arr[], int pos, int n)
{
    if (pos < n)
    {
        for (int j = pos; j < n; j++)
        {
            arr[j]=arr[j+1];
        }
    }
    else
    {
        printf("Invalid position");
    }
    Display(arr,n);
}