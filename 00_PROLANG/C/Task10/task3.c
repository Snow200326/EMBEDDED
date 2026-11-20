#include<stdio.h>
int main(){
    char c;
    printf("Enter your Char :-\n");
    scanf("%c",&c);
    int n=c;
    if(n>=97 && n<=112){
      n-=32;
      c=n;
      printf("%c",c);
    }
    else
    {
        printf("Enter the Suitable Char");
    }
    
}