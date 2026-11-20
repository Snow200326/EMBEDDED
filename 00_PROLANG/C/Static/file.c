#include<stdio.h>
#include"Static.c"
extern int count;
 void counter(){
     while(count<5){
         printf("%d",count);
         count++;
    }
}
int main(){
    counter();
    return 0;
}