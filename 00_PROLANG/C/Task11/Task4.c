#include <stdio.h>
void main()
{
    int year;
    printf("Enter the year:-\n");
    scanf("%d", &year);
    
    if (year == 100 || year == 200 || year == 300)
    {
        printf("Year %d is not the Leap Year..", year);
    }
    else
    {
        if (year>=400 && year%400==0)
        {
            printf("Year %d is Leap year", year);
        }
        else if (year%4==0)
        {
            printf("Year %d is the Leap Year", year);
        }
        
        else
        {
            printf("Year %d is not the Leap Year", year);
        }
    }
}