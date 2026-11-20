#include <stdio.h>
int main()
{
    char str[10];
    int alp = 0;
    int sym = 0;
    int dig = 0;
    printf("Enter the string :- ");
    scanf("%s", &str);
    for (int i = 0; str[i] != '\0'; i++)
    {

        if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z')
        {

            alp++;
        }
        else if (str[i] >= '1' && str[i] <= '9')
        {
            dig++;
        }
        else
        {
            sym++;
        }
    }
    printf("Total no digit = %d\n", dig);
    printf("Total no Sym   = %d\n", sym);
    printf("Total no alph  = %d", alp);
}