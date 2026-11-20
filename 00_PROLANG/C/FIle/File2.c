#include<stdio.h>
void fun();

int main(){
    FILE *ptr;
    char text[100];
    ptr = fopen("NewFile.txt","r+");
    if(ptr == NULL){
        printf("hI");
    }
    else{

    //    printf("These file is created ....");
       while (!feof(ptr))
       {
           fgets(text,20,ptr);
           /* code */
           printf("%s\n",text);
        }
       
       fclose(ptr);
    }
}