#include <stdio.h>
int main()
{
    int day;
    int x =5;
    if(x=0)
    {
        printf("E");
    }
    else
    {
        printf("8");
    }
    printf("Enter your Day:-\n");
   
    switch ( scanf("%d", &day))
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thrusday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;

    default:
        printf("Select the proper day...");
        break;
    }
}