#include<stdio.h>
union Gourav {
    char N[30];
    int a;
    float r;
}P;
    
int main () {
    printf("Enter name : ");
    scanf("%s", &P.N);
    printf("Enter Salary : ");
    scanf("%s", &P.r);
    printf("Enter Age : ");
    scanf("%d",&P.a);
    printf("Your Name is %s and Your Roll No. is %d and Your Salary is %f",P.N,P.a,P.r);
} 