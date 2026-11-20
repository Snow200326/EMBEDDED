#include<stdio.h>
int main(){
    int num;
    printf("Enter your numbser :-");
    scanf("%d",&num);
    int sum=0;
    int j=1;
    int c=0;
    for(int i=0;i<=num;i++){
        printf("%d\n",sum);
        c=j;
        j=sum;
        sum=j+c;
    }
    printf("%d",sum);
}