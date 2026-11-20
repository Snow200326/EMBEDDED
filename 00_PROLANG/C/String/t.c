#include<stdio.h>
#include <string.h>
#pragma pack(1) 

// Function Declaration


struct Employee      // Structure Definition
{
    // Members
    int id;             // 4byte 
    char name[10];           // 10byte 
    float salary;   // 4Byte
};
void Details(struct Employee);
struct Employee SetDetails();

int main()
{
    // 1st Method to Declare the Variable
    struct Employee S1;
        S1=SetDetails();

        Details(S1);
    
    return 0;
}

// Function with Argrument & No Return
void Details(struct Employee emp)
{
        printf("\nEmployee id is: %d",emp.id);
        printf("\nEmployee Name is: %s",emp.name);
        printf("\nEmployee salary is: %f",emp.salary);
}
struct Employee SetDetails(){
        struct Employee S1;
        printf("\nEnter the Employee Name:");
        scanf("%s",S1.name);  
        printf("\nEnter the Employee Id:");
        scanf("%d",&S1.id);
        printf("\nEnter the Employee Salary:");
        scanf("%f",&S1.salary);

        printf("\n-------------------------------");
        return S1;
}