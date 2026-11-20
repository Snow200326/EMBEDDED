#include <stdio.h>
void Range_prime(int, int);
int prime(int);
int main()
{
    int s;
    int e;
    printf("Enter the Range:-");
    scanf("%d %d", &s, &e);
    Range_prime(s, e);
}
void Range_prime(int s, int e)
{
    while (s <= e)
    {
        /* code */
        if (prime(s))
        {
            printf("%d\t", s);
        }
        s++;
    }
}

int prime(int num)
{
    int i;
    for (i = 2; i < num / 2; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}