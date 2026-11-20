#include<stdio.h>
int main(){
    char name[10];
    char name2[10];
   int flag=0;
    int length=0;
    printf("Enter the string :- ");
    gets(name);
    printf("Enter the string :- ");
    gets(name);
    for (int i = 0;name[i]!='\0'; i++)
    {
        
        length++;
    }  
    for (int i = 0;name[i]!='\0'; i++)
    {
      if (name[i]!=name2[i])
      {
        flag=1;
      }
         
    }
    printf("%d",flag);
    if(flag){
        printf("Not Equal");
    }else
    {
        printf("Equal");
    }

}