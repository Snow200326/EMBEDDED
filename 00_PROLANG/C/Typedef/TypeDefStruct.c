#include <stdio.h>
struct Employee
{
    /* data */
    int id;
}; // method 3
typedef struct Employee
{
    /* data */
    int id;
} emp; // method 3

int main()
{
    typedef struct Employee emp; // method 1;
    emp s1;
    s1.id = 10;
    printf("%d", s1.id);
}