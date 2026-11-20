#include <stdio.h>
struct Demo
{
    int a;
    char b;
    float c;
    double d;
};
int main(){
    struct Demo n;
    n.a= 32769;
    n.b='A';
    n.c=2.22;
    n.d=4.33222;
    // enum days {1,2,3,4,5};

    printf("vlaue of Int    :- %d\n",n.a);
    printf("vlaue of Char   :- %c\n",n.b);
    printf("vlaue of float  :- %f\n",n.c);
    printf("vlaue of double :- %.2f\n",n.d);
    printf("\"Dnyanesh\"");
}
