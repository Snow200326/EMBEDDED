#include<stdio.h>
int main(){
    int n;
    int e=0,o=0;
    printf("Enter the size of array :-");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elem of arr :- \n");
    for(int i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            e++;
        }
        else
        {
            o++;
        }
    }
    printf("Total No of Enven is %d\n",e);
    printf("Total No of Enven is %d ",o);
}