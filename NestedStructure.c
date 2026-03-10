#include<stdio.h>
struct India {
    char N[30];
    int a;
    struct Russia
    {
        char f[30];
        int s;
    }p;
}q;
int main () {
    printf("Enter name : ");
    scanf("%s", &q.N);
    printf("Enter father name : ");
    scanf("%s", &q.p.f);
    printf("Enter age : ");
    scanf("%d",&q.a);
    printf("Enter salary : ");
    scanf("%d",&q.p.s);

    printf("\nYour Name is %s And Your age is %d years old \nYour father's name is %s and Your father's salary is %d \n",q.N,q.a,q.p.f,q.p.s);
    return 0;
}
 