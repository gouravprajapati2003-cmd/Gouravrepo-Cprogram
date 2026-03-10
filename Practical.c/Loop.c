// Program to implement looping constructs in C language.
#include<stdio.h>
int main () {
    int n,i,f=1;
    printf("Enter Number : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++) {
        f = f*i;
    }
    printf("Factorial is = %d",f);
}