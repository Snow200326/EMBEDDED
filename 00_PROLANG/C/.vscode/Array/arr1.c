#include <stdio.h>

int main()
{
    int data[5] = {87, 32, 90, 17, 100};

    printf("\nArray Elements are:\n");
    for (int i = 0; i <= 4; i++)
    {
        printf("%d\t", data[i]);
    }

    printf("\n\nArray Elements Address is:\n");
    for (int i = 0; i <= 4; i++)
    {
        printf("%x\t", &data[i]);
    }

    printf("\n\nSize of Array is: %d", sizeof(data));

    return 0;
}
