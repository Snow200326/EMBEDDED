#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number :- ");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
    {
        for (int s = 1; s <= num - i; s++)
        {
            printf(" ");
        }

        for (int j = 1; j <=(i*2)-1; j++)
        {
            if ((i>=2 && i<num ) && (j>=2 && j<(i*2)-1))
            {
               printf(" ");
                
            }
            else
            {

                printf("*");
            }
        }
        printf("\n");
    }
}