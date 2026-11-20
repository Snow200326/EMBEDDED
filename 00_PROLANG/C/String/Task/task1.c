#include<stdio.h>
int main(){
    char name[10];
    char name2[10];
    int length=0;
    printf("Enter the string :- ");
    gets(name);
    printf("Original String  is = ");
    puts(name);
    for (int i = 0;name[i]!='\0'; i++)
    {
       
        length++;
    }  
    for (int i = 0;i<=length; i++)
    {
        
        name2[i]=name[i];
    }
    printf("copied String  is = ");
    puts(name2);

}