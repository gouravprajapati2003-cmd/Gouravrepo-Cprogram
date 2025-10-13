#include<stdio.h>
#include<math.h>
int main() {
    int a,b,c,x,y,d;
    printf("Enter Value a,b,c: ");
    scanf("%d%d%d", &a,&b,&c);
    d = b*b-4*a*c;
    if (d>0) {
        printf("Roots are real and Unequal");
        x=(-b+sqrt(d))/(2*a);
        y=(-b-sqrt(d))/(2*a);
        printf("\n Root1 is %d",x);
        printf("\n Root2 is %d",y);
    } else if (d==0) {
        printf("Root are real & equal");
        x=-b/(2*a);
        y=x;
        printf("\n Root1 is %d",x);
        printf("\n Root2 is %d",y);
    } else {
        printf("Root are imaginary");
        return 0;
    }
}