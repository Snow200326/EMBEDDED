#include<stdio.h>
int main(){
    int income,age;
    printf("Enter your age:-");
    scanf("%d",&age);
    printf("Enter your income:-");
    scanf("%d",&income);
    if(age>=18){
        if(income>=30000){
            printf("U are elegible for loan...");
        }
        else
        {
            printf("Ur income is less...");
        }
    }
    else
    {
        printf("Ur age is less than 18");
    }

}