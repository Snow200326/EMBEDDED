#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array :- ");
    scanf("%d",&n);
    int arr[n],arr1[n];
    printf("Enter the elme of array :- ");
    for(int i = 0 ;i<n;i++){
        scanf("%d",&arr[i]);
    }
      for(int i = 0 ;i<n;i++){
        arr1[i]=arr[i];
    }
    printf("The elem of 1st array is :- ");
      for(int i = 0 ;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    printf("The elem of 2nd array is :- ");
      for(int i = 0 ;i<n;i++){
        printf("%d\t",arr1[i]);
    }

}