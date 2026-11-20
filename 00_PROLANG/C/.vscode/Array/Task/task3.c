#include <stdio.h>
void Display(int arr[], int n);
void Dublicate(int[], int);

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
    // Display(arr, n);
    Dublicate(arr, n);
}
void Display(int arr[], int n)
{
    printf("The element of array :-");
    for (int j = 0; j < n; j++)
    {
        printf("%d\n", arr[j]);
    }
}
void Dublicate(int arr[], int n)
{

    for (int i = 0; i<=n; i++)
    {
        for (int j = i + 1; j<=n; j++)
        {
            if (arr[i] == arr[j])
            {
                arr[j] = arr[j+1];
            }
       
            
            
        }
    }
     printf("The element of array :-\n");
    for (int j = 0; j < n; j++)
    {
        printf("%d\n", arr[j]);
    }
}
