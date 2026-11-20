#include <stdio.h>
int main()
{
    int l_pass = 2654, A_pass = 2554;
    int u_pass, u_a_pass;
    printf("Enter your Password:-\n");
    scanf("%d", &u_pass);
    if (l_pass == u_pass)
    {
        printf("Phone is unLocked");
        printf("\nEnter App password:-\n");
        scanf("%d", &u_a_pass);
        if (u_a_pass == A_pass)
        {
            printf("Open");
        }
        else
        {
            printf("Wrong Pass");
        }
    }
    else
    {
        printf("Wrong Pass");
    }
}