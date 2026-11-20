#include<stdio.h>
int main(){
    char name[10];
    char name2[10];
    int cont[20];
    int length=0;
    printf("Enter the string :- ");
    gets(name);
    printf("Enter the string :- ");
    gets(name);
    for (int i = 0;name[i]!='\0'; i++)
    {
        
        length++;
    }  
    for (int i = 0;i<=length; i++)
    {
       cont[i]=name[i];
        
    }
     for (int i = 0;i<=length; i++)
    {
       cont[i]=name2[i];
        
    }
    printf("copied String  is = ");
    puts(name2);

}