#include<stdio.h>
struct India {
    int a[100];
} P;

int main () { 
    int i,n,t,f=0;
    printf("How many number you want to print = ");
    scanf("%d",&n);
    printf("Enter %d numbers: ", n);
    for (i=0; i<n; i++) {
        scanf("%d",&P.a[i]);
    }
    printf("Enter number to be search = ");
    scanf("%d",&t);
    for (i=0; i<n; i++) {
        if(P.a[i]==t) {
            printf("Number found at position = %d",i+1);
            f=1;
            break;
        } 
    }
    if(f==0) {
        printf("Number not found");
    }
    return 0;
}