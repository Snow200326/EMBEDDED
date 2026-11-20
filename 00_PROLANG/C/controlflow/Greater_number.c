#include<stdio.h>
int main(){
    int n,m;
    printf("Enter the Number :- \n");
    scanf("%d %d",&n,&m);
    if(n>m){
        printf("Greater number is %d\n",n);
        printf("Smaller number is %d",m);
    }
    else
    {
        printf("Greater number is %d\n",m);
        printf("Smaller number is %d",n);
    }
}