#include <stdio.h>
int main()
{
    int age;
    char gen, mar;
    printf("Are u Married (Y/N):- ");
    scanf(" %c", &mar);
    switch (mar == 'Y')
    {
    case 1:
        printf("Driver is insured...");
        break;
    case 0:
        printf("Enter your Gen (M/F):- ");
        scanf(" %c", &gen);
        switch (gen == 'M')
        {
        case 1:
            printf("Enter your age:- ");
            scanf("%d", &age);
            switch (age > 30)
            {
            case 1:
                printf("\nDriver is insured...");
                break;
            case 0:
                printf("\nDriver is not insured..");
                break;
            }
            break;
        case 0:
            printf("Enter your age:- ");
            scanf("%d", &age);
            switch (age > 25)
            {
            case 1:
                printf("\nDriver is insured...");
                break;
            case 0:
                printf("\nDriver is not insured.....");
                break;
            }
            break;
        }
        break;
    }
}