#include <stdio.h>
int main()
{
    char str[10];
    char str2[10];
    int flag = 0;
    printf("Enter the String :- ");
    scanf("%s", &str);
    printf("The String is :- ");
    puts(str);
    int leng = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        leng++;
    }

    for (int i = 0, j = leng - 1; str[i] != '\0' && j >= 0; i++, j--)
    {
        if (str[i] == str[j])
        {
            flag++;
        }
        else
        {
            flag--;
            break;
        }
    }
    if (flag > 0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
