#include <stdio.h>
int main()
{
    char str[10];
    int v=0;
    int c=0;
    printf("Enter the string :- ");
    scanf("%s", &str);
    for (int i = 0; str[i] != '\0'; i++)
    {
      if (str[i] == 'a' || str[i]== 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
      {
        v++;
      }
      else
      {
        c++;
      } 
    }
    printf("Total no vowe    = %d\n", v);
    printf("Total no conso   = %d\n", c);
}