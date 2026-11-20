#include<stdio.h>
#include<stdlib.h>
int main()
{
    int m;
    printf("Enter the size of the element:- \n");
    scanf("%d",&m);
    int *ptr=(int *)malloc(m*sizeof(int));
    int i=0;
    while (i<m)
    {
        scanf("%d",ptr[i]);
        i++;
        /* code */
    }
    while (*ptr!='\0')
    {
        printf("%d",*ptr);
        /* code */
    }
} 