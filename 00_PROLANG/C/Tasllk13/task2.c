#include <stdio.h>
int main()
{
     int  num;
    printf("Enter number:-\n");
    scanf("%d", &num);
    switch (num >= 0)
    {
    case 1:
        printf("Number %d is positive ", num);
        break;
    case 0:
        printf("Number %d is negative ", num);
        break;
    default:
        printf("plz do something..");
        break;
    }
}