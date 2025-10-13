#include<stdio.h>
int main() {
    long S;
    double T;
    printf("Enter Salary : ");
    scanf("%ld",&S);
    if(S<=60000) {
        T = 0;
    } else if (S>60000 && S<=100000) {
        T = (S-60000)*.10;
    } else if(S>100000 && S<=200000) {
        T = 4000+(S-100000)*.15;
    } else {
        T = 19000+(S-200000)*.20;
    }
    printf("Tax = %lf",T);
    return 0;

}