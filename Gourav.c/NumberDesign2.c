
#include<stdio.h>
int main () {
    int i,j,k,l;
    for(i=1; i<=4; i++) {
        printf("\n");
        for(k=4; k>i; k--) {
            printf(" ");
        }
            for(j=1; j<=i; j++) {
                printf("%d",j);   
            }
            for(l=i-1; l>=i; l--) {
                printf("%d",l);
            }
    }
    return 0;
}