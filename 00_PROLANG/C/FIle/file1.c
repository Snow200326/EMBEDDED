#include<stdio.h>
void fun();

int main(){
    FILE *ptr;
    char text[]="The Name is Dnyanesh Dahiwadkar.....";
    ptr = fopen("NewFile.txt","w");

    if(ptr == NULL){
        printf("hI");
    }
    else{
         fprintf(ptr,"%s","Text \t");
       fprintf(ptr,"%s",text);
       fclose(ptr);
    }
}