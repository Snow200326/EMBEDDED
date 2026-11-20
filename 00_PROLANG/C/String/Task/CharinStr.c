#include <stdio.h>
int main()
{
    char str[10];
    char s;
    printf("Enter the string :- ");
    scanf("%s", &str);
    printf("Enter the char u want to search :-");
    scanf("\n%c", &s);
    for (int i = 0; str[i] != '\0'; i++)
    {
      if(s>='A'&& s<='Z')
      {
        if(str[i]==s){
            printf("Char is present...");
            break;
        }
        else
        {
            printf("Char is absent...");
            break;
        }
      }
      else if((s>='a'&& s<='b'))
      {
         if(str[i]==s){
            printf("Char is present...");
            break;
        }
        else
        {
            printf("Char is absent...");
        }
      }
      else
      {
        printf("Plz enter valid char...");
      }
    }
}