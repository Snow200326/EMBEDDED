#include<stdio.h>
#include<string.h>
// struct method 1:-
struct info
{
    /* data */
    int id;
    char name[20];
    float per;
};
// struct method 2:-
struct method2
{
    /* data */
    int id2;
    char name2[20];
    float per2;
}m1,m2;
int main(){
    struct info  s1,s2;
    strcpy(s1.name,"Dnyanesh");
    s1.id=40;
    s1.per=43.223;
    printf("%s\n",s1.name);
    printf("%d\n",s1.id);
    printf("%.2f",s1.per);

}
