#include<stdio.h>
int main() {
    int a[100],n,i,j,t;
    printf("Enter How Many Numbers You Want to Print : ");
    scanf("%d",&n);
    printf("Enter Numbers : ");
    for (i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    for (i=0; i<n-1; i++) {  
        for (j=0; j<n-1-i; j++) {
            if(a[j]>a[j+1]) {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("\n Numbers in Asscending Order : ");
    for (i=0; i<n; i++) {
        printf("\n %d",a[i]);
    }
    return 0;
}