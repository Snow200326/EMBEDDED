#include<stdio.h>
int main(){
    int x;
    printf("Enter the value of x:-\n");
    scanf("%d",&x);
    int i;
    printf("Even no in range of 1-%d are :-",x);
    for(i=1 ;i<=x;i++){
        if(i%2==0){
            printf(" %d\t",i);
        }
    }
}