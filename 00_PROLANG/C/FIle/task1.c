#include<stdio.h>
#include<string.h>
void fun();
typedef struct Studentdetails
{
    int id;
    char text[100];
} Details;


int main(){
    Details s1;
    FILE *ptr; // file pointer.......
    int value;
    char read[100];
    printf("Enter your id :- ");
    scanf("%d", &s1.id);
    getchar();
    printf("Enter the name :- ");
    gets(s1.text);
    ptr = fopen("NewFile.txt","w");/// function of the file.....

    if(ptr == NULL){
        printf("hI");
    }
    else{
    fprintf(ptr,"%s","Text \t");//  function of the file...
       fprintf(ptr,"%s",s1.text);
       fscanf(ptr,"%s %d ",read,&value);
       fclose(ptr);
    }
}