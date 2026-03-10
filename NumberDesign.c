
#include<stdio.h>
int main () {
    int i,j,k;
    for(i=4; i>=1; i--) {
        printf("\n");
        for(k=4; k>i; k--) {
            printf(" ");
        }
            for(j=1; j<=2*i-1; j++) {
                printf("%d",j);
                
            }
    }
    return 0;
}