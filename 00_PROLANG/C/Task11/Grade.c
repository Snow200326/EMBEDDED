#include <stdio.h>
int main()
{
    int eng, hindi, mar, math, sci;
    float per;
    float sum;
    printf("Enter your Marks:-\n");
    scanf("%d", &eng);
    scanf("%d", &hindi);
    scanf("%d", &mar);
    scanf("%d", &math);
    scanf("%d", &sci);
    sum = eng + hindi + mar + math + sci;
    per = (sum * 100) / 500;
    printf("Total Marks:- %f ", sum);
    printf("Percentage:- %.2f ", per);
    if (per >= 90)
    {
        printf("Grade A");
    }
    else if (per >= 80 && per <= 89)
    {
        printf("Grade B");
    }
    else if (per >= 70 && per <= 79)
    {
        printf("Grade C");
    }
    else if (per >= 60 && per <= 69)
    {
        printf("Grade D");
    }
    else if (per >= 50 && per <= 59)
    {
        printf("Grade E");
    }
    else
    {
        printf("Your are fail");
    }
}