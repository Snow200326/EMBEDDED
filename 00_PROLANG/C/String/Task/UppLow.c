#include <stdio.h>
int main()
{
    char str[10];
    printf("Enter the String :- ");
    scanf("%s", &str);
    printf("The String is :- ");
    puts(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 65 && str[i] <= 91)
        {
            str[i] = str[i] + 32;
        }
        else
        {
            str[i] = str[i];
        }
    }
    printf("The lowecase of str is :- ");
    puts(str);
}