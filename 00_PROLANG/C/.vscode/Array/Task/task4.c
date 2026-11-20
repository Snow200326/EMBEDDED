#include <stdio.h>
void Display(int arr[], int n);
int maxAndmin(int arr[],int n);

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
    // Display(arr,n);
    maxAndmin(arr,n);
}
void Display(int arr[], int n)
{
    printf("The element of array :-");
    for (int j = 0; j < n; j++)
    {
        printf("%d\n", arr[j]);
    }
}
int maxAndmin(int arr[],int n){
    int max;
    int min;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(arr[i]<arr[j]){
                max=arr[j];
            }
        }
         for (int j = 0; j < n; j++)
        {
            if(min>arr[j]){
                min=arr[j];
            }
        }
        
    }
    printf("%d",max);
    printf("%d",min);
    
}