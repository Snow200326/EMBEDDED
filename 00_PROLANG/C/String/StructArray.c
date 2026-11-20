#include<stdio.h>
struct Employee
{
    /* data */ int id;
    char name[10];
    float salary;
};
int main(){
    struct Employee arr[3];
    printf("Size of %u ",sizeof( struct Employee));
    for (int i = 0; i < 3; i++)
    {
        /* code */
        printf("Enter the id :-");
        scanf("%d",&arr[i].id);
        printf("Enter the name :-");
        scanf("%s",arr[i].name);
        printf("Enter the salay :-");
        scanf("%f",&arr[i].salary);
    }
     for (int i = 0; i < 3; i++)
    {
        /* code */
       printf("The id of employee %d ",arr[i].id); 
       printf("The name of employee %s ",arr[i].name);
       printf("The salary of employee %f ",arr[i].salary);
    }
    
}