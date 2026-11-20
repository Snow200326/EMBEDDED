#include <stdio.h>
int main()
{
    char c;
    printf("Enter your cahr:-\n");
    scanf(" %c", &c);
    switch (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
    {
    case 1:
        /* code */
        printf("Alphabet..");
        break;
    case 0:
        switch (c >= '0' && c <= '9')
        {
        case 1:
            /* code */
            printf("Digit");
            break;
        case 0:
            printf("Special Symbol..");
            break;

        default:
            break;
        }
    default:
        break;
    }
}